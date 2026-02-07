#!/bin/zsh
mkdir -p $HOME/.config/karabiner

#TODO fix this, must link the whole directory per karabiner docs
ln -sf $PWD/karabiner.json $HOME/.config/karabiner/

echo 'Done!'
