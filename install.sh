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
systemctl enable clock.timer


