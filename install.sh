#!/bin/bash
##Make sure everything is current
set -e 
if [[ ! -a /usr/bin/git ]]; then
	echo "Error, you must manually install git (sudo apt install git or pacman -S git)"
	exit "Git not installed"
fi
/usr/bin/git pull origin master
##Make some simlinks
sudo install $1
make_link(){
	sudo ln -sf $(pwd)/$1 $2$1
}
make_link clock.py /usr/local/sbin/
make_link clock_off.py /usr/local/sbin/
cd system_files
make_link clock.service /etc/systemd/system/
make_link clock.timer /etc/systemd/system/
##enables the timer
/usr/bin/sudo systemctl enable clock.timer
cd ../install_files/
##installs all of the dependencies, python3 and python3-pip, and the python dependencies
install() {
	if [[ $1 == 'arch' ]]; then
		pacman -S $(cat dependencies.system-arch) --noconfirm
	fi
	if [[ $1 == 'deb' ]]; then
		apt update
		apt install $(cat dependencies.system-deb) --yes

	fi
	pip3 install $(cat dependencies.python)
}
install_gpio_aur() {
	echo "This will only install python-rasberry-gpio from the AUR"
	cd $HOME
	git clone https://aur.archlinux.org/python-raspberry-gpio.git
	cd python-raspberry-gpio
	makepkg -s
	sudo pacman -U *pkg.tar.xz
}
install_gpio_aur
echo "Done!! It *should* work now"
echo "Note: There may be other steps if one is using Arch Linux for ARM,
The wiki will be your best friend in this regard"
