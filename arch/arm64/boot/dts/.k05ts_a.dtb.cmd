cmd_arch/arm64/boot/dts/k05ts_a.dtb := /home/visi0nary/ElephoneP8000/CM12.1/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-android-gcc -E -Wp,-MD,arch/arm64/boot/dts/.k05ts_a.dtb.d.pre.tmp -nostdinc -I/home/visi0nary/android_kernel_elephone_p8000/arch/arm64/boot/dts -I/home/visi0nary/android_kernel_elephone_p8000/arch/arm64/boot/dts/include -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/.k05ts_a.dtb.dts.tmp arch/arm64/boot/dts/k05ts_a.dts ; /home/visi0nary/android_kernel_elephone_p8000/scripts/dtc/dtc -O dtb -o arch/arm64/boot/dts/k05ts_a.dtb -b 0 -i arch/arm64/boot/dts/ -i /home/visi0nary/android_kernel_elephone_p8000/drivers/misc/mediatek/mach/mt6735/k05ts_a/dct/dct/ -d arch/arm64/boot/dts/.k05ts_a.dtb.d.dtc.tmp arch/arm64/boot/dts/.k05ts_a.dtb.dts.tmp ; cat arch/arm64/boot/dts/.k05ts_a.dtb.d.pre.tmp arch/arm64/boot/dts/.k05ts_a.dtb.d.dtc.tmp > arch/arm64/boot/dts/.k05ts_a.dtb.d

source_arch/arm64/boot/dts/k05ts_a.dtb := arch/arm64/boot/dts/k05ts_a.dts

deps_arch/arm64/boot/dts/k05ts_a.dtb := \
  arch/arm64/boot/dts/mt6753.dtsi \
    $(wildcard include/config/base.h) \
    $(wildcard include/config/addr.h) \
  /home/visi0nary/android_kernel_elephone_p8000/drivers/misc/mediatek/mach/mt6735/k05ts_a/dct/dct/cust_eint.dtsi \

arch/arm64/boot/dts/k05ts_a.dtb: $(deps_arch/arm64/boot/dts/k05ts_a.dtb)

$(deps_arch/arm64/boot/dts/k05ts_a.dtb):
