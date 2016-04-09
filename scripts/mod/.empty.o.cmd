cmd_scripts/mod/empty.o := /home/visi0nary/ElephoneP8000/CM12.1/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-android-gcc -Wp,-MD,scripts/mod/.empty.o.d  -nostdinc -isystem /home/visi0nary/ElephoneP8000/CM12.1/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/../lib/gcc/aarch64-linux-android/4.9.x-google/include -I/home/visi0nary/android_kernel_elephone_p8000/arch/arm64/include -Iarch/arm64/include/generated  -Iinclude -I/home/visi0nary/android_kernel_elephone_p8000/arch/arm64/include/uapi -Iarch/arm64/include/generated/uapi -I/home/visi0nary/android_kernel_elephone_p8000/include/uapi -Iinclude/generated/uapi -include /home/visi0nary/android_kernel_elephone_p8000/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Werror=format -Werror=int-to-pointer-cast -Werror=pointer-to-int-cast -O2 -mgeneral-regs-only -fno-pic -mtune=cortex-a53 -march=armv8-a -O2 -ftree-vectorize -Wframe-larger-than=1400 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(empty)"  -D"KBUILD_MODNAME=KBUILD_STR(empty)" -c -o scripts/mod/empty.o scripts/mod/empty.c

source_scripts/mod/empty.o := scripts/mod/empty.c

deps_scripts/mod/empty.o := \

scripts/mod/empty.o: $(deps_scripts/mod/empty.o)

$(deps_scripts/mod/empty.o):
