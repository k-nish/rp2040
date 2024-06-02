# Intoduction

This repos stores scripts for RP2040.

This repo scripts are verified in AE-RP2040.

# Build

## Prerequisites

mkdir $HOME/pico
git clone https://github.com/raspberrypi/pico-sdk.git

## Build scripts

cd $HOME/
git clone https://github.com/k-nish/rp2040 
mkdir rp2040/build && cd rp2040/build
export PICO_SDK_PATH=$HOME/pico/pico-sdk
cmake ..
make -j4
