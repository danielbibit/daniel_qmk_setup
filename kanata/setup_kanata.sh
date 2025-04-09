#!/bin/bash

mkdir ${HOME}/.config/kanata
ln -sf $PWD/config.kbd ${HOME}/.config/kanata/config.kbd

sudo cp 10-daniel.keyboard.rules /etc/udev/rules.d/
sudo groupadd uinput
sudo usermod -aG input $USER
sudo usermod -aG uinput $USER
sudo modprobe uinput

mkdir -p ~/.config/systemd/user
cp kanata.service ~/.config/systemd/user/kanata.service

systemctl --user daemon-reload
systemctl --user enable kanata.service

echo "Please restart the system"
