#!/bin/bash

mkdir ${HOME}/.config/xremap
ln -sf $PWD/config.yml ${HOME}/.config/xremap/config.yml

sudo cp 10-daniel.xremap.rules /etc/udev/rules.d/
sudo groupadd --system uinput
sudo usermod -aG input $USER
sudo usermod -aG uinput $USER
sudo modprobe uinput

mkdir -p ~/.config/systemd/user
cp xremap.service ~/.config/systemd/user/xremap.service

systemctl --user daemon-reload
systemctl --user enable xremap.service

echo "Please restart the system"
