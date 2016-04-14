# android_kernel_elephone_p8000
Kernel repository for Elephone P8000 for visi0nary's kernel and my CyanogenMod builds
* thanks to jfang for some fixes!


How to compile a standalone kernel:

git clone git@github.com:visi0nary/android_kernel_elephone_p8000.git

cd android_kernel_elephone_p8000

export ARCH=arm64

export CROSS_COMPILE=/path/to/your/toolchain/aarch64/aarch64-linux-android-x.x/bin/aarch64-linux-android-

make p8000_cyanogenmod12_1_defconfig

make -jX (where X is the # of your CPU threads +1)


Once it is built use this image:

arch/arm64/boot/Image.gz-dtb



Happy hacking!
