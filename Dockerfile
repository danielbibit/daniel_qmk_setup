FROM ubuntu:22.04

RUN apt-get update

RUN apt-get install -y \
    python3 \
    python3-pip \
    git \
    sudo

RUN python3 -m pip install qmk

RUN git config --global --add safe.directory '*'

WORKDIR /workspace

COPY . .

# Setup qmk on keychron fork
WORKDIR /workspace/qmk/keychron_fork/qmk_firmware

RUN qmk setup --yes

# Setup qmk upstream
WORKDIR /workspace/qmk/upstream/qmk_firmware

RUN qmk setup --yes

#Set workspace back
WORKDIR /workspace
