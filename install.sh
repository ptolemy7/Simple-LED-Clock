#!/bin/bash
##Make sure everything is current
/usr/bin/git pull origin master
##Make some simlinks
make_link(){
	ln -sf $(pwd)/$1 $2$1
}
make_link clock.py /usr/local/sbin/
make_link clock_off.py /usr/local/sbin/
cd system_files
make_link clock.service /etc/systemd/system/
make_link clock.timer /etc/systemd/system/
##enables the timer
systemctl enable clock.timer
cd ../install_files/
##installs all of the dependencies, python3 and python3-pip, and the python dependencies
install() {
	if [[ $1 == 'arch' ]]; then
		pacman -S $(cat dependencies.system-arch)
	fi
	if [[ $1 == 'deb' ]]; then
		apt update
		apt install $(cat dependencies.system-deb) --yes

	fi
	pip3 install $(cat dependencies.python)
}

install $1

echo "Done!! It *should* work now"
