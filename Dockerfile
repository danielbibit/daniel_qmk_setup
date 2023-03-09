FROM ubuntu:22.04

RUN apt-get update

RUN apt-get install -y \
    python3 \
    python3-pip \
    git \
    sudo

RUN python3 -m pip install qmk

RUN git config --global --add safe.directory '*'

# RUN qmk-setup
