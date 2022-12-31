sudo cp 10-daniel.kmonad.rules /etc/udev/rules.d/
sudo groupadd uinput
sudo cp kmonad.service /etc/systemd/system/kmonad.service
sudo systemctl enable kmonad
