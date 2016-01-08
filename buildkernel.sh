#!/bin/bash

#alternative working tc: aarch64-linux-android-4.9-kernel
#alternative working tc: android_prebuilts_gcc_linux-x86_aarch64_aarch64-linux-android-4.9

export ARCH=arm64
export CONFIG_NO_ERROR_ON_MISMATCH=y
export CROSS_COMPILE=aarch64-linux-android-
export PATH=/home/osboxes/toolchains/aarch64-linux-android-4.9_modded/bin:$PATH
#export CONFIG_DEBUG_SECTION_MISMATCH=y

find ./ -name '*~' -o -name '*.bak' | xargs rm;
rm -rf ~/.ccache;
make distclean -w V=0 && make mrproper -w V=0;
echo "Compiling Kernel, using config file $1, this might take long, window will be closed after it is done...";
echo "You will find the Logs of kernel compilation in build.log file.";
rm ./.config;
nice make -w V=0 $1 > ./build.log;
make -w -j`grep 'processor' /proc/cpuinfo | wc -l` V=0 >> ./build.log;

