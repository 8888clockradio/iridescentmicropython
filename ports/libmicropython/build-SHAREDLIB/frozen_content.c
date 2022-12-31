//
// Content for MICROPY_MODULE_FROZEN_STR
//
#include <stdint.h>
#define MP_FROZEN_STR_NAMES \

const uint32_t mp_frozen_str_sizes[] = { 0 };
const char mp_frozen_str_content[] = {
"\0"
};

//
// Content for MICROPY_MODULE_FROZEN_MPY
//
#ifdef __cplusplus
extern "C" {
#endif
#include "avr/pgmspace.h"
#include "py/mpconfig.h"
#include "py/objint.h"
#include "py/objstr.h"
#include "py/emitglue.h"
#include "py/nativeglue.h"

#if MICROPY_PY_BUILTINS_FLOAT
typedef struct _mp_obj_float_t {
    mp_obj_base_t base;
    mp_float_t value;
} mp_obj_float_t;
#endif

#if MICROPY_PY_BUILTINS_COMPLEX
typedef struct _mp_obj_complex_t {
    mp_obj_base_t base;
    mp_float_t real;
    mp_float_t imag;
} mp_obj_complex_t;
#endif
#if MICROPY_LONGINT_IMPL != 2
#error "incompatible MICROPY_LONGINT_IMPL"
#endif

#if MPZ_DIG_SIZE != 16
#error "incompatible MPZ_DIG_SIZE"
#endif

enum {
    MP_QSTR_digitalio_dot_py = MP_QSTRnumber_of,
    MP_QSTR_board_id,
    MP_QSTR_detector,
    MP_QSTR_adafruit_blinka_dot_agnostic,
    MP_QSTR_chip,
    MP_QSTR_BCM2XXX,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_bcm283x_dot_pin,
    MP_QSTR_AM33XX,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_am335x_dot_pin,
    MP_QSTR_AM65XX,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_am65xx_dot_pin,
    MP_QSTR_JH71x0,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_starfive_dot_JH71x0_dot_pin,
    MP_QSTR_DRA74X,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_dra74x_dot_pin,
    MP_QSTR_SUN8I,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_allwinner_dot_h3_dot_pin,
    MP_QSTR_SAMA5,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_sama5_dot_pin,
    MP_QSTR_T210,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_tegra_dot_t210_dot_pin,
    MP_QSTR_T186,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_tegra_dot_t186_dot_pin,
    MP_QSTR_T194,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_tegra_dot_t194_dot_pin,
    MP_QSTR_T234,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_tegra_dot_t234_dot_pin,
    MP_QSTR_S905,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_amlogic_dot_s905_dot_pin,
    MP_QSTR_S905X,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_amlogic_dot_s905x_dot_pin,
    MP_QSTR_S905X3,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_amlogic_dot_s905x3_dot_pin,
    MP_QSTR_S905Y2,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_amlogic_dot_s905y2_dot_pin,
    MP_QSTR_S922X,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_amlogic_dot_s922x_dot_pin,
    MP_QSTR_A311D,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_amlogic_dot_a311d_dot_pin,
    MP_QSTR_EXYNOS5422,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_samsung_dot_exynos5422_dot_pin,
    MP_QSTR_APQ8016,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_snapdragon_dot_apq8016_dot_pin,
    MP_QSTR_IMX8MX,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_nxp_imx8m_dot_pin,
    MP_QSTR_IMX6ULL,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_nxp_imx6ull_dot_pin,
    MP_QSTR_HFU540,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_hfu540_dot_pin,
    MP_QSTR_A64,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_allwinner_dot_a64_dot_pin,
    MP_QSTR_A33,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_allwinner_dot_a33_dot_pin,
    MP_QSTR_MIPS24KEC,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_mips24kec_dot_pin,
    MP_QSTR_RK3308,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rockchip_dot_rk3308_dot_pin,
    MP_QSTR_RK3399,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rockchip_dot_rk3399_dot_pin,
    MP_QSTR_RK3328,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rockchip_dot_rk3328_dot_pin,
    MP_QSTR_PENTIUM_N3710,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_pentium_dot_n3710_dot_pin,
    MP_QSTR_STM32MP157,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_stm32_dot_stm32mp157_dot_pin,
    MP_QSTR_MT8167,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_mt8167_dot_pin,
    MP_QSTR_H3,
    MP_QSTR_H5,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_allwinner_dot_h5_dot_pin,
    MP_QSTR_H6,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_allwinner_dot_h6_dot_pin,
    MP_QSTR_H616,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_allwinner_dot_h616_dot_pin,
    MP_QSTR_D1_RISCV,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_allwinner_dot_D1_dot_pin,
    MP_QSTR_ftdi_ft232h,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_ftdi_mpsse_dot_ft232h_dot_pin,
    MP_QSTR_ftdi_ft2232h,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_ftdi_mpsse_dot_ft2232h_dot_pin,
    MP_QSTR_binho_nova,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_nova_dot_pin,
    MP_QSTR_greatfet_one,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_nxp_lpc4330_dot_pin,
    MP_QSTR_microchip_mcp2221,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_mcp2221_dot_pin,
    MP_QSTR_RP2040_U2IF,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rp2040_u2if_dot_pin,
    MP_QSTR_STM32F405,
    MP_QSTR_RP2040,
    MP_QSTR_Enum,
    MP_QSTR_ContextManaged,
    MP_QSTR_adafruit_blinka,
    MP_QSTR_DriveMode,
    MP_QSTR_PUSH_PULL,
    MP_QSTR_Direction,
    MP_QSTR_INPUT,
    MP_QSTR_OUTPUT,
    MP_QSTR_Pull,
    MP_QSTR_UP,
    MP_QSTR_DOWN,
    MP_QSTR_DigitalInOut,
    MP_QSTR__pin,
    MP_QSTR_direction,
    MP_QSTR_switch_to_output,
    MP_QSTR_drive_mode,
    MP_QSTR_switch_to_input,
    MP_QSTR___direction,
    MP_QSTR___pull,
    MP_QSTR_Not_space_a_space_Pull,
    MP_QSTR___drive_mode,
    MP_QSTR_pin,
    MP_QSTR_val,
    MP_QSTR_pul,
    MP_QSTR_mod,
    MP_QSTR_Not_space_a_space_Direction,
    MP_QSTR_Not_space_an_space_output,
    MP_QSTR_Not_space_an_space_input,
    MP_QSTR__brace_open__brace_close__space_unsupported_space_on_space__brace_open__brace_close_,
    MP_QSTR_usb_hid_dot_py,
    MP_QSTR_Sequence,
    MP_QSTR_typing,
    MP_QSTR_Path,
    MP_QSTR_pathlib,
    MP_QSTR_os,
    MP_QSTR_atexit,
    MP_QSTR_dwc2,
    MP_QSTR_read_text,
    MP_QSTR_gadget_root,
    MP_QSTR_boot_device,
    MP_QSTR_devices,
    MP_QSTR_Device,
    MP_QSTR_descriptor,
    MP_QSTR_usage_page,
    MP_QSTR_usage,
    MP_QSTR_report_ids,
    MP_QSTR_in_report_lengths,
    MP_QSTR_out_report_lengths,
    MP_QSTR_KEYBOARD,
    MP_QSTR_MOUSE,
    MP_QSTR_CONSUMER_CONTROL,
    MP_QSTR_BOOT_KEYBOARD,
    MP_QSTR_BOOT_MOUSE,
    MP_QSTR__percent_s_slash_UDC,
    MP_QSTR_write_text,
    MP_QSTR_glob,
    MP_QSTR_rglob,
    MP_QSTR_is_dir,
    MP_QSTR_configs_slash__star_,
    MP_QSTR_parents,
    MP_QSTR_exist_ok,
    MP_QSTR__percent_s_slash_configs,
    MP_QSTR__percent_s,
    MP_QSTR__percent_s_slash_bcdUSB,
    MP_QSTR__percent_s_slash_,
    MP_QSTR_150,
    MP_QSTR_write_bytes,
    MP_QSTR_symlink_to,
    MP_QSTR__last_received_report,
    MP_QSTR_send_report,
    MP_QSTR_get_device_path,
    MP_QSTR_rb_plus_,
    MP_QSTR_big,
    MP_QSTR_last_received_report,
    MP_QSTR_get_last_received_report,
    MP_QSTR_set_blocking,
    MP_QSTR_fileno,
    MP_QSTR__colon_,
    MP_QSTR_this,
    MP_QSTR_FileNotFoundError,
    MP_QSTR_requested_devices,
    MP_QSTR_FileExistsError,
    MP_QSTR_report,
    MP_QSTR_report_id,
    MP_QSTR_libcomposite,
    MP_QSTR__slash_proc_slash_modules,
    MP_QSTR_configs_slash__star__star__slash_hid_dot_usb_star_,
    MP_QSTR_configs_slash__star__slash_strings_slash__star__slash__star_,
    MP_QSTR_configs_slash__star__slash_strings_slash__star_,
    MP_QSTR_functions_slash__star_,
    MP_QSTR__percent_s_slash_functions,
    MP_QSTR__percent_s_slash_bcdDevice,
    MP_QSTR__percent_s_slash_bDeviceClass,
    MP_QSTR__percent_s_slash_bDeviceProtocol,
    MP_QSTR__percent_s_slash_bDeviceSubClass,
    MP_QSTR__percent_s_slash_bMaxPacketSize0,
    MP_QSTR__percent_s_slash_idProduct,
    MP_QSTR__percent_s_slash_idVendor,
    MP_QSTR__percent_s_slash_configs_slash_device_dot_1,
    MP_QSTR__percent_s_slash_strings_slash_0x409,
    MP_QSTR_my_space_configuration,
    MP_QSTR__percent_s_slash_MaxPower,
    MP_QSTR__percent_s_slash_bmAttributes,
    MP_QSTR__percent_s_slash_functions_slash_hid_dot_usb_percent_s,
    MP_QSTR__percent_s_slash_protocol,
    MP_QSTR__percent_s_slash_report_length,
    MP_QSTR__percent_s_slash_subclass,
    MP_QSTR__percent_s_slash_report_desc,
    MP_QSTR__percent_s_slash_hid_dot_usb_percent_s,
    MP_QSTR__slash_sys_slash_class_slash_udc_slash_,
    MP_QSTR__slash_dev_slash_hidg_percent_s,
    MP_QSTR_board_dot_py,
    MP_QSTR_adafruit_platformdetect_dot_constants_dot_boards,
    MP_QSTR_constants,
    MP_QSTR_boards,
    MP_QSTR_FEATHER_HUZZAH,
    MP_QSTR_adafruit_blinka_dot_board_dot_feather_huzzah,
    MP_QSTR_NODEMCU,
    MP_QSTR_adafruit_blinka_dot_board_dot_nodemcu,
    MP_QSTR_PYBOARD,
    MP_QSTR_adafruit_blinka_dot_board_dot_pyboard,
    MP_QSTR_RASPBERRY_PI_PICO,
    MP_QSTR_adafruit_blinka_dot_board_dot_raspberrypi_dot_pico,
    MP_QSTR_RASPBERRY_PI_4B,
    MP_QSTR_RASPBERRY_PI_CM4,
    MP_QSTR_RASPBERRY_PI_400,
    MP_QSTR_adafruit_blinka_dot_board_dot_raspberrypi_dot_raspi_4b,
    MP_QSTR_any_raspberry_pi_40_pin,
    MP_QSTR_adafruit_blinka_dot_board_dot_raspberrypi_dot_raspi_40pin,
    MP_QSTR_any_raspberry_pi_cm,
    MP_QSTR_adafruit_blinka_dot_board_dot_raspberrypi_dot_raspi_cm,
    MP_QSTR_RASPBERRY_PI_B_REV1,
    MP_QSTR_adafruit_blinka_dot_board_dot_raspberrypi_dot_raspi_1b_rev1,
    MP_QSTR_RASPBERRY_PI_A,
    MP_QSTR_RASPBERRY_PI_B_REV2,
    MP_QSTR_adafruit_blinka_dot_board_dot_raspberrypi_dot_raspi_1b_rev2,
    MP_QSTR_BEAGLEBONE,
    MP_QSTR_adafruit_blinka_dot_board_dot_beagleboard_dot_beaglebone_black,
    MP_QSTR_BEAGLEBONE_BLACK,
    MP_QSTR_BEAGLEBONE_GREEN,
    MP_QSTR_BEAGLEBONE_GREEN_GATEWAY,
    MP_QSTR_BEAGLEBONE_BLACK_INDUSTRIAL,
    MP_QSTR_BEAGLEBONE_GREEN_WIRELESS,
    MP_QSTR_BEAGLEBONE_BLACK_WIRELESS,
    MP_QSTR_BEAGLEBONE_POCKETBEAGLE,
    MP_QSTR_adafruit_blinka_dot_board_dot_beagleboard_dot_beaglebone_pocketbeagle,
    MP_QSTR_BEAGLEBONE_AI,
    MP_QSTR_adafruit_blinka_dot_board_dot_beagleboard_dot_beaglebone_ai,
    MP_QSTR_BEAGLEV_STARLIGHT,
    MP_QSTR_adafruit_blinka_dot_board_dot_beagleboard_dot_beaglev_starlight,
    MP_QSTR_ORANGE_PI_PC,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepipc,
    MP_QSTR_ORANGE_PI_R1,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepir1,
    MP_QSTR_ORANGE_PI_ZERO,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepizero,
    MP_QSTR_ORANGE_PI_ONE,
    MP_QSTR_ORANGE_PI_PC_PLUS,
    MP_QSTR_ORANGE_PI_LITE,
    MP_QSTR_ORANGE_PI_PLUS_2E,
    MP_QSTR_ORANGE_PI_2,
    MP_QSTR_ORANGE_PI_ZERO_PLUS_2H5,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepizeroplus2h5,
    MP_QSTR_ORANGE_PI_ZERO_PLUS,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepizeroplus,
    MP_QSTR_ORANGE_PI_ZERO_2,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepizero2,
    MP_QSTR_ORANGE_PI_3,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepi3,
    MP_QSTR_ORANGE_PI_4,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepi4,
    MP_QSTR_ORANGE_PI_4_LTS,
    MP_QSTR_BANANA_PI_M2_ZERO,
    MP_QSTR_adafruit_blinka_dot_board_dot_bananapi_dot_bpim2zero,
    MP_QSTR_BANANA_PI_M2_PLUS,
    MP_QSTR_adafruit_blinka_dot_board_dot_bananapi_dot_bpim2plus,
    MP_QSTR_BANANA_PI_M5,
    MP_QSTR_adafruit_blinka_dot_board_dot_bananapi_dot_bpim5,
    MP_QSTR_GIANT_BOARD,
    MP_QSTR_adafruit_blinka_dot_board_dot_giantboard,
    MP_QSTR_JETSON_TX1,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_jetson_tx1,
    MP_QSTR_JETSON_TX2,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_jetson_tx2,
    MP_QSTR_JETSON_TX2_NX,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_jetson_tx2_nx,
    MP_QSTR_JETSON_XAVIER,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_jetson_xavier,
    MP_QSTR_JETSON_NANO,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_jetson_nano,
    MP_QSTR_JETSON_NX,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_jetson_nx,
    MP_QSTR_JETSON_AGX_ORIN,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_jetson_orin,
    MP_QSTR_CLARA_AGX_XAVIER,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_clara_agx_xavier,
    MP_QSTR_CORAL_EDGE_TPU_DEV,
    MP_QSTR_adafruit_blinka_dot_board_dot_coral_dev_board,
    MP_QSTR_CORAL_EDGE_TPU_DEV_MINI,
    MP_QSTR_adafruit_blinka_dot_board_dot_coral_dev_board_mini,
    MP_QSTR_ODROID_C2,
    MP_QSTR_adafruit_blinka_dot_board_dot_hardkernel_dot_odroidc2,
    MP_QSTR_ODROID_C4,
    MP_QSTR_adafruit_blinka_dot_board_dot_hardkernel_dot_odroidc4,
    MP_QSTR_ODROID_N2,
    MP_QSTR_adafruit_blinka_dot_board_dot_hardkernel_dot_odroidn2,
    MP_QSTR_KHADAS_VIM3,
    MP_QSTR_adafruit_blinka_dot_board_dot_khadas_dot_khadasvim3,
    MP_QSTR_ODROID_XU4,
    MP_QSTR_adafruit_blinka_dot_board_dot_hardkernel_dot_odroidxu4,
    MP_QSTR_DRAGONBOARD_410C,
    MP_QSTR_adafruit_blinka_dot_board_dot_dragonboard_410c,
    MP_QSTR_FTDI_FT232H,
    MP_QSTR_adafruit_blinka_dot_board_dot_ftdi_ft232h,
    MP_QSTR_FTDI_FT2232H,
    MP_QSTR_adafruit_blinka_dot_board_dot_ftdi_ft2232h,
    MP_QSTR_BINHO_NOVA,
    MP_QSTR_adafruit_blinka_dot_board_dot_binho_nova,
    MP_QSTR_MICROCHIP_MCP2221,
    MP_QSTR_adafruit_blinka_dot_board_dot_microchip_mcp2221,
    MP_QSTR_GREATFET_ONE,
    MP_QSTR_adafruit_blinka_dot_board_dot_greatfet_one,
    MP_QSTR_SIFIVE_UNLEASHED,
    MP_QSTR_adafruit_blinka_dot_board_dot_hifive_unleashed,
    MP_QSTR_PINE64,
    MP_QSTR_adafruit_blinka_dot_board_dot_pine64,
    MP_QSTR_PINEH64,
    MP_QSTR_adafruit_blinka_dot_board_dot_pineH64,
    MP_QSTR_SOPINE,
    MP_QSTR_adafruit_blinka_dot_board_dot_soPine,
    MP_QSTR_CLOCKWORK_CPI3,
    MP_QSTR_adafruit_blinka_dot_board_dot_clockworkcpi3,
    MP_QSTR_ONION_OMEGA2,
    MP_QSTR_adafruit_blinka_dot_board_dot_onion_dot_omega2,
    MP_QSTR_RADXA_ZERO,
    MP_QSTR_adafruit_blinka_dot_board_dot_radxa_dot_radxazero,
    MP_QSTR_ROCK_PI_S,
    MP_QSTR_adafruit_blinka_dot_board_dot_radxa_dot_rockpis,
    MP_QSTR_ROCK_PI_4,
    MP_QSTR_adafruit_blinka_dot_board_dot_radxa_dot_rockpi4,
    MP_QSTR_ROCK_PI_E,
    MP_QSTR_adafruit_blinka_dot_board_dot_radxa_dot_rockpie,
    MP_QSTR_UDOO_X86,
    MP_QSTR_adafruit_blinka_dot_board_dot_udoo_x86ultra,
    MP_QSTR_STM32MP157C_DK2,
    MP_QSTR_adafruit_blinka_dot_board_dot_stm32_dot_stm32mp157c_dk2,
    MP_QSTR_OSD32MP1_RED,
    MP_QSTR_adafruit_blinka_dot_board_dot_stm32_dot_osd32mp1_red,
    MP_QSTR_OSD32MP1_BRK,
    MP_QSTR_adafruit_blinka_dot_board_dot_stm32_dot_osd32mp1_brk,
    MP_QSTR_LUBANCAT_IMX6ULL,
    MP_QSTR_adafruit_blinka_dot_board_dot_lubancat_dot_lubancat_imx6ull,
    MP_QSTR_LUBANCAT_STM32MP157,
    MP_QSTR_adafruit_blinka_dot_board_dot_lubancat_dot_lubancat_stm32mp157,
    MP_QSTR_NANOPI_NEO_AIR,
    MP_QSTR_adafruit_blinka_dot_board_dot_nanopi_dot_neoair,
    MP_QSTR_NANOPI_DUO2,
    MP_QSTR_adafruit_blinka_dot_board_dot_nanopi_dot_duo2,
    MP_QSTR_NANOPI_NEO,
    MP_QSTR_adafruit_blinka_dot_board_dot_nanopi_dot_neo,
    MP_QSTR_PICO_U2IF,
    MP_QSTR_adafruit_blinka_dot_board_dot_pico_u2if,
    MP_QSTR_FEATHER_U2IF,
    MP_QSTR_adafruit_blinka_dot_board_dot_feather_u2if,
    MP_QSTR_QTPY_U2IF,
    MP_QSTR_adafruit_blinka_dot_board_dot_qtpy_u2if,
    MP_QSTR_ITSYBITSY_U2IF,
    MP_QSTR_adafruit_blinka_dot_board_dot_itsybitsy_u2if,
    MP_QSTR_MACROPAD_U2IF,
    MP_QSTR_adafruit_blinka_dot_board_dot_macropad_u2if,
    MP_QSTR_QT2040_TRINKEY_U2IF,
    MP_QSTR_adafruit_blinka_dot_board_dot_qt2040_trinkey_u2if,
    MP_QSTR_LICHEE_RV,
    MP_QSTR_adafruit_blinka_dot_board_dot_lichee_rv,
    MP_QSTR_SIEMENS_SIMATIC_IOT2050_ADV,
    MP_QSTR_adafruit_blinka_dot_board_dot_siemens_dot_siemens_iot2050,
    MP_QSTR_AML_S905X_CC,
    MP_QSTR_adafruit_blinka_dot_board_dot_librecomputer_dot_aml_s905x_cc_v1,
    MP_QSTR_sphinx,
    MP_QSTR_pkg_resources,
    MP_QSTR_get_distribution,
    MP_QSTR_adafruit_platformdetect,
    MP_QSTR_system,
    MP_QSTR_SCL,
    MP_QSTR_SDA,
    MP_QSTR_SCLK,
    MP_QSTR_MOSI,
    MP_QSTR_MISO,
    MP_QSTR_busio,
    MP_QSTR___version__,
    MP_QSTR___repo__,
    MP_QSTR___blinka__,
    MP_QSTR_ap_board,
    MP_QSTR_package,
    MP_QSTR_0_dot_0_dot_0_plus_auto_dot_0,
    MP_QSTR_Board_space_not_space_supported_space__brace_open__brace_close_,
    MP_QSTR_micropython_dot_py,
    MP_QSTR_x,
    MP_QSTR_f,
    MP_QSTR_neopixel_write_dot_py,
    MP_QSTR_any_raspberry_pi,
    MP_QSTR_neopixel,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_bcm283x,
    MP_QSTR_pico_u2if,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rp2040_u2if,
    MP_QSTR_feather_u2if,
    MP_QSTR_qtpy_u2if,
    MP_QSTR_itsybitsy_u2if,
    MP_QSTR_macropad_u2if,
    MP_QSTR_qt2040_trinkey_u2if,
    MP_QSTR_neopixel_write,
    MP_QSTR__neopixel,
    MP_QSTR_gpio,
    MP_QSTR_Board_space_not_space_supported,
    MP_QSTR___version___dot_py,
    MP_QSTR_VERSION,
    MP_QSTR_keypad_dot_py,
    MP_QSTR_threading,
    MP_QSTR_collections,
    MP_QSTR_digitalio,
    MP_QSTR_Event,
    MP_QSTR__EventQueue,
    MP_QSTR__KeysBase,
    MP_QSTR_Keys,
    MP_QSTR_KeyMatrix,
    MP_QSTR_ShiftRegisterKeys,
    MP_QSTR_interval,
    MP_QSTR_max_events,
    MP_QSTR_value_to_latch,
    MP_QSTR__key_number,
    MP_QSTR__pressed,
    MP_QSTR_key_number,
    MP_QSTR_pressed,
    MP_QSTR_released,
    MP_QSTR__events,
    MP_QSTR__overflowed,
    MP_QSTR_get_into,
    MP_QSTR_overflowed,
    MP_QSTR_keypad_eventqueue_record,
    MP_QSTR_maxlen,
    MP_QSTR__interval,
    MP_QSTR_monotonic,
    MP_QSTR__last_scan,
    MP_QSTR__scanning_function,
    MP_QSTR_Thread,
    MP_QSTR_target,
    MP_QSTR__scanning_loop,
    MP_QSTR_daemon,
    MP_QSTR__scan_thread,
    MP_QSTR_events,
    MP_QSTR_is_alive,
    MP_QSTR__digitalinouts,
    MP_QSTR__currently_pressed,
    MP_QSTR__previously_pressed,
    MP_QSTR__value_when_pressed,
    MP_QSTR__keypad_keys_scan,
    MP_QSTR_key_count,
    MP_QSTR__row_digitalinouts,
    MP_QSTR__column_digitalinouts,
    MP_QSTR__columns_to_anodes,
    MP_QSTR__keypad_keymatrix_scan,
    MP_QSTR__row_column_to_key_number,
    MP_QSTR__clock,
    MP_QSTR__data,
    MP_QSTR__latch,
    MP_QSTR__value_to_latch,
    MP_QSTR__key_count,
    MP_QSTR__keypad_shiftregisterkeys_scan,
    MP_QSTR_other,
    MP_QSTR_event,
    MP_QSTR_current,
    MP_QSTR_scanning_function,
    MP_QSTR_exception_type,
    MP_QSTR_exception_value,
    MP_QSTR_traceback,
    MP_QSTR_pins,
    MP_QSTR_value_when_pressed,
    MP_QSTR_row_pins,
    MP_QSTR_column_pins,
    MP_QSTR_columns_to_anodes,
    MP_QSTR_row,
    MP_QSTR_column,
    MP_QSTR_clock,
    MP_QSTR_latch,
    MP_QSTR_pwmio_dot_py,
    MP_QSTR_PWMOut,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_bcm283x_dot_pwmio_dot_PWMOut,
    MP_QSTR_any_coral_board,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_generic_linux_dot_sysfs_pwmout,
    MP_QSTR_any_giant_board,
    MP_QSTR_any_beaglebone,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_am335x_dot_sysfs_pwmout,
    MP_QSTR_any_siemens_simatic_iot2000,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_am65xx_dot_pwmout,
    MP_QSTR_any_rock_pi_board,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rockchip_dot_PWMOut,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_nova_dot_pwmout,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_nxp_lpc4330_dot_pwmout,
    MP_QSTR_any_lubancat,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rp2040_u2if_dot_pwmio,
    MP_QSTR_rainbowio_dot_py,
    MP_QSTR_colorwheel,
    MP_QSTR_color_value,
    MP_QSTR__boot_dot_py,
    MP_QSTR__slash_flash,
    MP_QSTR__slash_flash_slash_lib,
    MP_QSTR_SKIPSD,
    MP_QSTR__slash_sdcard,
    MP_QSTR_bdev,
    MP_QSTR_vfs,
    MP_QSTR_sdcard,
    MP_QSTR_fat,
    MP_QSTR_bitbangio_dot_py,
    MP_QSTR_Lockable,
    MP_QSTR_agnostic,
    MP_QSTR_any_embedded_linux,
    MP_QSTR__i2c,
    MP_QSTR__spi,
    MP_QSTR__pins,
    MP_QSTR_configure,
    MP_QSTR__locked,
    MP_QSTR_frequency,
    MP_QSTR_exc_type,
    MP_QSTR_exc_value,
    MP_QSTR_address,
    MP_QSTR_buffer_out,
    MP_QSTR_buffer_in,
    MP_QSTR_No_space_software_space_I2C_space_on_space__brace_open__brace_close_,
    MP_QSTR_First_space_call_space_try_lock_paren_open__paren_close_,
    MP_QSTR_analogio_dot_py,
    MP_QSTR_AnalogIn,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_mcp2221_dot_analogio,
    MP_QSTR_AnalogOut,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_nxp_lpc4330_dot_analogio,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_am65xx_dot_analogio,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_generic_linux_dot_sysfs_analogin,
    MP_QSTR_AnalogIn_Pico,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rp2040_u2if_dot_analogio,
    MP_QSTR_AnalogIn_Feather,
    MP_QSTR_AnalogIn_QTPY,
    MP_QSTR_AnalogIn_ItsyBitsy,
    MP_QSTR_pulseio_dot_py,
    MP_QSTR_PulseIn,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_bcm283x_dot_pulseio_dot_PulseIn,
    MP_QSTR_onewireio_dot_py,
    MP_QSTR_OneWire,
    MP_QSTR_read_bit,
    MP_QSTR_write_bit,
    MP_QSTR_certifi_slash___init___dot_py,
    MP_QSTR_contents,
    MP_QSTR_where,
    MP_QSTR_core,
    MP_QSTR_2022_dot_09_dot_24,
    MP_QSTR___all__,
    MP_QSTR_certifi_slash_core_dot_py,
    MP_QSTR_as_file,
    MP_QSTR_files,
    MP_QSTR_importlib_dot_resources,
    MP_QSTR_types,
    MP_QSTR_Union,
    MP_QSTR_ModuleType,
    MP_QSTR_strict,
    MP_QSTR_certifi,
    MP_QSTR_joinpath,
    MP_QSTR_cacert_dot_pem,
    MP_QSTR_ascii,
    MP_QSTR_dirname,
    MP_QSTR__CACERT_CTX,
    MP_QSTR__CACERT_PATH,
    MP_QSTR_get_path,
    MP_QSTR_Package,
    MP_QSTR_Resource,
    MP_QSTR_resource,
    MP_QSTR_errors,
    MP_QSTR_os_dot_PathLike,
    MP_QSTR_certifi_slash___main___dot_py,
    MP_QSTR_argparse,
    MP_QSTR_ArgumentParser,
    MP_QSTR_add_argument,
    MP_QSTR__hyphen_c,
    MP_QSTR__hyphen__hyphen_contents,
    MP_QSTR_action,
    MP_QSTR_store_true,
    MP_QSTR_parse_args,
    MP_QSTR_parser,
    MP_QSTR_certifi_slash_tests_slash___init___dot_py,
    MP_QSTR_certifi_slash_tests_slash_test_certify_dot_py,
    MP_QSTR_unittest,
    MP_QSTR_TestCertifi,
    MP_QSTR_TestCase,
    MP_QSTR_test_cabundle_exists,
    MP_QSTR_exists,
    MP_QSTR_test_read_contents,
    MP_QSTR_test_py_typed_exists,
    MP_QSTR_py_dot_typed,
    MP_QSTR_onewire_dot_py,
    MP_QSTR_OneWireError,
    MP_QSTR_select_rom,
    MP_QSTR_MATCH_ROM,
    MP_QSTR__search_rom,
    MP_QSTR_SEARCH_ROM,
    MP_QSTR__ow,
    MP_QSTR_SKIP_ROM,
    MP_QSTR_required,
    MP_QSTR_rom,
    MP_QSTR_l_rom,
    MP_QSTR_diff,
    MP_QSTR_ds18x20_dot_py,
    MP_QSTR_DS18X20,
    MP_QSTR_ow,
    MP_QSTR_convert_temp,
    MP_QSTR_read_scratch,
    MP_QSTR_CRC_space_error,
    MP_QSTR_write_scratch,
    MP_QSTR_read_temp,
    MP_QSTR_dht_dot_py,
    MP_QSTR_esp,
    MP_QSTR_rp2,
    MP_QSTR_pyboard,
    MP_QSTR_pyb,
    MP_QSTR_DHTBase,
    MP_QSTR_DHT11,
    MP_QSTR_DHT22,
    MP_QSTR_measure,
    MP_QSTR_humidity,
    MP_QSTR_temperature,
    MP_QSTR_checksum_space_error,
    MP_QSTR_uasyncio_slash___init___dot_py,
    MP_QSTR_funcs,
    MP_QSTR_wait_for,
    MP_QSTR_gather,
    MP_QSTR_Lock,
    MP_QSTR_stream,
    MP_QSTR__attrs,
    MP_QSTR_attr,
    MP_QSTR_wait_for_ms,
    MP_QSTR_ThreadSafeFlag,
    MP_QSTR_open_connection,
    MP_QSTR_start_server,
    MP_QSTR_StreamReader,
    MP_QSTR_StreamWriter,
    MP_QSTR_uasyncio_slash_core_dot_py,
    MP_QSTR_task,
    MP_QSTR_TimeoutError,
    MP_QSTR_message,
    MP_QSTR_exception,
    MP_QSTR_future,
    MP_QSTR_SingletonGenerator,
    MP_QSTR_IOQueue,
    MP_QSTR_Loop,
    MP_QSTR__promote_to_task,
    MP_QSTR_create_task,
    MP_QSTR_run_until_complete,
    MP_QSTR_wait_io_event,
    MP_QSTR_call_exception_handler,
    MP_QSTR_run,
    MP_QSTR__stopper,
    MP_QSTR_get_event_loop,
    MP_QSTR_current_task,
    MP_QSTR_new_event_loop,
    MP_QSTR_exc,
    MP_QSTR_poller,
    MP_QSTR__enqueue,
    MP_QSTR__dequeue,
    MP_QSTR_queue_read,
    MP_QSTR_queue_write,
    MP_QSTR_run_forever,
    MP_QSTR_set_exception_handler,
    MP_QSTR__exc_handler,
    MP_QSTR_get_exception_handler,
    MP_QSTR_default_exception_handler,
    MP_QSTR_future_colon_,
    MP_QSTR_coro_equals_,
    MP_QSTR_ticks,
    MP_QSTR__exc_context,
    MP_QSTR__stop_task,
    MP_QSTR_t,
    MP_QSTR_sgen,
    MP_QSTR_aw,
    MP_QSTR_main_task,
    MP_QSTR__io_queue,
    MP_QSTR_runq_len,
    MP_QSTR_waitq_len,
    MP_QSTR_s,
    MP_QSTR_idx,
    MP_QSTR_dt,
    MP_QSTR_loop,
    MP_QSTR_context,
    MP_QSTR_coroutine_space_expected,
    MP_QSTR_uasyncio_slash_event_dot_py,
    MP_QSTR_waiting,
    MP_QSTR_is_set,
    MP_QSTR_wait,
    MP_QSTR_req,
    MP_QSTR_uasyncio_slash_funcs_dot_py,
    MP_QSTR__Remove,
    MP_QSTR_return_exceptions,
    MP_QSTR__run,
    MP_QSTR_waiter,
    MP_QSTR_er,
    MP_QSTR_can_squot_t_space_gather,
    MP_QSTR_uasyncio_slash_lock_dot_py,
    MP_QSTR_tb,
    MP_QSTR_Lock_space_not_space_acquired,
    MP_QSTR_uasyncio_slash_stream_dot_py,
    MP_QSTR_Stream,
    MP_QSTR_Server,
    MP_QSTR_wait_closed,
    MP_QSTR_aclose,
    MP_QSTR_awrite,
    MP_QSTR_awritestr,
    MP_QSTR_usocket,
    MP_QSTR_getaddrinfo,
    MP_QSTR_SOCK_STREAM,
    MP_QSTR_socket,
    MP_QSTR_connect,
    MP_QSTR_setsockopt,
    MP_QSTR_SOL_SOCKET,
    MP_QSTR_SO_REUSEADDR,
    MP_QSTR_bind,
    MP_QSTR_listen,
    MP_QSTR__serve,
    MP_QSTR_stream_awrite,
    MP_QSTR_drain,
    MP_QSTR_out_buf,
    MP_QSTR_get_extra_info,
    MP_QSTR_readexactly,
    MP_QSTR_accept,
    MP_QSTR_peername,
    MP_QSTR_host,
    MP_QSTR_port,
    MP_QSTR_cb,
    MP_QSTR_backlog,
    MP_QSTR_sz,
    MP_QSTR_v,
    MP_QSTR_n,
};

const FLASHMEM qstr_hash_t mp_qstr_frozen_const_hashes[] = {
    42526,
    29165,
    20383,
    58405,
    58839,
    14115,
    34963,
    30281,
    1663,
    13162,
    51697,
    39465,
    37684,
    11753,
    15474,
    34172,
    12739,
    22990,
    25557,
    3778,
    4594,
    64302,
    58526,
    64269,
    23549,
    3716,
    53300,
    53770,
    15325,
    4882,
    42853,
    30049,
    41686,
    30017,
    29238,
    3063,
    63808,
    7315,
    52516,
    54418,
    58583,
    41610,
    63842,
    18356,
    45550,
    51514,
    6840,
    2575,
    34356,
    48294,
    859,
    48388,
    54201,
    60041,
    47858,
    34612,
    28198,
    34332,
    8142,
    34678,
    28516,
    7055,
    56965,
    52928,
    37886,
    36340,
    35055,
    29630,
    29624,
    16837,
    29627,
    31110,
    20572,
    28641,
    30098,
    44141,
    588,
    5729,
    50334,
    57011,
    20750,
    40520,
    5484,
    42300,
    62351,
    36835,
    8278,
    51437,
    35577,
    45633,
    2806,
    56191,
    17665,
    21162,
    24193,
    46400,
    25171,
    17882,
    8800,
    29600,
    18231,
    51702,
    64301,
    29728,
    19187,
    35605,
    36090,
    41408,
    16096,
    37364,
    44597,
    29682,
    31486,
    28780,
    17379,
    6228,
    55680,
    23337,
    9745,
    15900,
    28730,
    44504,
    29544,
    7631,
    28537,
    39088,
    9959,
    11349,
    25928,
    32756,
    64174,
    46877,
    25814,
    5868,
    2304,
    56010,
    13795,
    26442,
    32424,
    2596,
    6467,
    33633,
    60045,
    14958,
    2138,
    50179,
    11473,
    40223,
    30329,
    1226,
    20109,
    12421,
    26099,
    33661,
    9340,
    27761,
    16222,
    8422,
    52785,
    10248,
    2534,
    35678,
    18665,
    31502,
    1799,
    6673,
    30338,
    46495,
    48291,
    35192,
    55841,
    5211,
    5259,
    59289,
    215,
    5026,
    48153,
    17616,
    44789,
    61713,
    37613,
    47841,
    9768,
    30864,
    38348,
    13271,
    14682,
    18773,
    20397,
    47904,
    39105,
    5911,
    39388,
    14459,
    25546,
    40113,
    60918,
    17564,
    20581,
    31584,
    13990,
    20344,
    34782,
    41256,
    25644,
    31943,
    1305,
    28382,
    23296,
    12726,
    14504,
    29831,
    51447,
    15172,
    15272,
    41414,
    35954,
    62007,
    24887,
    33525,
    37706,
    24159,
    44344,
    62003,
    24156,
    44347,
    23915,
    8881,
    32307,
    7407,
    15400,
    64555,
    32592,
    9868,
    12218,
    41816,
    1980,
    56926,
    9486,
    45036,
    58751,
    37446,
    58703,
    37462,
    49838,
    31575,
    11176,
    7098,
    2744,
    36414,
    11742,
    53499,
    2530,
    14091,
    46317,
    7779,
    58885,
    11743,
    25030,
    11736,
    25025,
    64236,
    55453,
    31689,
    5669,
    61809,
    34183,
    47308,
    43029,
    31444,
    45934,
    47459,
    45933,
    47456,
    50948,
    15337,
    59714,
    15279,
    44029,
    9616,
    17829,
    55368,
    30856,
    31300,
    49591,
    51706,
    58764,
    63973,
    5104,
    39673,
    6864,
    29979,
    6870,
    29981,
    7357,
    29878,
    3471,
    35796,
    53048,
    15155,
    39239,
    58681,
    56876,
    54258,
    10622,
    55456,
    44398,
    58544,
    15,
    44465,
    55052,
    16530,
    7349,
    15056,
    60629,
    2539,
    33277,
    11331,
    28523,
    8181,
    64666,
    39227,
    45568,
    56399,
    36982,
    10359,
    16346,
    5988,
    16317,
    5923,
    16332,
    6002,
    16893,
    15549,
    50081,
    1530,
    64604,
    1383,
    47796,
    18255,
    24007,
    29525,
    26653,
    29807,
    24716,
    36252,
    44097,
    14062,
    15881,
    53830,
    2951,
    47705,
    59611,
    60965,
    36606,
    44384,
    22608,
    34990,
    15093,
    41259,
    12344,
    5446,
    63280,
    5838,
    56126,
    58431,
    28626,
    12717,
    55729,
    7327,
    65430,
    51290,
    5280,
    5081,
    4979,
    36530,
    49693,
    39069,
    12935,
    38975,
    61069,
    3142,
    61137,
    51135,
    62255,
    38114,
    22604,
    46557,
    46531,
    31916,
    29764,
    41065,
    6442,
    27559,
    10644,
    10395,
    10078,
    37904,
    14997,
    38264,
    64555,
    14998,
    55380,
    30692,
    27192,
    20703,
    49632,
    40875,
    51424,
    36889,
    35561,
    23719,
    6155,
    38881,
    48681,
    63688,
    3610,
    50705,
    55879,
    26513,
    47644,
    5742,
    47875,
    36104,
    4965,
    4199,
    58672,
    44440,
    17559,
    6230,
    11237,
    56857,
    55824,
    29558,
    30731,
    14068,
    39272,
    10249,
    11956,
    41626,
    18423,
    14458,
    59839,
    14983,
    53667,
    6371,
    12174,
    56527,
    60819,
    46774,
    61195,
    5705,
    19954,
    30442,
    36744,
    41464,
    2705,
    33706,
    39073,
    27081,
    61868,
    5481,
    53461,
    44038,
    45775,
    62017,
    1052,
    47380,
    50344,
    4393,
    35759,
    60115,
    25901,
    8855,
    57422,
    1473,
    38338,
    13242,
    1878,
    52380,
    22402,
    24831,
    23070,
    24290,
    11290,
    20394,
    52283,
    23247,
    37198,
    31894,
    362,
    47371,
    24204,
    15787,
    19994,
    19858,
    35571,
    12745,
    12400,
    31366,
    1990,
    14070,
    44337,
    6884,
    12591,
    17787,
    4034,
    57680,
    24766,
    29837,
    15344,
    52897,
    52220,
    35343,
    21363,
    46100,
    42941,
    21364,
    41655,
    11278,
    57800,
    61304,
    62273,
    29063,
    46506,
    23327,
    27010,
    26166,
    24318,
    15291,
    60469,
    8539,
    57341,
    11307,
    63721,
    55400,
    20119,
    28408,
    49105,
    3935,
    62728,
    56254,
    4520,
    50116,
    17808,
    38158,
    52560,
    53512,
    29518,
    40214,
    7399,
    58638,
    62691,
    10026,
    45617,
    22356,
    50781,
    7752,
    14954,
    24385,
    35039,
    65039,
    6959,
    18734,
    849,
    61792,
    62724,
    57873,
    1000,
    26347,
    8191,
    60251,
    35379,
    25224,
    3170,
    26331,
    43710,
    62005,
    41685,
    25895,
    8933,
    25861,
    27771,
    13593,
    62750,
    55311,
    23888,
    20450,
    20921,
    32507,
    28580,
    8066,
    4555,
    19500,
    35765,
    41766,
    64712,
    26790,
    45825,
    28541,
    15425,
    36436,
    53071,
    8251,
    12004,
    56666,
    9315,
    35221,
    38486,
    29166,
    28456,
    32861,
    33021,
    44573,
    44924,
    57065,
    53040,
    50626,
    27400,
    40746,
    2184,
    59534,
    54361,
    24346,
    48310,
    25035,
    9558,
    25560,
    63679,
    39580,
    35638,
    22019,
    40488,
    19302,
    48238,
    60370,
    14592,
    12601,
    26002,
    59673,
    24914,
    21139,
    37871,
    6948,
    19688,
    35180,
    12837,
    19971,
    8734,
    3209,
    9435,
    42221,
    26816,
    49770,
    52601,
    8726,
    25036,
    5288,
    52355,
    60604,
    45889,
    22842,
    21001,
    2115,
    13092,
    5648,
    46545,
    32154,
    28211,
    31740,
    43474,
    52773,
    21895,
    46550,
    21584,
    28053,
    9273,
    55546,
    50473,
    58580,
    31214,
    58562,
    21902,
    35683,
    24501,
    37244,
    47572,
    58803,
    60665,
    28082,
    4535,
    10131,
    28563,
    43943,
    56964,
    55353,
    2976,
    29411,
    24658,
    49657,
    2796,
    117,
    6254,
    48690,
    52320,
    15835,
    59448,
    57103,
    21281,
    25732,
    3788,
    55469,
    59482,
    18805,
    30085,
    16583,
    23753,
    35205,
    8320,
    13605,
    55388,
    28388,
    43370,
    28908,
    46547,
    46539,
};

const FLASHMEM qstr_len_t mp_qstr_frozen_const_lengths[] = {
    12,
    8,
    8,
    24,
    4,
    7,
    43,
    6,
    42,
    6,
    42,
    6,
    51,
    6,
    42,
    5,
    48,
    5,
    41,
    4,
    46,
    4,
    46,
    4,
    46,
    4,
    46,
    4,
    48,
    5,
    49,
    6,
    50,
    6,
    50,
    5,
    49,
    5,
    49,
    10,
    54,
    7,
    54,
    6,
    45,
    7,
    47,
    6,
    42,
    3,
    49,
    3,
    49,
    9,
    45,
    6,
    51,
    6,
    51,
    6,
    51,
    13,
    49,
    10,
    52,
    6,
    42,
    2,
    2,
    48,
    2,
    48,
    4,
    50,
    8,
    48,
    11,
    53,
    12,
    54,
    10,
    40,
    12,
    47,
    17,
    43,
    11,
    47,
    9,
    6,
    4,
    14,
    15,
    9,
    9,
    9,
    5,
    6,
    4,
    2,
    4,
    12,
    4,
    9,
    16,
    10,
    15,
    11,
    6,
    10,
    12,
    3,
    3,
    3,
    3,
    15,
    13,
    12,
    20,
    10,
    8,
    6,
    4,
    7,
    2,
    6,
    4,
    9,
    11,
    11,
    7,
    6,
    10,
    10,
    5,
    10,
    17,
    18,
    8,
    5,
    16,
    13,
    10,
    6,
    10,
    4,
    5,
    6,
    9,
    7,
    8,
    10,
    2,
    9,
    3,
    3,
    11,
    10,
    21,
    11,
    15,
    3,
    3,
    20,
    24,
    12,
    6,
    1,
    4,
    17,
    17,
    15,
    6,
    9,
    12,
    13,
    19,
    21,
    19,
    11,
    12,
    12,
    15,
    18,
    18,
    18,
    12,
    11,
    19,
    16,
    16,
    11,
    15,
    22,
    11,
    16,
    11,
    14,
    12,
    15,
    11,
    8,
    40,
    9,
    6,
    14,
    36,
    7,
    29,
    7,
    29,
    17,
    38,
    15,
    16,
    16,
    42,
    23,
    45,
    19,
    42,
    19,
    47,
    14,
    19,
    47,
    10,
    50,
    16,
    16,
    24,
    27,
    25,
    25,
    23,
    57,
    13,
    47,
    17,
    51,
    12,
    41,
    12,
    41,
    14,
    43,
    13,
    17,
    14,
    17,
    11,
    23,
    50,
    19,
    47,
    16,
    44,
    11,
    40,
    11,
    40,
    15,
    17,
    40,
    17,
    40,
    12,
    36,
    11,
    32,
    10,
    39,
    10,
    39,
    13,
    42,
    13,
    42,
    11,
    40,
    9,
    38,
    15,
    40,
    16,
    45,
    18,
    37,
    23,
    42,
    9,
    41,
    9,
    41,
    9,
    41,
    11,
    39,
    10,
    42,
    16,
    38,
    11,
    33,
    12,
    34,
    10,
    32,
    17,
    39,
    12,
    34,
    16,
    38,
    6,
    28,
    7,
    29,
    6,
    28,
    14,
    35,
    12,
    34,
    10,
    37,
    9,
    35,
    9,
    35,
    9,
    35,
    8,
    35,
    15,
    43,
    12,
    40,
    12,
    40,
    16,
    47,
    19,
    50,
    14,
    35,
    11,
    33,
    10,
    32,
    9,
    31,
    12,
    34,
    9,
    31,
    14,
    36,
    13,
    35,
    19,
    41,
    9,
    31,
    27,
    45,
    12,
    51,
    6,
    13,
    16,
    23,
    6,
    3,
    3,
    4,
    4,
    4,
    5,
    11,
    8,
    10,
    8,
    7,
    12,
    22,
    14,
    1,
    1,
    17,
    16,
    8,
    39,
    9,
    43,
    12,
    9,
    14,
    13,
    19,
    14,
    9,
    4,
    19,
    14,
    7,
    9,
    9,
    11,
    9,
    5,
    11,
    9,
    4,
    9,
    17,
    8,
    10,
    14,
    11,
    8,
    10,
    7,
    8,
    7,
    11,
    8,
    10,
    24,
    6,
    9,
    9,
    10,
    18,
    6,
    6,
    14,
    6,
    12,
    6,
    8,
    14,
    18,
    19,
    19,
    17,
    9,
    18,
    21,
    18,
    22,
    25,
    6,
    5,
    6,
    15,
    10,
    30,
    5,
    5,
    7,
    17,
    14,
    15,
    9,
    4,
    18,
    8,
    11,
    17,
    3,
    6,
    5,
    5,
    8,
    6,
    52,
    15,
    58,
    15,
    14,
    51,
    27,
    45,
    17,
    47,
    43,
    50,
    12,
    49,
    12,
    10,
    11,
    8,
    6,
    10,
    6,
    7,
    4,
    3,
    6,
    3,
    12,
    8,
    8,
    18,
    4,
    4,
    5,
    9,
    7,
    9,
    8,
    9,
    7,
    10,
    9,
    21,
    21,
    11,
    8,
    48,
    9,
    52,
    47,
    60,
    13,
    52,
    16,
    13,
    18,
    10,
    7,
    55,
    12,
    7,
    8,
    9,
    19,
    8,
    5,
    4,
    10,
    7,
    15,
    7,
    5,
    19,
    5,
    5,
    10,
    6,
    7,
    8,
    10,
    5,
    7,
    11,
    12,
    8,
    7,
    8,
    8,
    6,
    11,
    19,
    8,
    14,
    12,
    2,
    10,
    6,
    10,
    10,
    6,
    25,
    29,
    8,
    11,
    8,
    20,
    6,
    18,
    20,
    8,
    10,
    12,
    10,
    9,
    11,
    10,
    3,
    8,
    8,
    3,
    5,
    4,
    10,
    7,
    2,
    12,
    12,
    9,
    13,
    9,
    6,
    3,
    3,
    7,
    3,
    7,
    5,
    5,
    7,
    8,
    11,
    14,
    20,
    5,
    8,
    6,
    4,
    6,
    6,
    4,
    11,
    14,
    15,
    12,
    12,
    12,
    16,
    4,
    12,
    7,
    9,
    6,
    18,
    7,
    4,
    16,
    11,
    18,
    13,
    22,
    3,
    8,
    14,
    12,
    14,
    3,
    6,
    8,
    8,
    10,
    11,
    11,
    21,
    12,
    21,
    25,
    7,
    5,
    5,
    12,
    10,
    1,
    4,
    2,
    9,
    9,
    8,
    9,
    1,
    3,
    2,
    4,
    7,
    18,
    17,
    7,
    6,
    4,
    3,
    17,
    7,
    17,
    4,
    6,
    2,
    12,
    16,
    2,
    17,
    18,
    6,
    6,
    11,
    6,
    6,
    9,
    7,
    11,
    11,
    6,
    7,
    10,
    10,
    12,
    4,
    6,
    6,
    13,
    5,
    7,
    14,
    11,
    6,
    8,
    4,
    4,
    2,
    7,
    2,
    1,
    1,
};

extern const qstr_pool_t mp_qstr_const_pool;
const FLASHMEM qstr_pool_t mp_qstr_frozen_const_pool = {
    &mp_qstr_const_pool, // previous pool
    MP_QSTRnumber_of, // previous pool size
    10, // allocated entries
    726, // used entries
    (qstr_hash_t *)mp_qstr_frozen_const_hashes,
    (qstr_len_t *)mp_qstr_frozen_const_lengths,
    {
        "digitalio.py",
        "board_id",
        "detector",
        "adafruit_blinka.agnostic",
        "chip",
        "BCM2XXX",
        "adafruit_blinka.microcontroller.bcm283x.pin",
        "AM33XX",
        "adafruit_blinka.microcontroller.am335x.pin",
        "AM65XX",
        "adafruit_blinka.microcontroller.am65xx.pin",
        "JH71x0",
        "adafruit_blinka.microcontroller.starfive.JH71x0.pin",
        "DRA74X",
        "adafruit_blinka.microcontroller.dra74x.pin",
        "SUN8I",
        "adafruit_blinka.microcontroller.allwinner.h3.pin",
        "SAMA5",
        "adafruit_blinka.microcontroller.sama5.pin",
        "T210",
        "adafruit_blinka.microcontroller.tegra.t210.pin",
        "T186",
        "adafruit_blinka.microcontroller.tegra.t186.pin",
        "T194",
        "adafruit_blinka.microcontroller.tegra.t194.pin",
        "T234",
        "adafruit_blinka.microcontroller.tegra.t234.pin",
        "S905",
        "adafruit_blinka.microcontroller.amlogic.s905.pin",
        "S905X",
        "adafruit_blinka.microcontroller.amlogic.s905x.pin",
        "S905X3",
        "adafruit_blinka.microcontroller.amlogic.s905x3.pin",
        "S905Y2",
        "adafruit_blinka.microcontroller.amlogic.s905y2.pin",
        "S922X",
        "adafruit_blinka.microcontroller.amlogic.s922x.pin",
        "A311D",
        "adafruit_blinka.microcontroller.amlogic.a311d.pin",
        "EXYNOS5422",
        "adafruit_blinka.microcontroller.samsung.exynos5422.pin",
        "APQ8016",
        "adafruit_blinka.microcontroller.snapdragon.apq8016.pin",
        "IMX8MX",
        "adafruit_blinka.microcontroller.nxp_imx8m.pin",
        "IMX6ULL",
        "adafruit_blinka.microcontroller.nxp_imx6ull.pin",
        "HFU540",
        "adafruit_blinka.microcontroller.hfu540.pin",
        "A64",
        "adafruit_blinka.microcontroller.allwinner.a64.pin",
        "A33",
        "adafruit_blinka.microcontroller.allwinner.a33.pin",
        "MIPS24KEC",
        "adafruit_blinka.microcontroller.mips24kec.pin",
        "RK3308",
        "adafruit_blinka.microcontroller.rockchip.rk3308.pin",
        "RK3399",
        "adafruit_blinka.microcontroller.rockchip.rk3399.pin",
        "RK3328",
        "adafruit_blinka.microcontroller.rockchip.rk3328.pin",
        "PENTIUM_N3710",
        "adafruit_blinka.microcontroller.pentium.n3710.pin",
        "STM32MP157",
        "adafruit_blinka.microcontroller.stm32.stm32mp157.pin",
        "MT8167",
        "adafruit_blinka.microcontroller.mt8167.pin",
        "H3",
        "H5",
        "adafruit_blinka.microcontroller.allwinner.h5.pin",
        "H6",
        "adafruit_blinka.microcontroller.allwinner.h6.pin",
        "H616",
        "adafruit_blinka.microcontroller.allwinner.h616.pin",
        "D1_RISCV",
        "adafruit_blinka.microcontroller.allwinner.D1.pin",
        "ftdi_ft232h",
        "adafruit_blinka.microcontroller.ftdi_mpsse.ft232h.pin",
        "ftdi_ft2232h",
        "adafruit_blinka.microcontroller.ftdi_mpsse.ft2232h.pin",
        "binho_nova",
        "adafruit_blinka.microcontroller.nova.pin",
        "greatfet_one",
        "adafruit_blinka.microcontroller.nxp_lpc4330.pin",
        "microchip_mcp2221",
        "adafruit_blinka.microcontroller.mcp2221.pin",
        "RP2040_U2IF",
        "adafruit_blinka.microcontroller.rp2040_u2if.pin",
        "STM32F405",
        "RP2040",
        "Enum",
        "ContextManaged",
        "adafruit_blinka",
        "DriveMode",
        "PUSH_PULL",
        "Direction",
        "INPUT",
        "OUTPUT",
        "Pull",
        "UP",
        "DOWN",
        "DigitalInOut",
        "_pin",
        "direction",
        "switch_to_output",
        "drive_mode",
        "switch_to_input",
        "__direction",
        "__pull",
        "Not a Pull",
        "__drive_mode",
        "pin",
        "val",
        "pul",
        "mod",
        "Not a Direction",
        "Not an output",
        "Not an input",
        "{} unsupported on {}",
        "usb_hid.py",
        "Sequence",
        "typing",
        "Path",
        "pathlib",
        "os",
        "atexit",
        "dwc2",
        "read_text",
        "gadget_root",
        "boot_device",
        "devices",
        "Device",
        "descriptor",
        "usage_page",
        "usage",
        "report_ids",
        "in_report_lengths",
        "out_report_lengths",
        "KEYBOARD",
        "MOUSE",
        "CONSUMER_CONTROL",
        "BOOT_KEYBOARD",
        "BOOT_MOUSE",
        "%s/UDC",
        "write_text",
        "glob",
        "rglob",
        "is_dir",
        "configs/*",
        "parents",
        "exist_ok",
        "%s/configs",
        "%s",
        "%s/bcdUSB",
        "%s/",
        "150",
        "write_bytes",
        "symlink_to",
        "_last_received_report",
        "send_report",
        "get_device_path",
        "rb+",
        "big",
        "last_received_report",
        "get_last_received_report",
        "set_blocking",
        "fileno",
        ":",
        "this",
        "FileNotFoundError",
        "requested_devices",
        "FileExistsError",
        "report",
        "report_id",
        "libcomposite",
        "/proc/modules",
        "configs/**/hid.usb*",
        "configs/*/strings/*/*",
        "configs/*/strings/*",
        "functions/*",
        "%s/functions",
        "%s/bcdDevice",
        "%s/bDeviceClass",
        "%s/bDeviceProtocol",
        "%s/bDeviceSubClass",
        "%s/bMaxPacketSize0",
        "%s/idProduct",
        "%s/idVendor",
        "%s/configs/device.1",
        "%s/strings/0x409",
        "my configuration",
        "%s/MaxPower",
        "%s/bmAttributes",
        "%s/functions/hid.usb%s",
        "%s/protocol",
        "%s/report_length",
        "%s/subclass",
        "%s/report_desc",
        "%s/hid.usb%s",
        "/sys/class/udc/",
        "/dev/hidg%s",
        "board.py",
        "adafruit_platformdetect.constants.boards",
        "constants",
        "boards",
        "FEATHER_HUZZAH",
        "adafruit_blinka.board.feather_huzzah",
        "NODEMCU",
        "adafruit_blinka.board.nodemcu",
        "PYBOARD",
        "adafruit_blinka.board.pyboard",
        "RASPBERRY_PI_PICO",
        "adafruit_blinka.board.raspberrypi.pico",
        "RASPBERRY_PI_4B",
        "RASPBERRY_PI_CM4",
        "RASPBERRY_PI_400",
        "adafruit_blinka.board.raspberrypi.raspi_4b",
        "any_raspberry_pi_40_pin",
        "adafruit_blinka.board.raspberrypi.raspi_40pin",
        "any_raspberry_pi_cm",
        "adafruit_blinka.board.raspberrypi.raspi_cm",
        "RASPBERRY_PI_B_REV1",
        "adafruit_blinka.board.raspberrypi.raspi_1b_rev1",
        "RASPBERRY_PI_A",
        "RASPBERRY_PI_B_REV2",
        "adafruit_blinka.board.raspberrypi.raspi_1b_rev2",
        "BEAGLEBONE",
        "adafruit_blinka.board.beagleboard.beaglebone_black",
        "BEAGLEBONE_BLACK",
        "BEAGLEBONE_GREEN",
        "BEAGLEBONE_GREEN_GATEWAY",
        "BEAGLEBONE_BLACK_INDUSTRIAL",
        "BEAGLEBONE_GREEN_WIRELESS",
        "BEAGLEBONE_BLACK_WIRELESS",
        "BEAGLEBONE_POCKETBEAGLE",
        "adafruit_blinka.board.beagleboard.beaglebone_pocketbeagle",
        "BEAGLEBONE_AI",
        "adafruit_blinka.board.beagleboard.beaglebone_ai",
        "BEAGLEV_STARLIGHT",
        "adafruit_blinka.board.beagleboard.beaglev_starlight",
        "ORANGE_PI_PC",
        "adafruit_blinka.board.orangepi.orangepipc",
        "ORANGE_PI_R1",
        "adafruit_blinka.board.orangepi.orangepir1",
        "ORANGE_PI_ZERO",
        "adafruit_blinka.board.orangepi.orangepizero",
        "ORANGE_PI_ONE",
        "ORANGE_PI_PC_PLUS",
        "ORANGE_PI_LITE",
        "ORANGE_PI_PLUS_2E",
        "ORANGE_PI_2",
        "ORANGE_PI_ZERO_PLUS_2H5",
        "adafruit_blinka.board.orangepi.orangepizeroplus2h5",
        "ORANGE_PI_ZERO_PLUS",
        "adafruit_blinka.board.orangepi.orangepizeroplus",
        "ORANGE_PI_ZERO_2",
        "adafruit_blinka.board.orangepi.orangepizero2",
        "ORANGE_PI_3",
        "adafruit_blinka.board.orangepi.orangepi3",
        "ORANGE_PI_4",
        "adafruit_blinka.board.orangepi.orangepi4",
        "ORANGE_PI_4_LTS",
        "BANANA_PI_M2_ZERO",
        "adafruit_blinka.board.bananapi.bpim2zero",
        "BANANA_PI_M2_PLUS",
        "adafruit_blinka.board.bananapi.bpim2plus",
        "BANANA_PI_M5",
        "adafruit_blinka.board.bananapi.bpim5",
        "GIANT_BOARD",
        "adafruit_blinka.board.giantboard",
        "JETSON_TX1",
        "adafruit_blinka.board.nvidia.jetson_tx1",
        "JETSON_TX2",
        "adafruit_blinka.board.nvidia.jetson_tx2",
        "JETSON_TX2_NX",
        "adafruit_blinka.board.nvidia.jetson_tx2_nx",
        "JETSON_XAVIER",
        "adafruit_blinka.board.nvidia.jetson_xavier",
        "JETSON_NANO",
        "adafruit_blinka.board.nvidia.jetson_nano",
        "JETSON_NX",
        "adafruit_blinka.board.nvidia.jetson_nx",
        "JETSON_AGX_ORIN",
        "adafruit_blinka.board.nvidia.jetson_orin",
        "CLARA_AGX_XAVIER",
        "adafruit_blinka.board.nvidia.clara_agx_xavier",
        "CORAL_EDGE_TPU_DEV",
        "adafruit_blinka.board.coral_dev_board",
        "CORAL_EDGE_TPU_DEV_MINI",
        "adafruit_blinka.board.coral_dev_board_mini",
        "ODROID_C2",
        "adafruit_blinka.board.hardkernel.odroidc2",
        "ODROID_C4",
        "adafruit_blinka.board.hardkernel.odroidc4",
        "ODROID_N2",
        "adafruit_blinka.board.hardkernel.odroidn2",
        "KHADAS_VIM3",
        "adafruit_blinka.board.khadas.khadasvim3",
        "ODROID_XU4",
        "adafruit_blinka.board.hardkernel.odroidxu4",
        "DRAGONBOARD_410C",
        "adafruit_blinka.board.dragonboard_410c",
        "FTDI_FT232H",
        "adafruit_blinka.board.ftdi_ft232h",
        "FTDI_FT2232H",
        "adafruit_blinka.board.ftdi_ft2232h",
        "BINHO_NOVA",
        "adafruit_blinka.board.binho_nova",
        "MICROCHIP_MCP2221",
        "adafruit_blinka.board.microchip_mcp2221",
        "GREATFET_ONE",
        "adafruit_blinka.board.greatfet_one",
        "SIFIVE_UNLEASHED",
        "adafruit_blinka.board.hifive_unleashed",
        "PINE64",
        "adafruit_blinka.board.pine64",
        "PINEH64",
        "adafruit_blinka.board.pineH64",
        "SOPINE",
        "adafruit_blinka.board.soPine",
        "CLOCKWORK_CPI3",
        "adafruit_blinka.board.clockworkcpi3",
        "ONION_OMEGA2",
        "adafruit_blinka.board.onion.omega2",
        "RADXA_ZERO",
        "adafruit_blinka.board.radxa.radxazero",
        "ROCK_PI_S",
        "adafruit_blinka.board.radxa.rockpis",
        "ROCK_PI_4",
        "adafruit_blinka.board.radxa.rockpi4",
        "ROCK_PI_E",
        "adafruit_blinka.board.radxa.rockpie",
        "UDOO_X86",
        "adafruit_blinka.board.udoo_x86ultra",
        "STM32MP157C_DK2",
        "adafruit_blinka.board.stm32.stm32mp157c_dk2",
        "OSD32MP1_RED",
        "adafruit_blinka.board.stm32.osd32mp1_red",
        "OSD32MP1_BRK",
        "adafruit_blinka.board.stm32.osd32mp1_brk",
        "LUBANCAT_IMX6ULL",
        "adafruit_blinka.board.lubancat.lubancat_imx6ull",
        "LUBANCAT_STM32MP157",
        "adafruit_blinka.board.lubancat.lubancat_stm32mp157",
        "NANOPI_NEO_AIR",
        "adafruit_blinka.board.nanopi.neoair",
        "NANOPI_DUO2",
        "adafruit_blinka.board.nanopi.duo2",
        "NANOPI_NEO",
        "adafruit_blinka.board.nanopi.neo",
        "PICO_U2IF",
        "adafruit_blinka.board.pico_u2if",
        "FEATHER_U2IF",
        "adafruit_blinka.board.feather_u2if",
        "QTPY_U2IF",
        "adafruit_blinka.board.qtpy_u2if",
        "ITSYBITSY_U2IF",
        "adafruit_blinka.board.itsybitsy_u2if",
        "MACROPAD_U2IF",
        "adafruit_blinka.board.macropad_u2if",
        "QT2040_TRINKEY_U2IF",
        "adafruit_blinka.board.qt2040_trinkey_u2if",
        "LICHEE_RV",
        "adafruit_blinka.board.lichee_rv",
        "SIEMENS_SIMATIC_IOT2050_ADV",
        "adafruit_blinka.board.siemens.siemens_iot2050",
        "AML_S905X_CC",
        "adafruit_blinka.board.librecomputer.aml_s905x_cc_v1",
        "sphinx",
        "pkg_resources",
        "get_distribution",
        "adafruit_platformdetect",
        "system",
        "SCL",
        "SDA",
        "SCLK",
        "MOSI",
        "MISO",
        "busio",
        "__version__",
        "__repo__",
        "__blinka__",
        "ap_board",
        "package",
        "0.0.0+auto.0",
        "Board not supported {}",
        "micropython.py",
        "x",
        "f",
        "neopixel_write.py",
        "any_raspberry_pi",
        "neopixel",
        "adafruit_blinka.microcontroller.bcm283x",
        "pico_u2if",
        "adafruit_blinka.microcontroller.rp2040_u2if",
        "feather_u2if",
        "qtpy_u2if",
        "itsybitsy_u2if",
        "macropad_u2if",
        "qt2040_trinkey_u2if",
        "neopixel_write",
        "_neopixel",
        "gpio",
        "Board not supported",
        "__version__.py",
        "VERSION",
        "keypad.py",
        "threading",
        "collections",
        "digitalio",
        "Event",
        "_EventQueue",
        "_KeysBase",
        "Keys",
        "KeyMatrix",
        "ShiftRegisterKeys",
        "interval",
        "max_events",
        "value_to_latch",
        "_key_number",
        "_pressed",
        "key_number",
        "pressed",
        "released",
        "_events",
        "_overflowed",
        "get_into",
        "overflowed",
        "keypad_eventqueue_record",
        "maxlen",
        "_interval",
        "monotonic",
        "_last_scan",
        "_scanning_function",
        "Thread",
        "target",
        "_scanning_loop",
        "daemon",
        "_scan_thread",
        "events",
        "is_alive",
        "_digitalinouts",
        "_currently_pressed",
        "_previously_pressed",
        "_value_when_pressed",
        "_keypad_keys_scan",
        "key_count",
        "_row_digitalinouts",
        "_column_digitalinouts",
        "_columns_to_anodes",
        "_keypad_keymatrix_scan",
        "_row_column_to_key_number",
        "_clock",
        "_data",
        "_latch",
        "_value_to_latch",
        "_key_count",
        "_keypad_shiftregisterkeys_scan",
        "other",
        "event",
        "current",
        "scanning_function",
        "exception_type",
        "exception_value",
        "traceback",
        "pins",
        "value_when_pressed",
        "row_pins",
        "column_pins",
        "columns_to_anodes",
        "row",
        "column",
        "clock",
        "latch",
        "pwmio.py",
        "PWMOut",
        "adafruit_blinka.microcontroller.bcm283x.pwmio.PWMOut",
        "any_coral_board",
        "adafruit_blinka.microcontroller.generic_linux.sysfs_pwmout",
        "any_giant_board",
        "any_beaglebone",
        "adafruit_blinka.microcontroller.am335x.sysfs_pwmout",
        "any_siemens_simatic_iot2000",
        "adafruit_blinka.microcontroller.am65xx.pwmout",
        "any_rock_pi_board",
        "adafruit_blinka.microcontroller.rockchip.PWMOut",
        "adafruit_blinka.microcontroller.nova.pwmout",
        "adafruit_blinka.microcontroller.nxp_lpc4330.pwmout",
        "any_lubancat",
        "adafruit_blinka.microcontroller.rp2040_u2if.pwmio",
        "rainbowio.py",
        "colorwheel",
        "color_value",
        "_boot.py",
        "/flash",
        "/flash/lib",
        "SKIPSD",
        "/sdcard",
        "bdev",
        "vfs",
        "sdcard",
        "fat",
        "bitbangio.py",
        "Lockable",
        "agnostic",
        "any_embedded_linux",
        "_i2c",
        "_spi",
        "_pins",
        "configure",
        "_locked",
        "frequency",
        "exc_type",
        "exc_value",
        "address",
        "buffer_out",
        "buffer_in",
        "No software I2C on {}",
        "First call try_lock()",
        "analogio.py",
        "AnalogIn",
        "adafruit_blinka.microcontroller.mcp2221.analogio",
        "AnalogOut",
        "adafruit_blinka.microcontroller.nxp_lpc4330.analogio",
        "adafruit_blinka.microcontroller.am65xx.analogio",
        "adafruit_blinka.microcontroller.generic_linux.sysfs_analogin",
        "AnalogIn_Pico",
        "adafruit_blinka.microcontroller.rp2040_u2if.analogio",
        "AnalogIn_Feather",
        "AnalogIn_QTPY",
        "AnalogIn_ItsyBitsy",
        "pulseio.py",
        "PulseIn",
        "adafruit_blinka.microcontroller.bcm283x.pulseio.PulseIn",
        "onewireio.py",
        "OneWire",
        "read_bit",
        "write_bit",
        "certifi/__init__.py",
        "contents",
        "where",
        "core",
        "2022.09.24",
        "__all__",
        "certifi/core.py",
        "as_file",
        "files",
        "importlib.resources",
        "types",
        "Union",
        "ModuleType",
        "strict",
        "certifi",
        "joinpath",
        "cacert.pem",
        "ascii",
        "dirname",
        "_CACERT_CTX",
        "_CACERT_PATH",
        "get_path",
        "Package",
        "Resource",
        "resource",
        "errors",
        "os.PathLike",
        "certifi/__main__.py",
        "argparse",
        "ArgumentParser",
        "add_argument",
        "-c",
        "--contents",
        "action",
        "store_true",
        "parse_args",
        "parser",
        "certifi/tests/__init__.py",
        "certifi/tests/test_certify.py",
        "unittest",
        "TestCertifi",
        "TestCase",
        "test_cabundle_exists",
        "exists",
        "test_read_contents",
        "test_py_typed_exists",
        "py.typed",
        "onewire.py",
        "OneWireError",
        "select_rom",
        "MATCH_ROM",
        "_search_rom",
        "SEARCH_ROM",
        "_ow",
        "SKIP_ROM",
        "required",
        "rom",
        "l_rom",
        "diff",
        "ds18x20.py",
        "DS18X20",
        "ow",
        "convert_temp",
        "read_scratch",
        "CRC error",
        "write_scratch",
        "read_temp",
        "dht.py",
        "esp",
        "rp2",
        "pyboard",
        "pyb",
        "DHTBase",
        "DHT11",
        "DHT22",
        "measure",
        "humidity",
        "temperature",
        "checksum error",
        "uasyncio/__init__.py",
        "funcs",
        "wait_for",
        "gather",
        "Lock",
        "stream",
        "_attrs",
        "attr",
        "wait_for_ms",
        "ThreadSafeFlag",
        "open_connection",
        "start_server",
        "StreamReader",
        "StreamWriter",
        "uasyncio/core.py",
        "task",
        "TimeoutError",
        "message",
        "exception",
        "future",
        "SingletonGenerator",
        "IOQueue",
        "Loop",
        "_promote_to_task",
        "create_task",
        "run_until_complete",
        "wait_io_event",
        "call_exception_handler",
        "run",
        "_stopper",
        "get_event_loop",
        "current_task",
        "new_event_loop",
        "exc",
        "poller",
        "_enqueue",
        "_dequeue",
        "queue_read",
        "queue_write",
        "run_forever",
        "set_exception_handler",
        "_exc_handler",
        "get_exception_handler",
        "default_exception_handler",
        "future:",
        "coro=",
        "ticks",
        "_exc_context",
        "_stop_task",
        "t",
        "sgen",
        "aw",
        "main_task",
        "_io_queue",
        "runq_len",
        "waitq_len",
        "s",
        "idx",
        "dt",
        "loop",
        "context",
        "coroutine expected",
        "uasyncio/event.py",
        "waiting",
        "is_set",
        "wait",
        "req",
        "uasyncio/funcs.py",
        "_Remove",
        "return_exceptions",
        "_run",
        "waiter",
        "er",
        "can't gather",
        "uasyncio/lock.py",
        "tb",
        "Lock not acquired",
        "uasyncio/stream.py",
        "Stream",
        "Server",
        "wait_closed",
        "aclose",
        "awrite",
        "awritestr",
        "usocket",
        "getaddrinfo",
        "SOCK_STREAM",
        "socket",
        "connect",
        "setsockopt",
        "SOL_SOCKET",
        "SO_REUSEADDR",
        "bind",
        "listen",
        "_serve",
        "stream_awrite",
        "drain",
        "out_buf",
        "get_extra_info",
        "readexactly",
        "accept",
        "peername",
        "host",
        "port",
        "cb",
        "backlog",
        "sz",
        "v",
        "n",
    },
};

////////////////////////////////////////////////////////////////////////////////
// frozen module digitalio
// - original source file: build-SHAREDLIB/frozen_mpy/digitalio.mpy
// - frozen file name: digitalio.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file digitalio.py, scope digitalio__lt_module_gt_
static const FLASHMEM byte fun_data_digitalio__lt_module_gt_[1250] = {
    0x18,0xd8,0x02, // prelude
    0x01, // names: <module>
    0x60,0x80,0x09,0x72,0x40,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x4f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x4e,0x28,0x2e,0x28,0x4e,0x72,0x8b,0x07,0x28,0x68,0x8b,0x07,0x28,0x68,0x8b,0x08,0x28,0x68,0x40, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'board_id'
    0x10,0x03, // LOAD_CONST_STRING 'detector'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x04, // IMPORT_NAME 'adafruit_blinka.agnostic'
    0x1c,0x02, // IMPORT_FROM 'board_id'
    0x16,0x02, // STORE_NAME 'board_id'
    0x1c,0x03, // IMPORT_FROM 'detector'
    0x16,0x03, // STORE_NAME 'detector'
    0x59, // POP_TOP
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x06, // LOAD_ATTR 'BCM2XXX'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x08, // IMPORT_NAME 'adafruit_blinka.microcontroller.bcm283x.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xda,0x87, // JUMP 986
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x09, // LOAD_ATTR 'AM33XX'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0a, // IMPORT_NAME 'adafruit_blinka.microcontroller.am335x.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xc3,0x87, // JUMP 963
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x0b, // LOAD_ATTR 'AM65XX'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0c, // IMPORT_NAME 'adafruit_blinka.microcontroller.am65xx.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xac,0x87, // JUMP 940
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x0d, // LOAD_ATTR 'JH71x0'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0e, // IMPORT_NAME 'adafruit_blinka.microcontroller.starfive.JH71x0.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0x95,0x87, // JUMP 917
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x0f, // LOAD_ATTR 'DRA74X'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x10, // IMPORT_NAME 'adafruit_blinka.microcontroller.dra74x.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xfe,0x86, // JUMP 894
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x11, // LOAD_ATTR 'SUN8I'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x12, // IMPORT_NAME 'adafruit_blinka.microcontroller.allwinner.h3.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xe7,0x86, // JUMP 871
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x13, // LOAD_ATTR 'SAMA5'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x14, // IMPORT_NAME 'adafruit_blinka.microcontroller.sama5.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xd0,0x86, // JUMP 848
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x15, // LOAD_ATTR 'T210'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x16, // IMPORT_NAME 'adafruit_blinka.microcontroller.tegra.t210.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xb9,0x86, // JUMP 825
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x17, // LOAD_ATTR 'T186'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x18, // IMPORT_NAME 'adafruit_blinka.microcontroller.tegra.t186.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xa2,0x86, // JUMP 802
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x19, // LOAD_ATTR 'T194'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x1a, // IMPORT_NAME 'adafruit_blinka.microcontroller.tegra.t194.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0x8b,0x86, // JUMP 779
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x1b, // LOAD_ATTR 'T234'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x1c, // IMPORT_NAME 'adafruit_blinka.microcontroller.tegra.t234.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xf4,0x85, // JUMP 756
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x1d, // LOAD_ATTR 'S905'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x1e, // IMPORT_NAME 'adafruit_blinka.microcontroller.amlogic.s905.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xdd,0x85, // JUMP 733
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x1f, // LOAD_ATTR 'S905X'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x20, // IMPORT_NAME 'adafruit_blinka.microcontroller.amlogic.s905x.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xc6,0x85, // JUMP 710
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x21, // LOAD_ATTR 'S905X3'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x22, // IMPORT_NAME 'adafruit_blinka.microcontroller.amlogic.s905x3.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xaf,0x85, // JUMP 687
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x23, // LOAD_ATTR 'S905Y2'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x24, // IMPORT_NAME 'adafruit_blinka.microcontroller.amlogic.s905y2.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0x98,0x85, // JUMP 664
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x25, // LOAD_ATTR 'S922X'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x26, // IMPORT_NAME 'adafruit_blinka.microcontroller.amlogic.s922x.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0x81,0x85, // JUMP 641
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x27, // LOAD_ATTR 'A311D'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x28, // IMPORT_NAME 'adafruit_blinka.microcontroller.amlogic.a311d.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xea,0x84, // JUMP 618
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x29, // LOAD_ATTR 'EXYNOS5422'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x2a, // IMPORT_NAME 'adafruit_blinka.microcontroller.samsung.exynos5422.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xd3,0x84, // JUMP 595
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x2b, // LOAD_ATTR 'APQ8016'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x2c, // IMPORT_NAME 'adafruit_blinka.microcontroller.snapdragon.apq8016.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xbc,0x84, // JUMP 572
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x2d, // LOAD_ATTR 'IMX8MX'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x2e, // IMPORT_NAME 'adafruit_blinka.microcontroller.nxp_imx8m.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xa5,0x84, // JUMP 549
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x2f, // LOAD_ATTR 'IMX6ULL'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x30, // IMPORT_NAME 'adafruit_blinka.microcontroller.nxp_imx6ull.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0x8e,0x84, // JUMP 526
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x31, // LOAD_ATTR 'HFU540'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x32, // IMPORT_NAME 'adafruit_blinka.microcontroller.hfu540.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xf7,0x83, // JUMP 503
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x33, // LOAD_ATTR 'A64'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x34, // IMPORT_NAME 'adafruit_blinka.microcontroller.allwinner.a64.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xe0,0x83, // JUMP 480
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x35, // LOAD_ATTR 'A33'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x36, // IMPORT_NAME 'adafruit_blinka.microcontroller.allwinner.a33.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xc9,0x83, // JUMP 457
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x37, // LOAD_ATTR 'MIPS24KEC'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x38, // IMPORT_NAME 'adafruit_blinka.microcontroller.mips24kec.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xb2,0x83, // JUMP 434
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x39, // LOAD_ATTR 'RK3308'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x3a, // IMPORT_NAME 'adafruit_blinka.microcontroller.rockchip.rk3308.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0x9b,0x83, // JUMP 411
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x3b, // LOAD_ATTR 'RK3399'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x3c, // IMPORT_NAME 'adafruit_blinka.microcontroller.rockchip.rk3399.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0x84,0x83, // JUMP 388
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x3d, // LOAD_ATTR 'RK3328'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x3e, // IMPORT_NAME 'adafruit_blinka.microcontroller.rockchip.rk3328.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xed,0x82, // JUMP 365
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x3f, // LOAD_ATTR 'PENTIUM_N3710'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x40, // IMPORT_NAME 'adafruit_blinka.microcontroller.pentium.n3710.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xd6,0x82, // JUMP 342
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x41, // LOAD_ATTR 'STM32MP157'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x42, // IMPORT_NAME 'adafruit_blinka.microcontroller.stm32.stm32mp157.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xbf,0x82, // JUMP 319
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x43, // LOAD_ATTR 'MT8167'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x44, // IMPORT_NAME 'adafruit_blinka.microcontroller.mt8167.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xa8,0x82, // JUMP 296
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x45, // LOAD_ATTR 'H3'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x12, // IMPORT_NAME 'adafruit_blinka.microcontroller.allwinner.h3.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0x91,0x82, // JUMP 273
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x46, // LOAD_ATTR 'H5'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x47, // IMPORT_NAME 'adafruit_blinka.microcontroller.allwinner.h5.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xfa,0x81, // JUMP 250
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x48, // LOAD_ATTR 'H6'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x49, // IMPORT_NAME 'adafruit_blinka.microcontroller.allwinner.h6.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xe3,0x81, // JUMP 227
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x4a, // LOAD_ATTR 'H616'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x4b, // IMPORT_NAME 'adafruit_blinka.microcontroller.allwinner.h616.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xcc,0x81, // JUMP 204
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x4c, // LOAD_ATTR 'D1_RISCV'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x4d, // IMPORT_NAME 'adafruit_blinka.microcontroller.allwinner.D1.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xb5,0x81, // JUMP 181
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x4e, // LOAD_ATTR 'board'
    0x13,0x4f, // LOAD_ATTR 'ftdi_ft232h'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x50, // IMPORT_NAME 'adafruit_blinka.microcontroller.ftdi_mpsse.ft232h.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0x9e,0x81, // JUMP 158
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x4e, // LOAD_ATTR 'board'
    0x13,0x51, // LOAD_ATTR 'ftdi_ft2232h'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x52, // IMPORT_NAME 'adafruit_blinka.microcontroller.ftdi_mpsse.ft2232h.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0x87,0x81, // JUMP 135
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x4e, // LOAD_ATTR 'board'
    0x13,0x53, // LOAD_ATTR 'binho_nova'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x54, // IMPORT_NAME 'adafruit_blinka.microcontroller.nova.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xf0,0x80, // JUMP 112
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x4e, // LOAD_ATTR 'board'
    0x13,0x55, // LOAD_ATTR 'greatfet_one'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x56, // IMPORT_NAME 'adafruit_blinka.microcontroller.nxp_lpc4330.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xd9,0x80, // JUMP 89
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x4e, // LOAD_ATTR 'board'
    0x13,0x57, // LOAD_ATTR 'microchip_mcp2221'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x58, // IMPORT_NAME 'adafruit_blinka.microcontroller.mcp2221.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0xc2,0x80, // JUMP 66
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x59, // LOAD_ATTR 'RP2040_U2IF'
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x5a, // IMPORT_NAME 'adafruit_blinka.microcontroller.rp2040_u2if.pin'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0x6c, // JUMP 44
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x5b, // LOAD_ATTR 'STM32F405'
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x5c, // IMPORT_NAME 'machine'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0x56, // JUMP 22
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'chip'
    0x13,0x5d, // LOAD_ATTR 'RP2040'
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x5c, // IMPORT_NAME 'machine'
    0x1c,0x07, // IMPORT_FROM 'Pin'
    0x16,0x07, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x42,0x40, // JUMP 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x5e, // LOAD_CONST_STRING 'Enum'
    0x10,0x5f, // LOAD_CONST_STRING 'ContextManaged'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x60, // IMPORT_NAME 'adafruit_blinka'
    0x1c,0x5e, // IMPORT_FROM 'Enum'
    0x16,0x5e, // STORE_NAME 'Enum'
    0x1c,0x5f, // IMPORT_FROM 'ContextManaged'
    0x16,0x5f, // STORE_NAME 'ContextManaged'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x61, // LOAD_CONST_STRING 'DriveMode'
    0x11,0x5e, // LOAD_NAME 'Enum'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x61, // STORE_NAME 'DriveMode'
    0x11,0x61, // LOAD_NAME 'DriveMode'
    0x34,0x00, // CALL_FUNCTION 0
    0x11,0x61, // LOAD_NAME 'DriveMode'
    0x18,0x62, // STORE_ATTR 'PUSH_PULL'
    0x11,0x61, // LOAD_NAME 'DriveMode'
    0x34,0x00, // CALL_FUNCTION 0
    0x11,0x61, // LOAD_NAME 'DriveMode'
    0x18,0x63, // STORE_ATTR 'OPEN_DRAIN'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x64, // LOAD_CONST_STRING 'Direction'
    0x11,0x5e, // LOAD_NAME 'Enum'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x64, // STORE_NAME 'Direction'
    0x11,0x64, // LOAD_NAME 'Direction'
    0x34,0x00, // CALL_FUNCTION 0
    0x11,0x64, // LOAD_NAME 'Direction'
    0x18,0x65, // STORE_ATTR 'INPUT'
    0x11,0x64, // LOAD_NAME 'Direction'
    0x34,0x00, // CALL_FUNCTION 0
    0x11,0x64, // LOAD_NAME 'Direction'
    0x18,0x66, // STORE_ATTR 'OUTPUT'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x67, // LOAD_CONST_STRING 'Pull'
    0x11,0x5e, // LOAD_NAME 'Enum'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x67, // STORE_NAME 'Pull'
    0x11,0x67, // LOAD_NAME 'Pull'
    0x34,0x00, // CALL_FUNCTION 0
    0x11,0x67, // LOAD_NAME 'Pull'
    0x18,0x68, // STORE_ATTR 'UP'
    0x11,0x67, // LOAD_NAME 'Pull'
    0x34,0x00, // CALL_FUNCTION 0
    0x11,0x67, // LOAD_NAME 'Pull'
    0x18,0x69, // STORE_ATTR 'DOWN'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x03, // MAKE_FUNCTION 3
    0x10,0x6a, // LOAD_CONST_STRING 'DigitalInOut'
    0x11,0x5f, // LOAD_NAME 'ContextManaged'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x6a, // STORE_NAME 'DigitalInOut'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of digitalio__lt_module_gt_
// frozen bytecode for file digitalio.py, scope digitalio_DriveMode
static const FLASHMEM byte fun_data_digitalio_DriveMode[26] = {
    0x00,0x0a, // prelude
    0x61, // names: DriveMode
    0x8b,0x70,0x40,0x23, // code info
    0x11,0x81,0x01, // LOAD_NAME '__name__'
    0x16,0x81,0x02, // STORE_NAME '__module__'
    0x10,0x61, // LOAD_CONST_STRING 'DriveMode'
    0x16,0x81,0x03, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x16,0x62, // STORE_NAME 'PUSH_PULL'
    0x51, // LOAD_CONST_NONE
    0x16,0x63, // STORE_NAME 'OPEN_DRAIN'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_DriveMode = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_digitalio_DriveMode,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 26,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 97,
        .line_info = fun_data_digitalio_DriveMode + 3,
        .opcodes = fun_data_digitalio_DriveMode + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of digitalio__lt_module_gt_
// frozen bytecode for file digitalio.py, scope digitalio_Direction
static const FLASHMEM byte fun_data_digitalio_Direction[26] = {
    0x00,0x0a, // prelude
    0x64, // names: Direction
    0x8b,0x7b,0x40,0x23, // code info
    0x11,0x81,0x01, // LOAD_NAME '__name__'
    0x16,0x81,0x02, // STORE_NAME '__module__'
    0x10,0x64, // LOAD_CONST_STRING 'Direction'
    0x16,0x81,0x03, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x16,0x65, // STORE_NAME 'INPUT'
    0x51, // LOAD_CONST_NONE
    0x16,0x66, // STORE_NAME 'OUTPUT'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_Direction = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_digitalio_Direction,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 26,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 100,
        .line_info = fun_data_digitalio_Direction + 3,
        .opcodes = fun_data_digitalio_Direction + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of digitalio__lt_module_gt_
// frozen bytecode for file digitalio.py, scope digitalio_Pull
static const FLASHMEM byte fun_data_digitalio_Pull[26] = {
    0x00,0x0a, // prelude
    0x67, // names: Pull
    0x8b,0x86,0x40,0x23, // code info
    0x11,0x81,0x01, // LOAD_NAME '__name__'
    0x16,0x81,0x02, // STORE_NAME '__module__'
    0x10,0x67, // LOAD_CONST_STRING 'Pull'
    0x16,0x81,0x03, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x16,0x68, // STORE_NAME 'UP'
    0x51, // LOAD_CONST_NONE
    0x16,0x69, // STORE_NAME 'DOWN'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_Pull = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_digitalio_Pull,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 26,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 103,
        .line_info = fun_data_digitalio_Pull + 3,
        .opcodes = fun_data_digitalio_Pull + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of digitalio__lt_module_gt_
// frozen bytecode for file digitalio.py, scope digitalio_DigitalInOut
static const FLASHMEM byte fun_data_digitalio_DigitalInOut[149] = {
    0x08,0x36, // prelude
    0x6a, // names: DigitalInOut
    0x8b,0x94,0x40,0x43,0x64,0x20,0x6c,0x60,0x68,0x40,0x64,0x20,0x69,0x40,0x8a,0x0d,0x69,0x40,0x8a,0x07,0x89,0x07,0x8a,0x14,0x89,0x07, // code info
    0x11,0x81,0x01, // LOAD_NAME '__name__'
    0x16,0x81,0x02, // STORE_NAME '__module__'
    0x10,0x6a, // LOAD_CONST_STRING 'DigitalInOut'
    0x16,0x81,0x03, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x16,0x6e, // STORE_NAME '_pin'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x6c, // STORE_NAME '__init__'
    0x50, // LOAD_CONST_FALSE
    0x11,0x61, // LOAD_NAME 'DriveMode'
    0x13,0x62, // LOAD_ATTR 'PUSH_PULL'
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x70, // STORE_NAME 'switch_to_output'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x02, // MAKE_FUNCTION_DEFARGS 2
    0x16,0x73, // STORE_NAME 'switch_to_input'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x75, // STORE_NAME 'deinit'
    0x11,0x81,0x04, // LOAD_NAME 'property'
    0x32,0x04, // MAKE_FUNCTION 4
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x6f, // STORE_NAME 'direction'
    0x11,0x6f, // LOAD_NAME 'direction'
    0x13,0x6b, // LOAD_ATTR 'setter'
    0x32,0x05, // MAKE_FUNCTION 5
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x6f, // STORE_NAME 'direction'
    0x11,0x81,0x04, // LOAD_NAME 'property'
    0x32,0x06, // MAKE_FUNCTION 6
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x71, // STORE_NAME 'value'
    0x11,0x71, // LOAD_NAME 'value'
    0x13,0x6b, // LOAD_ATTR 'setter'
    0x32,0x07, // MAKE_FUNCTION 7
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x71, // STORE_NAME 'value'
    0x11,0x81,0x04, // LOAD_NAME 'property'
    0x32,0x08, // MAKE_FUNCTION 8
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x74, // STORE_NAME 'pull'
    0x11,0x74, // LOAD_NAME 'pull'
    0x13,0x6b, // LOAD_ATTR 'setter'
    0x32,0x09, // MAKE_FUNCTION 9
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x74, // STORE_NAME 'pull'
    0x11,0x81,0x04, // LOAD_NAME 'property'
    0x32,0x0a, // MAKE_FUNCTION 10
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x72, // STORE_NAME 'drive_mode'
    0x11,0x72, // LOAD_NAME 'drive_mode'
    0x13,0x6b, // LOAD_ATTR 'setter'
    0x32,0x0b, // MAKE_FUNCTION 11
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x72, // STORE_NAME 'drive_mode'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of digitalio_DigitalInOut
// frozen bytecode for file digitalio.py, scope digitalio_DigitalInOut___init__
static const FLASHMEM byte fun_data_digitalio_DigitalInOut___init__[29] = {
    0x1a,0x10, // prelude
    0x6c,0x81,0x05,0x81,0x06, // names: __init__, self, pin
    0x80,0x99,0x2a, // code info
    0x12,0x07, // LOAD_GLOBAL 'Pin'
    0xb1, // LOAD_FAST 1
    0x13,0x6d, // LOAD_ATTR 'id'
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x6e, // STORE_ATTR '_pin'
    0x12,0x64, // LOAD_GLOBAL 'Direction'
    0x13,0x65, // LOAD_ATTR 'INPUT'
    0xb0, // LOAD_FAST 0
    0x18,0x6f, // STORE_ATTR 'direction'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_DigitalInOut___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_digitalio_DigitalInOut___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 29,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 108,
        .line_info = fun_data_digitalio_DigitalInOut___init__ + 7,
        .opcodes = fun_data_digitalio_DigitalInOut___init__ + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of digitalio_DigitalInOut
// frozen bytecode for file digitalio.py, scope digitalio_DigitalInOut_switch_to_output
static const FLASHMEM byte fun_data_digitalio_DigitalInOut_switch_to_output[31] = {
    0xa3,0x80,0x01,0x14, // prelude
    0x70,0x81,0x05,0x71,0x72, // names: switch_to_output, self, value, drive_mode
    0x80,0x9d,0x20,0x27,0x24, // code info
    0x12,0x64, // LOAD_GLOBAL 'Direction'
    0x13,0x66, // LOAD_ATTR 'OUTPUT'
    0xb0, // LOAD_FAST 0
    0x18,0x6f, // STORE_ATTR 'direction'
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x71, // STORE_ATTR 'value'
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x18,0x72, // STORE_ATTR 'drive_mode'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_DigitalInOut_switch_to_output = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_digitalio_DigitalInOut_switch_to_output,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 31,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 112,
        .line_info = fun_data_digitalio_DigitalInOut_switch_to_output + 9,
        .opcodes = fun_data_digitalio_DigitalInOut_switch_to_output + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of digitalio_DigitalInOut
// frozen bytecode for file digitalio.py, scope digitalio_DigitalInOut_switch_to_input
static const FLASHMEM byte fun_data_digitalio_DigitalInOut_switch_to_input[24] = {
    0x9a,0x01,0x10, // prelude
    0x73,0x81,0x05,0x74, // names: switch_to_input, self, pull
    0x80,0xa3,0x20,0x27, // code info
    0x12,0x64, // LOAD_GLOBAL 'Direction'
    0x13,0x65, // LOAD_ATTR 'INPUT'
    0xb0, // LOAD_FAST 0
    0x18,0x6f, // STORE_ATTR 'direction'
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x74, // STORE_ATTR 'pull'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_DigitalInOut_switch_to_input = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_digitalio_DigitalInOut_switch_to_input,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 115,
        .line_info = fun_data_digitalio_DigitalInOut_switch_to_input + 7,
        .opcodes = fun_data_digitalio_DigitalInOut_switch_to_input + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of digitalio_DigitalInOut
// frozen bytecode for file digitalio.py, scope digitalio_DigitalInOut_deinit
static const FLASHMEM byte fun_data_digitalio_DigitalInOut_deinit[15] = {
    0x11,0x0c, // prelude
    0x75,0x81,0x05, // names: deinit, self
    0x80,0xa8,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x53, // LOAD_NULL
    0x5a, // ROT_TWO
    0x18,0x6e, // STORE_ATTR '_pin'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_DigitalInOut_deinit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_digitalio_DigitalInOut_deinit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 117,
        .line_info = fun_data_digitalio_DigitalInOut_deinit + 5,
        .opcodes = fun_data_digitalio_DigitalInOut_deinit + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of digitalio_DigitalInOut
// frozen bytecode for file digitalio.py, scope digitalio_DigitalInOut_direction
static const FLASHMEM byte fun_data_digitalio_DigitalInOut_direction[12] = {
    0x09,0x0c, // prelude
    0x6f,0x81,0x05, // names: direction, self
    0x80,0xad,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x76, // LOAD_ATTR '__direction'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_DigitalInOut_direction = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_digitalio_DigitalInOut_direction,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 12,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 111,
        .line_info = fun_data_digitalio_DigitalInOut_direction + 5,
        .opcodes = fun_data_digitalio_DigitalInOut_direction + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of digitalio_DigitalInOut
// frozen bytecode for file digitalio.py, scope digitalio_DigitalInOut_direction2
static const FLASHMEM byte fun_data_digitalio_DigitalInOut_direction2[95] = {
    0x2a,0x1c, // prelude
    0x6f,0x81,0x05,0x71, // names: direction, self, value
    0x80,0xb2,0x24,0x28,0x2f,0x24,0x29,0x28,0x2f,0x46, // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x76, // STORE_ATTR '__direction'
    0xb1, // LOAD_FAST 1
    0x12,0x64, // LOAD_GLOBAL 'Direction'
    0x13,0x66, // LOAD_ATTR 'OUTPUT'
    0xde, // BINARY_OP 7 <is>
    0x44,0x5c, // POP_JUMP_IF_FALSE 28
    0xb0, // LOAD_FAST 0
    0x13,0x6e, // LOAD_ATTR '_pin'
    0x14,0x77, // LOAD_METHOD 'init'
    0x10,0x78, // LOAD_CONST_STRING 'mode'
    0x12,0x07, // LOAD_GLOBAL 'Pin'
    0x13,0x79, // LOAD_ATTR 'OUT'
    0x36,0x82,0x00, // CALL_METHOD 256
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x71, // STORE_ATTR 'value'
    0x12,0x61, // LOAD_GLOBAL 'DriveMode'
    0x13,0x62, // LOAD_ATTR 'PUSH_PULL'
    0xb0, // LOAD_FAST 0
    0x18,0x72, // STORE_ATTR 'drive_mode'
    0x42,0x65, // JUMP 37
    0xb1, // LOAD_FAST 1
    0x12,0x64, // LOAD_GLOBAL 'Direction'
    0x13,0x65, // LOAD_ATTR 'INPUT'
    0xde, // BINARY_OP 7 <is>
    0x44,0x55, // POP_JUMP_IF_FALSE 21
    0xb0, // LOAD_FAST 0
    0x13,0x6e, // LOAD_ATTR '_pin'
    0x14,0x77, // LOAD_METHOD 'init'
    0x10,0x78, // LOAD_CONST_STRING 'mode'
    0x12,0x07, // LOAD_GLOBAL 'Pin'
    0x13,0x7a, // LOAD_ATTR 'IN'
    0x36,0x82,0x00, // CALL_METHOD 256
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x74, // STORE_ATTR 'pull'
    0x42,0x48, // JUMP 8
    0x12,0x81,0x07, // LOAD_GLOBAL 'AttributeError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_DigitalInOut_direction2 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_digitalio_DigitalInOut_direction2,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 95,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 111,
        .line_info = fun_data_digitalio_DigitalInOut_direction2 + 6,
        .opcodes = fun_data_digitalio_DigitalInOut_direction2 + 16,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of digitalio_DigitalInOut
// frozen bytecode for file digitalio.py, scope digitalio_DigitalInOut_value
static const FLASHMEM byte fun_data_digitalio_DigitalInOut_value[18] = {
    0x11,0x0c, // prelude
    0x71,0x81,0x05, // names: value, self
    0x80,0xbf,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x6e, // LOAD_ATTR '_pin'
    0x14,0x71, // LOAD_METHOD 'value'
    0x36,0x00, // CALL_METHOD 0
    0x81, // LOAD_CONST_SMALL_INT 1
    0xd9, // BINARY_OP 2 __eq__
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_DigitalInOut_value = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_digitalio_DigitalInOut_value,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 18,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 113,
        .line_info = fun_data_digitalio_DigitalInOut_value + 5,
        .opcodes = fun_data_digitalio_DigitalInOut_value + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of digitalio_DigitalInOut
// frozen bytecode for file digitalio.py, scope digitalio_DigitalInOut_value2
static const FLASHMEM byte fun_data_digitalio_DigitalInOut_value2[48] = {
    0x22,0x12, // prelude
    0x71,0x81,0x05,0x81,0x08, // names: value, self, val
    0x80,0xc4,0x2a,0x51, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x6f, // LOAD_ATTR 'direction'
    0x12,0x64, // LOAD_GLOBAL 'Direction'
    0x13,0x66, // LOAD_ATTR 'OUTPUT'
    0xde, // BINARY_OP 7 <is>
    0x44,0x51, // POP_JUMP_IF_FALSE 17
    0xb0, // LOAD_FAST 0
    0x13,0x6e, // LOAD_ATTR '_pin'
    0x14,0x71, // LOAD_METHOD 'value'
    0xb1, // LOAD_FAST 1
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x81, // LOAD_CONST_SMALL_INT 1
    0x42,0x41, // JUMP 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x48, // JUMP 8
    0x12,0x81,0x07, // LOAD_GLOBAL 'AttributeError'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_DigitalInOut_value2 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_digitalio_DigitalInOut_value2,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 48,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 113,
        .line_info = fun_data_digitalio_DigitalInOut_value2 + 7,
        .opcodes = fun_data_digitalio_DigitalInOut_value2 + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of digitalio_DigitalInOut
// frozen bytecode for file digitalio.py, scope digitalio_DigitalInOut_pull
static const FLASHMEM byte fun_data_digitalio_DigitalInOut_pull[32] = {
    0x11,0x10, // prelude
    0x74,0x81,0x05, // names: pull, self
    0x80,0xcb,0x20,0x2a,0x24, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x6f, // LOAD_ATTR 'direction'
    0x12,0x64, // LOAD_GLOBAL 'Direction'
    0x13,0x65, // LOAD_ATTR 'INPUT'
    0xde, // BINARY_OP 7 <is>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb0, // LOAD_FAST 0
    0x13,0x7b, // LOAD_ATTR '__pull'
    0x63, // RETURN_VALUE
    0x12,0x81,0x07, // LOAD_GLOBAL 'AttributeError'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_DigitalInOut_pull = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_digitalio_DigitalInOut_pull,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 32,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 116,
        .line_info = fun_data_digitalio_DigitalInOut_pull + 5,
        .opcodes = fun_data_digitalio_DigitalInOut_pull + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of digitalio_DigitalInOut
// frozen bytecode for file digitalio.py, scope digitalio_DigitalInOut_pull2
static const FLASHMEM byte fun_data_digitalio_DigitalInOut_pull2[175] = {
    0x3a,0x26, // prelude
    0x74,0x81,0x05,0x81,0x09, // names: pull, self, pul
    0x80,0xd2,0x2b,0x24,0x28,0x38,0x28,0x2b,0x57,0x23,0x51,0x25,0x54,0x4a, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x6f, // LOAD_ATTR 'direction'
    0x12,0x64, // LOAD_GLOBAL 'Direction'
    0x13,0x65, // LOAD_ATTR 'INPUT'
    0xde, // BINARY_OP 7 <is>
    0x44,0x85,0x81, // POP_JUMP_IF_FALSE 133
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x7b, // STORE_ATTR '__pull'
    0xb1, // LOAD_FAST 1
    0x12,0x67, // LOAD_GLOBAL 'Pull'
    0x13,0x68, // LOAD_ATTR 'UP'
    0xde, // BINARY_OP 7 <is>
    0x44,0x58, // POP_JUMP_IF_FALSE 24
    0xb0, // LOAD_FAST 0
    0x13,0x6e, // LOAD_ATTR '_pin'
    0x14,0x77, // LOAD_METHOD 'init'
    0x10,0x78, // LOAD_CONST_STRING 'mode'
    0x12,0x07, // LOAD_GLOBAL 'Pin'
    0x13,0x7a, // LOAD_ATTR 'IN'
    0x10,0x74, // LOAD_CONST_STRING 'pull'
    0x12,0x07, // LOAD_GLOBAL 'Pin'
    0x13,0x7c, // LOAD_ATTR 'PULL_UP'
    0x36,0x84,0x00, // CALL_METHOD 512
    0x59, // POP_TOP
    0x42,0xdf,0x80, // JUMP 95
    0xb1, // LOAD_FAST 1
    0x12,0x67, // LOAD_GLOBAL 'Pull'
    0x13,0x69, // LOAD_ATTR 'DOWN'
    0xde, // BINARY_OP 7 <is>
    0x44,0x76, // POP_JUMP_IF_FALSE 54
    0x12,0x81,0x0a, // LOAD_GLOBAL 'hasattr'
    0x12,0x07, // LOAD_GLOBAL 'Pin'
    0x10,0x7d, // LOAD_CONST_STRING 'PULL_DOWN'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x57, // POP_JUMP_IF_FALSE 23
    0xb0, // LOAD_FAST 0
    0x13,0x6e, // LOAD_ATTR '_pin'
    0x14,0x77, // LOAD_METHOD 'init'
    0x10,0x78, // LOAD_CONST_STRING 'mode'
    0x12,0x07, // LOAD_GLOBAL 'Pin'
    0x13,0x7a, // LOAD_ATTR 'IN'
    0x10,0x74, // LOAD_CONST_STRING 'pull'
    0x12,0x07, // LOAD_GLOBAL 'Pin'
    0x13,0x7d, // LOAD_ATTR 'PULL_DOWN'
    0x36,0x84,0x00, // CALL_METHOD 512
    0x59, // POP_TOP
    0x42,0x52, // JUMP 18
    0x12,0x81,0x0b, // LOAD_GLOBAL 'NotImplementedError'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x14,0x7e, // LOAD_METHOD 'format'
    0x12,0x67, // LOAD_GLOBAL 'Pull'
    0x13,0x69, // LOAD_ATTR 'DOWN'
    0x12,0x02, // LOAD_GLOBAL 'board_id'
    0x36,0x02, // CALL_METHOD 2
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x42,0x61, // JUMP 33
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xb0, // LOAD_FAST 0
    0x13,0x6e, // LOAD_ATTR '_pin'
    0x14,0x77, // LOAD_METHOD 'init'
    0x10,0x78, // LOAD_CONST_STRING 'mode'
    0x12,0x07, // LOAD_GLOBAL 'Pin'
    0x13,0x7a, // LOAD_ATTR 'IN'
    0x10,0x74, // LOAD_CONST_STRING 'pull'
    0x51, // LOAD_CONST_NONE
    0x36,0x84,0x00, // CALL_METHOD 512
    0x59, // POP_TOP
    0x42,0x48, // JUMP 8
    0x12,0x81,0x07, // LOAD_GLOBAL 'AttributeError'
    0x10,0x7f, // LOAD_CONST_STRING 'Not a Pull'
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x42,0x48, // JUMP 8
    0x12,0x81,0x07, // LOAD_GLOBAL 'AttributeError'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_DigitalInOut_pull2 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_digitalio_DigitalInOut_pull2,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 175,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 116,
        .line_info = fun_data_digitalio_DigitalInOut_pull2 + 7,
        .opcodes = fun_data_digitalio_DigitalInOut_pull2 + 21,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of digitalio_DigitalInOut
// frozen bytecode for file digitalio.py, scope digitalio_DigitalInOut_drive_mode
static const FLASHMEM byte fun_data_digitalio_DigitalInOut_drive_mode[33] = {
    0x11,0x10, // prelude
    0x72,0x81,0x05, // names: drive_mode, self
    0x80,0xe6,0x20,0x2a,0x25, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x6f, // LOAD_ATTR 'direction'
    0x12,0x64, // LOAD_GLOBAL 'Direction'
    0x13,0x66, // LOAD_ATTR 'OUTPUT'
    0xde, // BINARY_OP 7 <is>
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0xb0, // LOAD_FAST 0
    0x13,0x81,0x00, // LOAD_ATTR '__drive_mode'
    0x63, // RETURN_VALUE
    0x12,0x81,0x07, // LOAD_GLOBAL 'AttributeError'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_DigitalInOut_drive_mode = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_digitalio_DigitalInOut_drive_mode,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 33,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 114,
        .line_info = fun_data_digitalio_DigitalInOut_drive_mode + 5,
        .opcodes = fun_data_digitalio_DigitalInOut_drive_mode + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of digitalio_DigitalInOut
// frozen bytecode for file digitalio.py, scope digitalio_DigitalInOut_drive_mode2
static const FLASHMEM byte fun_data_digitalio_DigitalInOut_drive_mode2[70] = {
    0x2a,0x16, // prelude
    0x72,0x81,0x05,0x81,0x0c, // names: drive_mode, self, mod
    0x80,0xed,0x25,0x28,0x31,0x28, // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x81,0x00, // STORE_ATTR '__drive_mode'
    0xb1, // LOAD_FAST 1
    0x12,0x61, // LOAD_GLOBAL 'DriveMode'
    0x13,0x63, // LOAD_ATTR 'OPEN_DRAIN'
    0xde, // BINARY_OP 7 <is>
    0x44,0x51, // POP_JUMP_IF_FALSE 17
    0xb0, // LOAD_FAST 0
    0x13,0x6e, // LOAD_ATTR '_pin'
    0x14,0x77, // LOAD_METHOD 'init'
    0x10,0x78, // LOAD_CONST_STRING 'mode'
    0x12,0x07, // LOAD_GLOBAL 'Pin'
    0x13,0x63, // LOAD_ATTR 'OPEN_DRAIN'
    0x36,0x82,0x00, // CALL_METHOD 256
    0x59, // POP_TOP
    0x42,0x59, // JUMP 25
    0xb1, // LOAD_FAST 1
    0x12,0x61, // LOAD_GLOBAL 'DriveMode'
    0x13,0x62, // LOAD_ATTR 'PUSH_PULL'
    0xde, // BINARY_OP 7 <is>
    0x44,0x51, // POP_JUMP_IF_FALSE 17
    0xb0, // LOAD_FAST 0
    0x13,0x6e, // LOAD_ATTR '_pin'
    0x14,0x77, // LOAD_METHOD 'init'
    0x10,0x78, // LOAD_CONST_STRING 'mode'
    0x12,0x07, // LOAD_GLOBAL 'Pin'
    0x13,0x79, // LOAD_ATTR 'OUT'
    0x36,0x82,0x00, // CALL_METHOD 256
    0x59, // POP_TOP
    0x42,0x40, // JUMP 0
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_digitalio_DigitalInOut_drive_mode2 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_digitalio_DigitalInOut_drive_mode2,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 70,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 114,
        .line_info = fun_data_digitalio_DigitalInOut_drive_mode2 + 7,
        .opcodes = fun_data_digitalio_DigitalInOut_drive_mode2 + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_digitalio_DigitalInOut[] = {
    &raw_code_digitalio_DigitalInOut___init__,
    &raw_code_digitalio_DigitalInOut_switch_to_output,
    &raw_code_digitalio_DigitalInOut_switch_to_input,
    &raw_code_digitalio_DigitalInOut_deinit,
    &raw_code_digitalio_DigitalInOut_direction,
    &raw_code_digitalio_DigitalInOut_direction2,
    &raw_code_digitalio_DigitalInOut_value,
    &raw_code_digitalio_DigitalInOut_value2,
    &raw_code_digitalio_DigitalInOut_pull,
    &raw_code_digitalio_DigitalInOut_pull2,
    &raw_code_digitalio_DigitalInOut_drive_mode,
    &raw_code_digitalio_DigitalInOut_drive_mode2,
};

static const FLASHMEM mp_raw_code_t raw_code_digitalio_DigitalInOut = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_digitalio_DigitalInOut,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 149,
    #endif
    .children = (void *)&children_digitalio_DigitalInOut,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 12,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 106,
        .line_info = fun_data_digitalio_DigitalInOut + 3,
        .opcodes = fun_data_digitalio_DigitalInOut + 29,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_digitalio__lt_module_gt_[] = {
    &raw_code_digitalio_DriveMode,
    &raw_code_digitalio_Direction,
    &raw_code_digitalio_Pull,
    &raw_code_digitalio_DigitalInOut,
};

static const FLASHMEM mp_raw_code_t raw_code_digitalio__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_digitalio__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 1250,
    #endif
    .children = (void *)&children_digitalio__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 4,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_digitalio__lt_module_gt_ + 4,
        .opcodes = fun_data_digitalio__lt_module_gt_ + 111,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_digitalio[141] = {
    MP_QSTR_digitalio_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_board_id,
    MP_QSTR_detector,
    MP_QSTR_adafruit_blinka_dot_agnostic,
    MP_QSTR_chip,
    MP_QSTR_BCM2XXX,
    MP_QSTR_Pin,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_bcm283x_dot_pin,
    MP_QSTR_AM33XX,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_am335x_dot_pin,
    MP_QSTR_AM65XX,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_am65xx_dot_pin,
    MP_QSTR_JH71x0,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_starfive_dot_JH71x0_dot_pin,
    MP_QSTR_DRA74X,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_dra74x_dot_pin,
    MP_QSTR_SUN8I,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_allwinner_dot_h3_dot_pin,
    MP_QSTR_SAMA5,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_sama5_dot_pin,
    MP_QSTR_T210,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_tegra_dot_t210_dot_pin,
    MP_QSTR_T186,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_tegra_dot_t186_dot_pin,
    MP_QSTR_T194,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_tegra_dot_t194_dot_pin,
    MP_QSTR_T234,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_tegra_dot_t234_dot_pin,
    MP_QSTR_S905,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_amlogic_dot_s905_dot_pin,
    MP_QSTR_S905X,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_amlogic_dot_s905x_dot_pin,
    MP_QSTR_S905X3,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_amlogic_dot_s905x3_dot_pin,
    MP_QSTR_S905Y2,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_amlogic_dot_s905y2_dot_pin,
    MP_QSTR_S922X,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_amlogic_dot_s922x_dot_pin,
    MP_QSTR_A311D,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_amlogic_dot_a311d_dot_pin,
    MP_QSTR_EXYNOS5422,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_samsung_dot_exynos5422_dot_pin,
    MP_QSTR_APQ8016,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_snapdragon_dot_apq8016_dot_pin,
    MP_QSTR_IMX8MX,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_nxp_imx8m_dot_pin,
    MP_QSTR_IMX6ULL,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_nxp_imx6ull_dot_pin,
    MP_QSTR_HFU540,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_hfu540_dot_pin,
    MP_QSTR_A64,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_allwinner_dot_a64_dot_pin,
    MP_QSTR_A33,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_allwinner_dot_a33_dot_pin,
    MP_QSTR_MIPS24KEC,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_mips24kec_dot_pin,
    MP_QSTR_RK3308,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rockchip_dot_rk3308_dot_pin,
    MP_QSTR_RK3399,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rockchip_dot_rk3399_dot_pin,
    MP_QSTR_RK3328,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rockchip_dot_rk3328_dot_pin,
    MP_QSTR_PENTIUM_N3710,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_pentium_dot_n3710_dot_pin,
    MP_QSTR_STM32MP157,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_stm32_dot_stm32mp157_dot_pin,
    MP_QSTR_MT8167,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_mt8167_dot_pin,
    MP_QSTR_H3,
    MP_QSTR_H5,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_allwinner_dot_h5_dot_pin,
    MP_QSTR_H6,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_allwinner_dot_h6_dot_pin,
    MP_QSTR_H616,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_allwinner_dot_h616_dot_pin,
    MP_QSTR_D1_RISCV,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_allwinner_dot_D1_dot_pin,
    MP_QSTR_board,
    MP_QSTR_ftdi_ft232h,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_ftdi_mpsse_dot_ft232h_dot_pin,
    MP_QSTR_ftdi_ft2232h,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_ftdi_mpsse_dot_ft2232h_dot_pin,
    MP_QSTR_binho_nova,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_nova_dot_pin,
    MP_QSTR_greatfet_one,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_nxp_lpc4330_dot_pin,
    MP_QSTR_microchip_mcp2221,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_mcp2221_dot_pin,
    MP_QSTR_RP2040_U2IF,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rp2040_u2if_dot_pin,
    MP_QSTR_STM32F405,
    MP_QSTR_machine,
    MP_QSTR_RP2040,
    MP_QSTR_Enum,
    MP_QSTR_ContextManaged,
    MP_QSTR_adafruit_blinka,
    MP_QSTR_DriveMode,
    MP_QSTR_PUSH_PULL,
    MP_QSTR_OPEN_DRAIN,
    MP_QSTR_Direction,
    MP_QSTR_INPUT,
    MP_QSTR_OUTPUT,
    MP_QSTR_Pull,
    MP_QSTR_UP,
    MP_QSTR_DOWN,
    MP_QSTR_DigitalInOut,
    MP_QSTR_setter,
    MP_QSTR___init__,
    MP_QSTR_id,
    MP_QSTR__pin,
    MP_QSTR_direction,
    MP_QSTR_switch_to_output,
    MP_QSTR_value,
    MP_QSTR_drive_mode,
    MP_QSTR_switch_to_input,
    MP_QSTR_pull,
    MP_QSTR_deinit,
    MP_QSTR___direction,
    MP_QSTR_init,
    MP_QSTR_mode,
    MP_QSTR_OUT,
    MP_QSTR_IN,
    MP_QSTR___pull,
    MP_QSTR_PULL_UP,
    MP_QSTR_PULL_DOWN,
    MP_QSTR_format,
    MP_QSTR_Not_space_a_space_Pull,
    MP_QSTR___drive_mode,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_property,
    MP_QSTR_self,
    MP_QSTR_pin,
    MP_QSTR_AttributeError,
    MP_QSTR_val,
    MP_QSTR_pul,
    MP_QSTR_hasattr,
    MP_QSTR_NotImplementedError,
    MP_QSTR_mod,
};

// constants

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_digitalio[4] = {
    MP_ROM_QSTR(MP_QSTR_Not_space_a_space_Direction),
    MP_ROM_QSTR(MP_QSTR_Not_space_an_space_output),
    MP_ROM_QSTR(MP_QSTR_Not_space_an_space_input),
    MP_ROM_QSTR(MP_QSTR__brace_open__brace_close__space_unsupported_space_on_space__brace_open__brace_close_),
};

static const FLASHMEM mp_frozen_module_t frozen_module_digitalio = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_digitalio,
        .obj_table = (mp_obj_t *)&const_obj_table_data_digitalio,
    },
    .rc = &raw_code_digitalio__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module usb_hid
// - original source file: build-SHAREDLIB/frozen_mpy/usb_hid.mpy
// - frozen file name: usb_hid.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file usb_hid.py, scope usb_hid__lt_module_gt_
static const FLASHMEM byte fun_data_usb_hid__lt_module_gt_[398] = {
    0x60,0x74, // prelude
    0x01, // names: <module>
    0x60,0x80,0x0a,0x2c,0x2c,0x26,0x26,0x46,0x2b,0x39,0x22,0x4a,0x49,0x26,0x25,0x66,0x89,0x51,0x24,0x62,0x8c,0x48,0x25,0x25,0x4a,0x24,0x62,0x8c,0x43,0x25,0x25,0x6a,0x24,0x62,0x8c,0x1c,0x25,0x25,0x6a,0x24,0x62,0x8c,0x46,0x25,0x25,0x4a,0x24,0x62,0x8c,0x41,0x25,0x25,0x6a,0x20,0x84,0x23,0x69, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'Sequence'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'typing'
    0x1c,0x02, // IMPORT_FROM 'Sequence'
    0x16,0x02, // STORE_NAME 'Sequence'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'Path'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x05, // IMPORT_NAME 'pathlib'
    0x1c,0x04, // IMPORT_FROM 'Path'
    0x16,0x04, // STORE_NAME 'Path'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x06, // IMPORT_NAME 'os'
    0x16,0x06, // STORE_NAME 'os'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x07, // IMPORT_NAME 'atexit'
    0x16,0x07, // STORE_NAME 'atexit'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x08, // IMPORT_NAME 'sys'
    0x16,0x08, // STORE_NAME 'sys'
    0x10,0x09, // LOAD_CONST_STRING 'dwc2'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x2b,0x02, // BUILD_LIST 2
    0x5f, // GET_ITER_STACK
    0x4b,0x27, // FOR_ITER 39
    0x16,0x47, // STORE_NAME 'module'
    0x11,0x04, // LOAD_NAME 'Path'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x0a, // LOAD_METHOD 'read_text'
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x00, // CALL_METHOD 256
    0x14,0x0d, // LOAD_METHOD 'find'
    0x11,0x47, // LOAD_NAME 'module'
    0x36,0x01, // CALL_METHOD 1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x11,0x48, // LOAD_NAME 'Exception'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x11,0x47, // LOAD_NAME 'module'
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x42,0x17, // JUMP -41
    0x11,0x08, // LOAD_NAME 'sys'
    0x13,0x0e, // LOAD_ATTR 'modules'
    0x11,0x49, // LOAD_NAME '__name__'
    0x55, // LOAD_SUBSCR
    0x16,0x4a, // STORE_NAME 'this'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x11,0x4a, // LOAD_NAME 'this'
    0x18,0x0f, // STORE_ATTR 'gadget_root'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x11,0x4a, // LOAD_NAME 'this'
    0x18,0x10, // STORE_ATTR 'boot_device'
    0x2b,0x00, // BUILD_LIST 0
    0x11,0x4a, // LOAD_NAME 'this'
    0x18,0x11, // STORE_ATTR 'devices'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x12, // LOAD_CONST_STRING 'Device'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x12, // STORE_NAME 'Device'
    0x11,0x12, // LOAD_NAME 'Device'
    0x10,0x13, // LOAD_CONST_STRING 'descriptor'
    0x11,0x4b, // LOAD_NAME 'bytes'
    0x23,0x04, // LOAD_CONST_OBJ 4
    0x34,0x01, // CALL_FUNCTION 1
    0x10,0x14, // LOAD_CONST_STRING 'usage_page'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x15, // LOAD_CONST_STRING 'usage'
    0x86, // LOAD_CONST_SMALL_INT 6
    0x10,0x16, // LOAD_CONST_STRING 'report_ids'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x2b,0x01, // BUILD_LIST 1
    0x10,0x17, // LOAD_CONST_STRING 'in_report_lengths'
    0x88, // LOAD_CONST_SMALL_INT 8
    0x2b,0x01, // BUILD_LIST 1
    0x10,0x18, // LOAD_CONST_STRING 'out_report_lengths'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x2b,0x01, // BUILD_LIST 1
    0x34,0x8c,0x00, // CALL_FUNCTION 1536
    0x11,0x12, // LOAD_NAME 'Device'
    0x18,0x19, // STORE_ATTR 'KEYBOARD'
    0x11,0x12, // LOAD_NAME 'Device'
    0x10,0x13, // LOAD_CONST_STRING 'descriptor'
    0x11,0x4b, // LOAD_NAME 'bytes'
    0x23,0x05, // LOAD_CONST_OBJ 5
    0x34,0x01, // CALL_FUNCTION 1
    0x10,0x14, // LOAD_CONST_STRING 'usage_page'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x15, // LOAD_CONST_STRING 'usage'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x10,0x16, // LOAD_CONST_STRING 'report_ids'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x2b,0x01, // BUILD_LIST 1
    0x10,0x17, // LOAD_CONST_STRING 'in_report_lengths'
    0x84, // LOAD_CONST_SMALL_INT 4
    0x2b,0x01, // BUILD_LIST 1
    0x10,0x18, // LOAD_CONST_STRING 'out_report_lengths'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2b,0x01, // BUILD_LIST 1
    0x34,0x8c,0x00, // CALL_FUNCTION 1536
    0x11,0x12, // LOAD_NAME 'Device'
    0x18,0x1a, // STORE_ATTR 'MOUSE'
    0x11,0x12, // LOAD_NAME 'Device'
    0x10,0x13, // LOAD_CONST_STRING 'descriptor'
    0x11,0x4b, // LOAD_NAME 'bytes'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x34,0x01, // CALL_FUNCTION 1
    0x10,0x14, // LOAD_CONST_STRING 'usage_page'
    0x8c, // LOAD_CONST_SMALL_INT 12
    0x10,0x15, // LOAD_CONST_STRING 'usage'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x16, // LOAD_CONST_STRING 'report_ids'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x2b,0x01, // BUILD_LIST 1
    0x10,0x17, // LOAD_CONST_STRING 'in_report_lengths'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x2b,0x01, // BUILD_LIST 1
    0x10,0x18, // LOAD_CONST_STRING 'out_report_lengths'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2b,0x01, // BUILD_LIST 1
    0x34,0x8c,0x00, // CALL_FUNCTION 1536
    0x11,0x12, // LOAD_NAME 'Device'
    0x18,0x1b, // STORE_ATTR 'CONSUMER_CONTROL'
    0x11,0x12, // LOAD_NAME 'Device'
    0x10,0x13, // LOAD_CONST_STRING 'descriptor'
    0x11,0x4b, // LOAD_NAME 'bytes'
    0x23,0x07, // LOAD_CONST_OBJ 7
    0x34,0x01, // CALL_FUNCTION 1
    0x10,0x14, // LOAD_CONST_STRING 'usage_page'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x15, // LOAD_CONST_STRING 'usage'
    0x86, // LOAD_CONST_SMALL_INT 6
    0x10,0x16, // LOAD_CONST_STRING 'report_ids'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2b,0x01, // BUILD_LIST 1
    0x10,0x17, // LOAD_CONST_STRING 'in_report_lengths'
    0x88, // LOAD_CONST_SMALL_INT 8
    0x2b,0x01, // BUILD_LIST 1
    0x10,0x18, // LOAD_CONST_STRING 'out_report_lengths'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x2b,0x01, // BUILD_LIST 1
    0x34,0x8c,0x00, // CALL_FUNCTION 1536
    0x11,0x12, // LOAD_NAME 'Device'
    0x18,0x1c, // STORE_ATTR 'BOOT_KEYBOARD'
    0x11,0x12, // LOAD_NAME 'Device'
    0x10,0x13, // LOAD_CONST_STRING 'descriptor'
    0x11,0x4b, // LOAD_NAME 'bytes'
    0x23,0x08, // LOAD_CONST_OBJ 8
    0x34,0x01, // CALL_FUNCTION 1
    0x10,0x14, // LOAD_CONST_STRING 'usage_page'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x15, // LOAD_CONST_STRING 'usage'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x10,0x16, // LOAD_CONST_STRING 'report_ids'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2b,0x01, // BUILD_LIST 1
    0x10,0x17, // LOAD_CONST_STRING 'in_report_lengths'
    0x84, // LOAD_CONST_SMALL_INT 4
    0x2b,0x01, // BUILD_LIST 1
    0x10,0x18, // LOAD_CONST_STRING 'out_report_lengths'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2b,0x01, // BUILD_LIST 1
    0x34,0x8c,0x00, // CALL_FUNCTION 1536
    0x11,0x12, // LOAD_NAME 'Device'
    0x18,0x1d, // STORE_ATTR 'BOOT_MOUSE'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x1f, // STORE_NAME 'disable'
    0x11,0x07, // LOAD_NAME 'atexit'
    0x14,0x1e, // LOAD_METHOD 'register'
    0x11,0x1f, // LOAD_NAME 'disable'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x02, // MAKE_FUNCTION_DEFARGS 2
    0x16,0x29, // STORE_NAME 'enable'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of usb_hid__lt_module_gt_
// frozen bytecode for file usb_hid.py, scope usb_hid_Device
static const FLASHMEM byte fun_data_usb_hid_Device[70] = {
    0x08,0x22, // prelude
    0x12, // names: Device
    0x88,0x20,0x60,0x40,0x84,0x12,0x88,0x0c,0x88,0x0b,0x88,0x0d,0x84,0x10,0x23,0x23, // code info
    0x11,0x49, // LOAD_NAME '__name__'
    0x16,0x4c, // STORE_NAME '__module__'
    0x10,0x12, // LOAD_CONST_STRING 'Device'
    0x16,0x4d, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x37, // STORE_NAME '__init__'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x39, // STORE_NAME 'send_report'
    0x11,0x4e, // LOAD_NAME 'property'
    0x32,0x02, // MAKE_FUNCTION 2
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x3f, // STORE_NAME 'last_received_report'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x03, // MAKE_FUNCTION_DEFARGS 3
    0x16,0x40, // STORE_NAME 'get_last_received_report'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x3a, // STORE_NAME 'get_device_path'
    0x51, // LOAD_CONST_NONE
    0x16,0x19, // STORE_NAME 'KEYBOARD'
    0x51, // LOAD_CONST_NONE
    0x16,0x1a, // STORE_NAME 'MOUSE'
    0x51, // LOAD_CONST_NONE
    0x16,0x1b, // STORE_NAME 'CONSUMER_CONTROL'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of usb_hid_Device
// frozen bytecode for file usb_hid.py, scope usb_hid_Device___init__
static const FLASHMEM byte fun_data_usb_hid_Device___init__[51] = {
    0xc1,0x80,0x88,0x08,0x20, // prelude
    0x37,0x55,0x13,0x14,0x15,0x16,0x17,0x18, // names: __init__, self, descriptor, usage_page, usage, report_ids, in_report_lengths, out_report_lengths
    0x80,0x2f,0x24,0x24,0x24,0x24,0x24,0x24, // code info
    0xb6, // LOAD_FAST 6
    0xb0, // LOAD_FAST 0
    0x18,0x18, // STORE_ATTR 'out_report_lengths'
    0xb5, // LOAD_FAST 5
    0xb0, // LOAD_FAST 0
    0x18,0x17, // STORE_ATTR 'in_report_lengths'
    0xb4, // LOAD_FAST 4
    0xb0, // LOAD_FAST 0
    0x18,0x16, // STORE_ATTR 'report_ids'
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x18,0x15, // STORE_ATTR 'usage'
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x18,0x14, // STORE_ATTR 'usage_page'
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x13, // STORE_ATTR 'descriptor'
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x38, // STORE_ATTR '_last_received_report'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_usb_hid_Device___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_usb_hid_Device___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 51,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 6,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 55,
        .line_info = fun_data_usb_hid_Device___init__ + 13,
        .opcodes = fun_data_usb_hid_Device___init__ + 21,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of usb_hid_Device
// frozen bytecode for file usb_hid.py, scope usb_hid_Device_send_report
static const FLASHMEM byte fun_data_usb_hid_Device_send_report[74] = {
    0xdf,0x01,0x1a, // prelude
    0x39,0x55,0x56,0x57, // names: send_report, self, report, report_id
    0x80,0x38,0x60,0x20,0x29,0x27,0x2a,0x25,0x2f, // code info
    0xb2, // LOAD_FAST 2
    0x45,0x05, // JUMP_IF_TRUE_OR_POP 5
    0xb0, // LOAD_FAST 0
    0x13,0x16, // LOAD_ATTR 'report_ids'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x14,0x3a, // LOAD_METHOD 'get_device_path'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0x12,0x58, // LOAD_GLOBAL 'open'
    0xb3, // LOAD_FAST 3
    0x10,0x3b, // LOAD_CONST_STRING 'rb+'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x1d, // SETUP_WITH 29
    0xc4, // STORE_FAST 4
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x12,0x59, // LOAD_GLOBAL 'bytearray'
    0xb2, // LOAD_FAST 2
    0x14,0x3c, // LOAD_METHOD 'to_bytes'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x3d, // LOAD_CONST_STRING 'big'
    0x36,0x02, // CALL_METHOD 2
    0x34,0x01, // CALL_FUNCTION 1
    0xb1, // LOAD_FAST 1
    0xf2, // BINARY_OP 27 __add__
    0xc1, // STORE_FAST 1
    0xb4, // LOAD_FAST 4
    0x14,0x3e, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_usb_hid_Device_send_report = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_usb_hid_Device_send_report,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 74,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 57,
        .line_info = fun_data_usb_hid_Device_send_report + 7,
        .opcodes = fun_data_usb_hid_Device_send_report + 16,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of usb_hid_Device
// frozen bytecode for file usb_hid.py, scope usb_hid_Device_last_received_report
static const FLASHMEM byte fun_data_usb_hid_Device_last_received_report[14] = {
    0x11,0x0c, // prelude
    0x3f,0x55, // names: last_received_report, self
    0x80,0x47,0x60,0x40, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x40, // LOAD_METHOD 'get_last_received_report'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_usb_hid_Device_last_received_report = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_usb_hid_Device_last_received_report,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 63,
        .line_info = fun_data_usb_hid_Device_last_received_report + 4,
        .opcodes = fun_data_usb_hid_Device_last_received_report + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of usb_hid_Device
// frozen bytecode for file usb_hid.py, scope usb_hid_Device_get_last_received_report
static const FLASHMEM byte fun_data_usb_hid_Device_get_last_received_report[81] = {
    0xd6,0x01,0x1a, // prelude
    0x40,0x55,0x57, // names: get_last_received_report, self, report_id
    0x80,0x4f,0x60,0x20,0x2e,0x2a,0x2d,0x2b,0x26,0x27, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x3a, // LOAD_METHOD 'get_device_path'
    0xb1, // LOAD_FAST 1
    0x45,0x05, // JUMP_IF_TRUE_OR_POP 5
    0xb0, // LOAD_FAST 0
    0x13,0x16, // LOAD_ATTR 'report_ids'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0x12,0x58, // LOAD_GLOBAL 'open'
    0xb2, // LOAD_FAST 2
    0x10,0x3b, // LOAD_CONST_STRING 'rb+'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x24, // SETUP_WITH 36
    0xc3, // STORE_FAST 3
    0x12,0x06, // LOAD_GLOBAL 'os'
    0x14,0x41, // LOAD_METHOD 'set_blocking'
    0xb3, // LOAD_FAST 3
    0x14,0x42, // LOAD_METHOD 'fileno'
    0x36,0x00, // CALL_METHOD 0
    0x50, // LOAD_CONST_FALSE
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0x14,0x43, // LOAD_METHOD 'read'
    0xb0, // LOAD_FAST 0
    0x13,0x18, // LOAD_ATTR 'out_report_lengths'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb4, // LOAD_FAST 4
    0xb0, // LOAD_FAST 0
    0x18,0x38, // STORE_ATTR '_last_received_report'
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0xb0, // LOAD_FAST 0
    0x13,0x38, // LOAD_ATTR '_last_received_report'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_usb_hid_Device_get_last_received_report = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_usb_hid_Device_get_last_received_report,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 81,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 64,
        .line_info = fun_data_usb_hid_Device_get_last_received_report + 6,
        .opcodes = fun_data_usb_hid_Device_get_last_received_report + 16,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of usb_hid_Device
// frozen bytecode for file usb_hid.py, scope usb_hid_Device_get_device_path
static const FLASHMEM byte fun_data_usb_hid_Device_get_device_path[66] = {
    0x42,0x1c, // prelude
    0x3a,0x55,0x57, // names: get_device_path, self, report_id
    0x80,0x5c,0x60,0x20,0x22,0x22,0x1f,0x65,0x20,0x43,0x25, // code info
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x22, // LOAD_CONST_OBJ 34
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xb1, // LOAD_FAST 1
    0x45,0x05, // JUMP_IF_TRUE_OR_POP 5
    0xb0, // LOAD_FAST 0
    0x13,0x16, // LOAD_ATTR 'report_ids'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x2a,0x02, // BUILD_TUPLE 2
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x0a, // LOAD_METHOD 'read_text'
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x00, // CALL_METHOD 256
    0x14,0x44, // LOAD_METHOD 'strip'
    0x36,0x00, // CALL_METHOD 0
    0x14,0x45, // LOAD_METHOD 'split'
    0x10,0x46, // LOAD_CONST_STRING ':'
    0x36,0x01, // CALL_METHOD 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xc2, // STORE_FAST 2
    0x23,0x23, // LOAD_CONST_OBJ 35
    0xb2, // LOAD_FAST 2
    0xf8, // BINARY_OP 33 __mod__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_usb_hid_Device_get_device_path = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_usb_hid_Device_get_device_path,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 66,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 58,
        .line_info = fun_data_usb_hid_Device_get_device_path + 5,
        .opcodes = fun_data_usb_hid_Device_get_device_path + 16,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_usb_hid_Device[] = {
    &raw_code_usb_hid_Device___init__,
    &raw_code_usb_hid_Device_send_report,
    &raw_code_usb_hid_Device_last_received_report,
    &raw_code_usb_hid_Device_get_last_received_report,
    &raw_code_usb_hid_Device_get_device_path,
};

static const FLASHMEM mp_raw_code_t raw_code_usb_hid_Device = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_usb_hid_Device,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 70,
    #endif
    .children = (void *)&children_usb_hid_Device,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_usb_hid_Device + 3,
        .opcodes = fun_data_usb_hid_Device + 19,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of usb_hid__lt_module_gt_
// frozen bytecode for file usb_hid.py, scope usb_hid_disable
static const FLASHMEM byte fun_data_usb_hid_disable[258] = {
    0x4c,0x34, // prelude
    0x1f, // names: disable
    0x90,0xcb,0x80,0x07,0x22,0x1f,0x41,0x23,0x32,0x48,0x32,0x27,0x48,0x32,0x27,0x28,0x32,0x27,0x28,0x32,0x27,0x28,0x22,0x56,0x23, // code info
    0x48,0x19, // SETUP_EXCEPT 25
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x10,0x20, // LOAD_CONST_STRING '%s/UDC'
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x22, // LOAD_CONST_STRING ''
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x4a,0x0a, // POP_EXCEPT_JUMP 10
    0x57, // DUP_TOP
    0x12,0x4f, // LOAD_GLOBAL 'FileNotFoundError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x23, // LOAD_METHOD 'glob'
    0x23,0x09, // LOAD_CONST_OBJ 9
    0x36,0x01, // CALL_METHOD 1
    0x5f, // GET_ITER_STACK
    0x4b,0x09, // FOR_ITER 9
    0xc0, // STORE_FAST 0
    0xb0, // LOAD_FAST 0
    0x14,0x24, // LOAD_METHOD 'unlink'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x35, // JUMP -11
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x25, // LOAD_METHOD 'rglob'
    0x23,0x0a, // LOAD_CONST_OBJ 10
    0x36,0x01, // CALL_METHOD 1
    0x5f, // GET_ITER_STACK
    0x4b,0x10, // FOR_ITER 16
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x14,0x26, // LOAD_METHOD 'is_dir'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb1, // LOAD_FAST 1
    0x14,0x27, // LOAD_METHOD 'rmdir'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x2e, // JUMP -18
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x25, // LOAD_METHOD 'rglob'
    0x23,0x0b, // LOAD_CONST_OBJ 11
    0x36,0x01, // CALL_METHOD 1
    0x5f, // GET_ITER_STACK
    0x4b,0x10, // FOR_ITER 16
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x14,0x26, // LOAD_METHOD 'is_dir'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb1, // LOAD_FAST 1
    0x14,0x27, // LOAD_METHOD 'rmdir'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x2e, // JUMP -18
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x25, // LOAD_METHOD 'rglob'
    0x10,0x28, // LOAD_CONST_STRING 'configs/*'
    0x36,0x01, // CALL_METHOD 1
    0x5f, // GET_ITER_STACK
    0x4b,0x10, // FOR_ITER 16
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x14,0x26, // LOAD_METHOD 'is_dir'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb2, // LOAD_FAST 2
    0x14,0x27, // LOAD_METHOD 'rmdir'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x2e, // JUMP -18
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x25, // LOAD_METHOD 'rglob'
    0x23,0x0c, // LOAD_CONST_OBJ 12
    0x36,0x01, // CALL_METHOD 1
    0x5f, // GET_ITER_STACK
    0x4b,0x10, // FOR_ITER 16
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x14,0x26, // LOAD_METHOD 'is_dir'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb3, // LOAD_FAST 3
    0x14,0x27, // LOAD_METHOD 'rmdir'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x2e, // JUMP -18
    0x48,0x0f, // SETUP_EXCEPT 15
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x27, // LOAD_METHOD 'rmdir'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x4a,0x0a, // POP_EXCEPT_JUMP 10
    0x57, // DUP_TOP
    0x12,0x4f, // LOAD_GLOBAL 'FileNotFoundError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x2b,0x00, // BUILD_LIST 0
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x18,0x11, // STORE_ATTR 'devices'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_usb_hid_disable = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_usb_hid_disable,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 258,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 31,
        .line_info = fun_data_usb_hid_disable + 3,
        .opcodes = fun_data_usb_hid_disable + 28,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of usb_hid__lt_module_gt_
// frozen bytecode for file usb_hid.py, scope usb_hid_enable
static const FLASHMEM byte fun_data_usb_hid_enable[720] = {
    0xae,0x11,0x80,0x02, // prelude
    0x29,0x50,0x10, // names: enable, requested_devices, boot_device
    0x90,0xf1,0x80,0x2a,0x45,0x29,0x25,0x42,0x25,0x27,0x25,0x87,0x25,0x37,0x37,0x2d,0x4c,0x2d,0x4e,0x2d,0x4c,0x2d,0x4c,0x2d,0x4c,0x2d,0x4c,0x2d,0x4e,0x2d,0x8e,0x22,0x26,0x28,0x34,0x34,0x2a,0x4a,0x34,0x38,0x8a,0x17,0x2f,0x2b,0x22,0x5a,0x24,0x2a,0x4c,0x2a,0x50,0x36,0x70,0x80,0x0d,0x22,0x7a,0x20,0x89,0x0e,0x31, // code info
    0xb1, // LOAD_FAST 1
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x18,0x10, // STORE_ATTR 'boot_device'
    0x12,0x51, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x1f, // LOAD_GLOBAL 'disable'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x12, // LOAD_GLOBAL 'Device'
    0x13,0x1c, // LOAD_ATTR 'BOOT_KEYBOARD'
    0x2b,0x01, // BUILD_LIST 1
    0xc0, // STORE_FAST 0
    0xb1, // LOAD_FAST 1
    0x82, // LOAD_CONST_SMALL_INT 2
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x12, // LOAD_GLOBAL 'Device'
    0x13,0x1d, // LOAD_ATTR 'BOOT_MOUSE'
    0x2b,0x01, // BUILD_LIST 1
    0xc0, // STORE_FAST 0
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x0d, // LOAD_CONST_OBJ 13
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x2a, // LOAD_METHOD 'mkdir'
    0x10,0x2b, // LOAD_CONST_STRING 'parents'
    0x52, // LOAD_CONST_TRUE
    0x10,0x2c, // LOAD_CONST_STRING 'exist_ok'
    0x52, // LOAD_CONST_TRUE
    0x36,0x84,0x00, // CALL_METHOD 512
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x10,0x2d, // LOAD_CONST_STRING '%s/configs'
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x2a, // LOAD_METHOD 'mkdir'
    0x10,0x2b, // LOAD_CONST_STRING 'parents'
    0x52, // LOAD_CONST_TRUE
    0x10,0x2c, // LOAD_CONST_STRING 'exist_ok'
    0x52, // LOAD_CONST_TRUE
    0x36,0x84,0x00, // CALL_METHOD 512
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x0e, // LOAD_CONST_OBJ 14
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x2e, // LOAD_CONST_STRING '%s'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf8, // BINARY_OP 33 __mod__
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x10,0x2f, // LOAD_CONST_STRING '%s/bcdUSB'
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x2e, // LOAD_CONST_STRING '%s'
    0x22,0x84,0x00, // LOAD_CONST_SMALL_INT 512
    0xf8, // BINARY_OP 33 __mod__
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x0f, // LOAD_CONST_OBJ 15
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x2e, // LOAD_CONST_STRING '%s'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xf8, // BINARY_OP 33 __mod__
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x10, // LOAD_CONST_OBJ 16
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x2e, // LOAD_CONST_STRING '%s'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xf8, // BINARY_OP 33 __mod__
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x11, // LOAD_CONST_OBJ 17
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x2e, // LOAD_CONST_STRING '%s'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xf8, // BINARY_OP 33 __mod__
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x12, // LOAD_CONST_OBJ 18
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x2e, // LOAD_CONST_STRING '%s'
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf8, // BINARY_OP 33 __mod__
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x13, // LOAD_CONST_OBJ 19
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x2e, // LOAD_CONST_STRING '%s'
    0x22,0x82,0x04, // LOAD_CONST_SMALL_INT 260
    0xf8, // BINARY_OP 33 __mod__
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x14, // LOAD_CONST_OBJ 20
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x2e, // LOAD_CONST_STRING '%s'
    0x22,0xba,0x6b, // LOAD_CONST_SMALL_INT 7531
    0xf8, // BINARY_OP 33 __mod__
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0xb0,0x02, // FOR_ITER 304
    0xc2, // STORE_FAST 2
    0x23,0x15, // LOAD_CONST_OBJ 21
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xf8, // BINARY_OP 33 __mod__
    0xc3, // STORE_FAST 3
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x10,0x30, // LOAD_CONST_STRING '%s/'
    0xb3, // LOAD_FAST 3
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x2a, // LOAD_METHOD 'mkdir'
    0x10,0x2b, // LOAD_CONST_STRING 'parents'
    0x52, // LOAD_CONST_TRUE
    0x10,0x2c, // LOAD_CONST_STRING 'exist_ok'
    0x52, // LOAD_CONST_TRUE
    0x36,0x84,0x00, // CALL_METHOD 512
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x16, // LOAD_CONST_OBJ 22
    0xb3, // LOAD_FAST 3
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x2a, // LOAD_METHOD 'mkdir'
    0x10,0x2b, // LOAD_CONST_STRING 'parents'
    0x52, // LOAD_CONST_TRUE
    0x10,0x2c, // LOAD_CONST_STRING 'exist_ok'
    0x52, // LOAD_CONST_TRUE
    0x36,0x84,0x00, // CALL_METHOD 512
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x17, // LOAD_CONST_OBJ 23
    0xb3, // LOAD_FAST 3
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x23,0x18, // LOAD_CONST_OBJ 24
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x19, // LOAD_CONST_OBJ 25
    0xb3, // LOAD_FAST 3
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x31, // LOAD_CONST_STRING '150'
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x1a, // LOAD_CONST_OBJ 26
    0xb3, // LOAD_FAST 3
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x2e, // LOAD_CONST_STRING '%s'
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0xf8, // BINARY_OP 33 __mod__
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x11, // LOAD_ATTR 'devices'
    0x14,0x32, // LOAD_METHOD 'append'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x52, // LOAD_GLOBAL 'enumerate'
    0xb2, // LOAD_FAST 2
    0x13,0x16, // LOAD_ATTR 'report_ids'
    0x34,0x01, // CALL_FUNCTION 1
    0x5f, // GET_ITER_STACK
    0x4b,0xa7,0x01, // FOR_ITER 167
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc4, // STORE_FAST 4
    0xc5, // STORE_FAST 5
    0x23,0x1b, // LOAD_CONST_OBJ 27
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xb5, // LOAD_FAST 5
    0x2a,0x02, // BUILD_TUPLE 2
    0xf8, // BINARY_OP 33 __mod__
    0xc6, // STORE_FAST 6
    0x48,0x13, // SETUP_EXCEPT 19
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x10,0x30, // LOAD_CONST_STRING '%s/'
    0xb6, // LOAD_FAST 6
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x2a, // LOAD_METHOD 'mkdir'
    0x10,0x2b, // LOAD_CONST_STRING 'parents'
    0x52, // LOAD_CONST_TRUE
    0x36,0x82,0x00, // CALL_METHOD 256
    0x59, // POP_TOP
    0x4a,0x0b, // POP_EXCEPT_JUMP 11
    0x57, // DUP_TOP
    0x12,0x53, // LOAD_GLOBAL 'FileExistsError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x59, // POP_TOP
    0x40,0x10,0x01, // UNWIND_JUMP -48
    0x5d, // END_FINALLY
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x1c, // LOAD_CONST_OBJ 28
    0xb6, // LOAD_FAST 6
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x2e, // LOAD_CONST_STRING '%s'
    0xb5, // LOAD_FAST 5
    0xf8, // BINARY_OP 33 __mod__
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x1d, // LOAD_CONST_OBJ 29
    0xb6, // LOAD_FAST 6
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x2e, // LOAD_CONST_STRING '%s'
    0xb2, // LOAD_FAST 2
    0x13,0x17, // LOAD_ATTR 'in_report_lengths'
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0xf8, // BINARY_OP 33 __mod__
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x1e, // LOAD_CONST_OBJ 30
    0xb6, // LOAD_FAST 6
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x2e, // LOAD_CONST_STRING '%s'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf8, // BINARY_OP 33 __mod__
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x1f, // LOAD_CONST_OBJ 31
    0xb6, // LOAD_FAST 6
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x33, // LOAD_METHOD 'write_bytes'
    0xb2, // LOAD_FAST 2
    0x13,0x13, // LOAD_ATTR 'descriptor'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x48,0x13, // SETUP_EXCEPT 19
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x20, // LOAD_CONST_OBJ 32
    0xb3, // LOAD_FAST 3
    0xb5, // LOAD_FAST 5
    0x2a,0x02, // BUILD_TUPLE 2
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x34, // LOAD_METHOD 'symlink_to'
    0xb6, // LOAD_FAST 6
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0x0a, // POP_EXCEPT_JUMP 10
    0x57, // DUP_TOP
    0x12,0x4f, // LOAD_GLOBAL 'FileNotFoundError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x42,0xd6,0x7e, // JUMP -170
    0x42,0xcd,0x7d, // JUMP -307
    0x12,0x54, // LOAD_GLOBAL 'next'
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x23,0x21, // LOAD_CONST_OBJ 33
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x23, // LOAD_METHOD 'glob'
    0x10,0x35, // LOAD_CONST_STRING '*'
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc7, // STORE_FAST 7
    0x12,0x04, // LOAD_GLOBAL 'Path'
    0x10,0x20, // LOAD_CONST_STRING '%s/UDC'
    0x12,0x4a, // LOAD_GLOBAL 'this'
    0x13,0x0f, // LOAD_ATTR 'gadget_root'
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x21, // LOAD_METHOD 'write_text'
    0x10,0x2e, // LOAD_CONST_STRING '%s'
    0xb7, // LOAD_FAST 7
    0x13,0x36, // LOAD_ATTR 'name'
    0xf8, // BINARY_OP 33 __mod__
    0x10,0x0b, // LOAD_CONST_STRING 'encoding'
    0x10,0x0c, // LOAD_CONST_STRING 'utf-8'
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_usb_hid_enable = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_usb_hid_enable,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 720,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 22,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_usb_hid_enable + 7,
        .opcodes = fun_data_usb_hid_enable + 68,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_usb_hid__lt_module_gt_[] = {
    &raw_code_usb_hid_Device,
    &raw_code_usb_hid_disable,
    &raw_code_usb_hid_enable,
};

static const FLASHMEM mp_raw_code_t raw_code_usb_hid__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_usb_hid__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 398,
    #endif
    .children = (void *)&children_usb_hid__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 3,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_usb_hid__lt_module_gt_ + 3,
        .opcodes = fun_data_usb_hid__lt_module_gt_ + 60,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_usb_hid[90] = {
    MP_QSTR_usb_hid_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_Sequence,
    MP_QSTR_typing,
    MP_QSTR_Path,
    MP_QSTR_pathlib,
    MP_QSTR_os,
    MP_QSTR_atexit,
    MP_QSTR_sys,
    MP_QSTR_dwc2,
    MP_QSTR_read_text,
    MP_QSTR_encoding,
    MP_QSTR_utf_hyphen_8,
    MP_QSTR_find,
    MP_QSTR_modules,
    MP_QSTR_gadget_root,
    MP_QSTR_boot_device,
    MP_QSTR_devices,
    MP_QSTR_Device,
    MP_QSTR_descriptor,
    MP_QSTR_usage_page,
    MP_QSTR_usage,
    MP_QSTR_report_ids,
    MP_QSTR_in_report_lengths,
    MP_QSTR_out_report_lengths,
    MP_QSTR_KEYBOARD,
    MP_QSTR_MOUSE,
    MP_QSTR_CONSUMER_CONTROL,
    MP_QSTR_BOOT_KEYBOARD,
    MP_QSTR_BOOT_MOUSE,
    MP_QSTR_register,
    MP_QSTR_disable,
    MP_QSTR__percent_s_slash_UDC,
    MP_QSTR_write_text,
    MP_QSTR_,
    MP_QSTR_glob,
    MP_QSTR_unlink,
    MP_QSTR_rglob,
    MP_QSTR_is_dir,
    MP_QSTR_rmdir,
    MP_QSTR_configs_slash__star_,
    MP_QSTR_enable,
    MP_QSTR_mkdir,
    MP_QSTR_parents,
    MP_QSTR_exist_ok,
    MP_QSTR__percent_s_slash_configs,
    MP_QSTR__percent_s,
    MP_QSTR__percent_s_slash_bcdUSB,
    MP_QSTR__percent_s_slash_,
    MP_QSTR_150,
    MP_QSTR_append,
    MP_QSTR_write_bytes,
    MP_QSTR_symlink_to,
    MP_QSTR__star_,
    MP_QSTR_name,
    MP_QSTR___init__,
    MP_QSTR__last_received_report,
    MP_QSTR_send_report,
    MP_QSTR_get_device_path,
    MP_QSTR_rb_plus_,
    MP_QSTR_to_bytes,
    MP_QSTR_big,
    MP_QSTR_write,
    MP_QSTR_last_received_report,
    MP_QSTR_get_last_received_report,
    MP_QSTR_set_blocking,
    MP_QSTR_fileno,
    MP_QSTR_read,
    MP_QSTR_strip,
    MP_QSTR_split,
    MP_QSTR__colon_,
    MP_QSTR_module,
    MP_QSTR_Exception,
    MP_QSTR___name__,
    MP_QSTR_this,
    MP_QSTR_bytes,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_property,
    MP_QSTR_FileNotFoundError,
    MP_QSTR_requested_devices,
    MP_QSTR_len,
    MP_QSTR_enumerate,
    MP_QSTR_FileExistsError,
    MP_QSTR_next,
    MP_QSTR_self,
    MP_QSTR_report,
    MP_QSTR_report_id,
    MP_QSTR_open,
    MP_QSTR_bytearray,
};

// constants
static const FLASHMEM mp_obj_str_t const_obj_usb_hid_2 = {{&mp_type_str}, 10926, 56, (const byte*)"\x25\x73\x20\x6d\x6f\x64\x75\x6c\x65\x20\x6e\x6f\x74\x20\x70\x72\x65\x73\x65\x6e\x74\x20\x69\x6e\x20\x79\x6f\x75\x72\x20\x6b\x65\x72\x6e\x65\x6c\x2e\x20\x64\x69\x64\x20\x79\x6f\x75\x20\x69\x6e\x73\x6d\x6f\x64\x20\x69\x74\x3f"};
static const FLASHMEM mp_obj_str_t const_obj_usb_hid_3 = {{&mp_type_str}, 19835, 45, (const byte*)"\x2f\x73\x79\x73\x2f\x6b\x65\x72\x6e\x65\x6c\x2f\x63\x6f\x6e\x66\x69\x67\x2f\x75\x73\x62\x5f\x67\x61\x64\x67\x65\x74\x2f\x61\x64\x61\x66\x72\x75\x69\x74\x2d\x62\x6c\x69\x6e\x6b\x61"};
static const mp_rom_obj_tuple_t FLASHMEM const_obj_usb_hid_4 = {{&mp_type_tuple}, 67, {
    MP_ROM_INT(5),
    MP_ROM_INT(1),
    MP_ROM_INT(9),
    MP_ROM_INT(6),
    MP_ROM_INT(161),
    MP_ROM_INT(1),
    MP_ROM_INT(133),
    MP_ROM_INT(1),
    MP_ROM_INT(5),
    MP_ROM_INT(7),
    MP_ROM_INT(25),
    MP_ROM_INT(224),
    MP_ROM_INT(41),
    MP_ROM_INT(231),
    MP_ROM_INT(21),
    MP_ROM_INT(0),
    MP_ROM_INT(37),
    MP_ROM_INT(1),
    MP_ROM_INT(117),
    MP_ROM_INT(1),
    MP_ROM_INT(149),
    MP_ROM_INT(8),
    MP_ROM_INT(129),
    MP_ROM_INT(2),
    MP_ROM_INT(149),
    MP_ROM_INT(1),
    MP_ROM_INT(117),
    MP_ROM_INT(8),
    MP_ROM_INT(129),
    MP_ROM_INT(1),
    MP_ROM_INT(149),
    MP_ROM_INT(3),
    MP_ROM_INT(117),
    MP_ROM_INT(1),
    MP_ROM_INT(5),
    MP_ROM_INT(8),
    MP_ROM_INT(25),
    MP_ROM_INT(1),
    MP_ROM_INT(41),
    MP_ROM_INT(5),
    MP_ROM_INT(145),
    MP_ROM_INT(2),
    MP_ROM_INT(149),
    MP_ROM_INT(1),
    MP_ROM_INT(117),
    MP_ROM_INT(5),
    MP_ROM_INT(145),
    MP_ROM_INT(1),
    MP_ROM_INT(149),
    MP_ROM_INT(6),
    MP_ROM_INT(117),
    MP_ROM_INT(8),
    MP_ROM_INT(21),
    MP_ROM_INT(0),
    MP_ROM_INT(38),
    MP_ROM_INT(255),
    MP_ROM_INT(0),
    MP_ROM_INT(5),
    MP_ROM_INT(7),
    MP_ROM_INT(25),
    MP_ROM_INT(0),
    MP_ROM_INT(42),
    MP_ROM_INT(255),
    MP_ROM_INT(0),
    MP_ROM_INT(129),
    MP_ROM_INT(0),
    MP_ROM_INT(192),
}};
static const mp_rom_obj_tuple_t FLASHMEM const_obj_usb_hid_5 = {{&mp_type_tuple}, 64, {
    MP_ROM_INT(5),
    MP_ROM_INT(1),
    MP_ROM_INT(9),
    MP_ROM_INT(2),
    MP_ROM_INT(161),
    MP_ROM_INT(1),
    MP_ROM_INT(133),
    MP_ROM_INT(2),
    MP_ROM_INT(9),
    MP_ROM_INT(1),
    MP_ROM_INT(161),
    MP_ROM_INT(0),
    MP_ROM_INT(5),
    MP_ROM_INT(9),
    MP_ROM_INT(25),
    MP_ROM_INT(1),
    MP_ROM_INT(41),
    MP_ROM_INT(5),
    MP_ROM_INT(21),
    MP_ROM_INT(0),
    MP_ROM_INT(37),
    MP_ROM_INT(1),
    MP_ROM_INT(149),
    MP_ROM_INT(5),
    MP_ROM_INT(117),
    MP_ROM_INT(1),
    MP_ROM_INT(129),
    MP_ROM_INT(2),
    MP_ROM_INT(149),
    MP_ROM_INT(1),
    MP_ROM_INT(117),
    MP_ROM_INT(3),
    MP_ROM_INT(129),
    MP_ROM_INT(1),
    MP_ROM_INT(5),
    MP_ROM_INT(1),
    MP_ROM_INT(9),
    MP_ROM_INT(48),
    MP_ROM_INT(9),
    MP_ROM_INT(49),
    MP_ROM_INT(21),
    MP_ROM_INT(129),
    MP_ROM_INT(37),
    MP_ROM_INT(127),
    MP_ROM_INT(117),
    MP_ROM_INT(8),
    MP_ROM_INT(149),
    MP_ROM_INT(2),
    MP_ROM_INT(129),
    MP_ROM_INT(6),
    MP_ROM_INT(9),
    MP_ROM_INT(56),
    MP_ROM_INT(21),
    MP_ROM_INT(129),
    MP_ROM_INT(37),
    MP_ROM_INT(127),
    MP_ROM_INT(117),
    MP_ROM_INT(8),
    MP_ROM_INT(149),
    MP_ROM_INT(1),
    MP_ROM_INT(129),
    MP_ROM_INT(6),
    MP_ROM_INT(192),
    MP_ROM_INT(192),
}};
static const mp_rom_obj_tuple_t FLASHMEM const_obj_usb_hid_6 = {{&mp_type_tuple}, 25, {
    MP_ROM_INT(5),
    MP_ROM_INT(12),
    MP_ROM_INT(9),
    MP_ROM_INT(1),
    MP_ROM_INT(161),
    MP_ROM_INT(1),
    MP_ROM_INT(133),
    MP_ROM_INT(3),
    MP_ROM_INT(117),
    MP_ROM_INT(16),
    MP_ROM_INT(149),
    MP_ROM_INT(1),
    MP_ROM_INT(21),
    MP_ROM_INT(1),
    MP_ROM_INT(38),
    MP_ROM_INT(140),
    MP_ROM_INT(2),
    MP_ROM_INT(25),
    MP_ROM_INT(1),
    MP_ROM_INT(42),
    MP_ROM_INT(140),
    MP_ROM_INT(2),
    MP_ROM_INT(129),
    MP_ROM_INT(0),
    MP_ROM_INT(192),
}};
static const mp_rom_obj_tuple_t FLASHMEM const_obj_usb_hid_7 = {{&mp_type_tuple}, 65, {
    MP_ROM_INT(5),
    MP_ROM_INT(1),
    MP_ROM_INT(9),
    MP_ROM_INT(6),
    MP_ROM_INT(161),
    MP_ROM_INT(1),
    MP_ROM_INT(5),
    MP_ROM_INT(7),
    MP_ROM_INT(25),
    MP_ROM_INT(224),
    MP_ROM_INT(41),
    MP_ROM_INT(231),
    MP_ROM_INT(21),
    MP_ROM_INT(0),
    MP_ROM_INT(37),
    MP_ROM_INT(1),
    MP_ROM_INT(117),
    MP_ROM_INT(1),
    MP_ROM_INT(149),
    MP_ROM_INT(8),
    MP_ROM_INT(129),
    MP_ROM_INT(2),
    MP_ROM_INT(149),
    MP_ROM_INT(1),
    MP_ROM_INT(117),
    MP_ROM_INT(8),
    MP_ROM_INT(129),
    MP_ROM_INT(1),
    MP_ROM_INT(149),
    MP_ROM_INT(3),
    MP_ROM_INT(117),
    MP_ROM_INT(1),
    MP_ROM_INT(5),
    MP_ROM_INT(8),
    MP_ROM_INT(25),
    MP_ROM_INT(1),
    MP_ROM_INT(41),
    MP_ROM_INT(5),
    MP_ROM_INT(145),
    MP_ROM_INT(2),
    MP_ROM_INT(149),
    MP_ROM_INT(1),
    MP_ROM_INT(117),
    MP_ROM_INT(5),
    MP_ROM_INT(145),
    MP_ROM_INT(1),
    MP_ROM_INT(149),
    MP_ROM_INT(6),
    MP_ROM_INT(117),
    MP_ROM_INT(8),
    MP_ROM_INT(21),
    MP_ROM_INT(0),
    MP_ROM_INT(38),
    MP_ROM_INT(255),
    MP_ROM_INT(0),
    MP_ROM_INT(5),
    MP_ROM_INT(7),
    MP_ROM_INT(25),
    MP_ROM_INT(0),
    MP_ROM_INT(42),
    MP_ROM_INT(255),
    MP_ROM_INT(0),
    MP_ROM_INT(129),
    MP_ROM_INT(0),
    MP_ROM_INT(192),
}};
static const mp_rom_obj_tuple_t FLASHMEM const_obj_usb_hid_8 = {{&mp_type_tuple}, 62, {
    MP_ROM_INT(5),
    MP_ROM_INT(1),
    MP_ROM_INT(9),
    MP_ROM_INT(2),
    MP_ROM_INT(161),
    MP_ROM_INT(1),
    MP_ROM_INT(9),
    MP_ROM_INT(1),
    MP_ROM_INT(161),
    MP_ROM_INT(0),
    MP_ROM_INT(5),
    MP_ROM_INT(9),
    MP_ROM_INT(25),
    MP_ROM_INT(1),
    MP_ROM_INT(41),
    MP_ROM_INT(5),
    MP_ROM_INT(21),
    MP_ROM_INT(0),
    MP_ROM_INT(37),
    MP_ROM_INT(1),
    MP_ROM_INT(149),
    MP_ROM_INT(5),
    MP_ROM_INT(117),
    MP_ROM_INT(1),
    MP_ROM_INT(129),
    MP_ROM_INT(2),
    MP_ROM_INT(149),
    MP_ROM_INT(1),
    MP_ROM_INT(117),
    MP_ROM_INT(3),
    MP_ROM_INT(129),
    MP_ROM_INT(1),
    MP_ROM_INT(5),
    MP_ROM_INT(1),
    MP_ROM_INT(9),
    MP_ROM_INT(48),
    MP_ROM_INT(9),
    MP_ROM_INT(49),
    MP_ROM_INT(21),
    MP_ROM_INT(129),
    MP_ROM_INT(37),
    MP_ROM_INT(127),
    MP_ROM_INT(117),
    MP_ROM_INT(8),
    MP_ROM_INT(149),
    MP_ROM_INT(2),
    MP_ROM_INT(129),
    MP_ROM_INT(6),
    MP_ROM_INT(9),
    MP_ROM_INT(56),
    MP_ROM_INT(21),
    MP_ROM_INT(129),
    MP_ROM_INT(37),
    MP_ROM_INT(127),
    MP_ROM_INT(117),
    MP_ROM_INT(8),
    MP_ROM_INT(149),
    MP_ROM_INT(1),
    MP_ROM_INT(129),
    MP_ROM_INT(6),
    MP_ROM_INT(192),
    MP_ROM_INT(192),
}};
static const FLASHMEM mp_obj_str_t const_obj_usb_hid_23 = {{&mp_type_str}, 52095, 30, (const byte*)"\x25\x73\x2f\x73\x74\x72\x69\x6e\x67\x73\x2f\x30\x78\x34\x30\x39\x2f\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e"};
static const FLASHMEM mp_obj_str_t const_obj_usb_hid_34 = {{&mp_type_str}, 5987, 26, (const byte*)"\x25\x73\x2f\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x2f\x68\x69\x64\x2e\x75\x73\x62\x25\x73\x2f\x64\x65\x76"};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_usb_hid[36] = {
    MP_ROM_QSTR(MP_QSTR_libcomposite),
    MP_ROM_QSTR(MP_QSTR__slash_proc_slash_modules),
    MP_ROM_PTR(&const_obj_usb_hid_2),
    MP_ROM_PTR(&const_obj_usb_hid_3),
    MP_ROM_PTR(&const_obj_usb_hid_4),
    MP_ROM_PTR(&const_obj_usb_hid_5),
    MP_ROM_PTR(&const_obj_usb_hid_6),
    MP_ROM_PTR(&const_obj_usb_hid_7),
    MP_ROM_PTR(&const_obj_usb_hid_8),
    MP_ROM_QSTR(MP_QSTR_configs_slash__star__star__slash_hid_dot_usb_star_),
    MP_ROM_QSTR(MP_QSTR_configs_slash__star__slash_strings_slash__star__slash__star_),
    MP_ROM_QSTR(MP_QSTR_configs_slash__star__slash_strings_slash__star_),
    MP_ROM_QSTR(MP_QSTR_functions_slash__star_),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_functions),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_bcdDevice),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_bDeviceClass),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_bDeviceProtocol),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_bDeviceSubClass),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_bMaxPacketSize0),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_idProduct),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_idVendor),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_configs_slash_device_dot_1),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_strings_slash_0x409),
    MP_ROM_PTR(&const_obj_usb_hid_23),
    MP_ROM_QSTR(MP_QSTR_my_space_configuration),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_MaxPower),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_bmAttributes),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_functions_slash_hid_dot_usb_percent_s),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_protocol),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_report_length),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_subclass),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_report_desc),
    MP_ROM_QSTR(MP_QSTR__percent_s_slash_hid_dot_usb_percent_s),
    MP_ROM_QSTR(MP_QSTR__slash_sys_slash_class_slash_udc_slash_),
    MP_ROM_PTR(&const_obj_usb_hid_34),
    MP_ROM_QSTR(MP_QSTR__slash_dev_slash_hidg_percent_s),
};

static const FLASHMEM mp_frozen_module_t frozen_module_usb_hid = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_usb_hid,
        .obj_table = (mp_obj_t *)&const_obj_table_data_usb_hid,
    },
    .rc = &raw_code_usb_hid__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module board
// - original source file: build-SHAREDLIB/frozen_mpy/board.mpy
// - frozen file name: board.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file board.py, scope board__lt_module_gt_
static const FLASHMEM byte fun_data_board__lt_module_gt_[2293] = {
    0x30,0x92,0x06, // prelude
    0x01, // names: <module>
    0x60,0x80,0x0a,0x25,0x25,0x64,0x46,0x2b,0x72,0x40,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x6b,0x28,0x28,0x48,0x4b,0x28,0x4b,0x28,0x4b,0x28,0x4b,0x30,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2a,0x4b,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x4c,0x2b,0x43,0x27,0x28,0x48,0x38,0x23,0x65,0x77,0x40,0x4f,0x56,0x85,0x07,0x1f,0x42, // code info
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x81,0x3f, // STORE_NAME '__version__'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x16,0x81,0x40, // STORE_NAME '__repo__'
    0x52, // LOAD_CONST_TRUE
    0x16,0x81,0x41, // STORE_NAME '__blinka__'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'sys'
    0x16,0x02, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'adafruit_platformdetect.constants.boards'
    0x13,0x04, // LOAD_ATTR 'constants'
    0x13,0x05, // LOAD_ATTR 'boards'
    0x16,0x81,0x42, // STORE_NAME 'ap_board'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x06, // LOAD_CONST_STRING 'board_id'
    0x10,0x07, // LOAD_CONST_STRING 'detector'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x08, // IMPORT_NAME 'adafruit_blinka.agnostic'
    0x1c,0x06, // IMPORT_FROM 'board_id'
    0x16,0x06, // STORE_NAME 'board_id'
    0x1c,0x07, // IMPORT_FROM 'detector'
    0x16,0x07, // STORE_NAME 'detector'
    0x59, // POP_TOP
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x09, // LOAD_ATTR 'FEATHER_HUZZAH'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0b, // IMPORT_NAME 'adafruit_blinka.board.feather_huzzah'
    0x69, // IMPORT_STAR
    0x42,0xa0,0x8f, // JUMP 1952
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x0c, // LOAD_ATTR 'NODEMCU'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0d, // IMPORT_NAME 'adafruit_blinka.board.nodemcu'
    0x69, // IMPORT_STAR
    0x42,0x8b,0x8f, // JUMP 1931
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x0e, // LOAD_ATTR 'PYBOARD'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0f, // IMPORT_NAME 'adafruit_blinka.board.pyboard'
    0x69, // IMPORT_STAR
    0x42,0xf6,0x8e, // JUMP 1910
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x10, // LOAD_ATTR 'RASPBERRY_PI_PICO'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x11, // IMPORT_NAME 'adafruit_blinka.board.raspberrypi.pico'
    0x69, // IMPORT_STAR
    0x42,0xe1,0x8e, // JUMP 1889
    0x11,0x07, // LOAD_NAME 'detector'
    0x13,0x12, // LOAD_ATTR 'board'
    0x13,0x13, // LOAD_ATTR 'RASPBERRY_PI_4B'
    0x43,0x50, // POP_JUMP_IF_TRUE 16
    0x11,0x07, // LOAD_NAME 'detector'
    0x13,0x12, // LOAD_ATTR 'board'
    0x13,0x14, // LOAD_ATTR 'RASPBERRY_PI_CM4'
    0x43,0x48, // POP_JUMP_IF_TRUE 8
    0x11,0x07, // LOAD_NAME 'detector'
    0x13,0x12, // LOAD_ATTR 'board'
    0x13,0x15, // LOAD_ATTR 'RASPBERRY_PI_400'
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x16, // IMPORT_NAME 'adafruit_blinka.board.raspberrypi.raspi_4b'
    0x69, // IMPORT_STAR
    0x42,0xbe,0x8e, // JUMP 1854
    0x11,0x07, // LOAD_NAME 'detector'
    0x13,0x12, // LOAD_ATTR 'board'
    0x13,0x17, // LOAD_ATTR 'any_raspberry_pi_40_pin'
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x18, // IMPORT_NAME 'adafruit_blinka.board.raspberrypi.raspi_40pin'
    0x69, // IMPORT_STAR
    0x42,0xab,0x8e, // JUMP 1835
    0x11,0x07, // LOAD_NAME 'detector'
    0x13,0x12, // LOAD_ATTR 'board'
    0x13,0x19, // LOAD_ATTR 'any_raspberry_pi_cm'
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x1a, // IMPORT_NAME 'adafruit_blinka.board.raspberrypi.raspi_cm'
    0x69, // IMPORT_STAR
    0x42,0x98,0x8e, // JUMP 1816
    0x11,0x07, // LOAD_NAME 'detector'
    0x13,0x12, // LOAD_ATTR 'board'
    0x13,0x1b, // LOAD_ATTR 'RASPBERRY_PI_B_REV1'
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x1c, // IMPORT_NAME 'adafruit_blinka.board.raspberrypi.raspi_1b_rev1'
    0x69, // IMPORT_STAR
    0x42,0x85,0x8e, // JUMP 1797
    0x11,0x07, // LOAD_NAME 'detector'
    0x13,0x12, // LOAD_ATTR 'board'
    0x13,0x1d, // LOAD_ATTR 'RASPBERRY_PI_A'
    0x43,0x48, // POP_JUMP_IF_TRUE 8
    0x11,0x07, // LOAD_NAME 'detector'
    0x13,0x12, // LOAD_ATTR 'board'
    0x13,0x1e, // LOAD_ATTR 'RASPBERRY_PI_B_REV2'
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x1f, // IMPORT_NAME 'adafruit_blinka.board.raspberrypi.raspi_1b_rev2'
    0x69, // IMPORT_STAR
    0x42,0xea,0x8d, // JUMP 1770
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x20, // LOAD_ATTR 'BEAGLEBONE'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x21, // IMPORT_NAME 'adafruit_blinka.board.beagleboard.beaglebone_black'
    0x69, // IMPORT_STAR
    0x42,0xd5,0x8d, // JUMP 1749
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x22, // LOAD_ATTR 'BEAGLEBONE_BLACK'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x21, // IMPORT_NAME 'adafruit_blinka.board.beagleboard.beaglebone_black'
    0x69, // IMPORT_STAR
    0x42,0xc0,0x8d, // JUMP 1728
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x23, // LOAD_ATTR 'BEAGLEBONE_GREEN'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x21, // IMPORT_NAME 'adafruit_blinka.board.beagleboard.beaglebone_black'
    0x69, // IMPORT_STAR
    0x42,0xab,0x8d, // JUMP 1707
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x24, // LOAD_ATTR 'BEAGLEBONE_GREEN_GATEWAY'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x21, // IMPORT_NAME 'adafruit_blinka.board.beagleboard.beaglebone_black'
    0x69, // IMPORT_STAR
    0x42,0x96,0x8d, // JUMP 1686
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x25, // LOAD_ATTR 'BEAGLEBONE_BLACK_INDUSTRIAL'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x21, // IMPORT_NAME 'adafruit_blinka.board.beagleboard.beaglebone_black'
    0x69, // IMPORT_STAR
    0x42,0x81,0x8d, // JUMP 1665
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x26, // LOAD_ATTR 'BEAGLEBONE_GREEN_WIRELESS'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x21, // IMPORT_NAME 'adafruit_blinka.board.beagleboard.beaglebone_black'
    0x69, // IMPORT_STAR
    0x42,0xec,0x8c, // JUMP 1644
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x27, // LOAD_ATTR 'BEAGLEBONE_BLACK_WIRELESS'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x21, // IMPORT_NAME 'adafruit_blinka.board.beagleboard.beaglebone_black'
    0x69, // IMPORT_STAR
    0x42,0xd7,0x8c, // JUMP 1623
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x28, // LOAD_ATTR 'BEAGLEBONE_POCKETBEAGLE'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x29, // IMPORT_NAME 'adafruit_blinka.board.beagleboard.beaglebone_pocketbeagle'
    0x69, // IMPORT_STAR
    0x42,0xc2,0x8c, // JUMP 1602
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x2a, // LOAD_ATTR 'BEAGLEBONE_AI'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x2b, // IMPORT_NAME 'adafruit_blinka.board.beagleboard.beaglebone_ai'
    0x69, // IMPORT_STAR
    0x42,0xad,0x8c, // JUMP 1581
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x2c, // LOAD_ATTR 'BEAGLEV_STARLIGHT'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x2d, // IMPORT_NAME 'adafruit_blinka.board.beagleboard.beaglev_starlight'
    0x69, // IMPORT_STAR
    0x42,0x98,0x8c, // JUMP 1560
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x2e, // LOAD_ATTR 'ORANGE_PI_PC'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x2f, // IMPORT_NAME 'adafruit_blinka.board.orangepi.orangepipc'
    0x69, // IMPORT_STAR
    0x42,0x83,0x8c, // JUMP 1539
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x30, // LOAD_ATTR 'ORANGE_PI_R1'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x31, // IMPORT_NAME 'adafruit_blinka.board.orangepi.orangepir1'
    0x69, // IMPORT_STAR
    0x42,0xee,0x8b, // JUMP 1518
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x32, // LOAD_ATTR 'ORANGE_PI_ZERO'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x33, // IMPORT_NAME 'adafruit_blinka.board.orangepi.orangepizero'
    0x69, // IMPORT_STAR
    0x42,0xd9,0x8b, // JUMP 1497
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x34, // LOAD_ATTR 'ORANGE_PI_ONE'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x2f, // IMPORT_NAME 'adafruit_blinka.board.orangepi.orangepipc'
    0x69, // IMPORT_STAR
    0x42,0xc4,0x8b, // JUMP 1476
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x35, // LOAD_ATTR 'ORANGE_PI_PC_PLUS'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x2f, // IMPORT_NAME 'adafruit_blinka.board.orangepi.orangepipc'
    0x69, // IMPORT_STAR
    0x42,0xaf,0x8b, // JUMP 1455
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x36, // LOAD_ATTR 'ORANGE_PI_LITE'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x2f, // IMPORT_NAME 'adafruit_blinka.board.orangepi.orangepipc'
    0x69, // IMPORT_STAR
    0x42,0x9a,0x8b, // JUMP 1434
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x37, // LOAD_ATTR 'ORANGE_PI_PLUS_2E'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x2f, // IMPORT_NAME 'adafruit_blinka.board.orangepi.orangepipc'
    0x69, // IMPORT_STAR
    0x42,0x85,0x8b, // JUMP 1413
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x38, // LOAD_ATTR 'ORANGE_PI_2'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x2f, // IMPORT_NAME 'adafruit_blinka.board.orangepi.orangepipc'
    0x69, // IMPORT_STAR
    0x42,0xf0,0x8a, // JUMP 1392
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x39, // LOAD_ATTR 'ORANGE_PI_ZERO_PLUS_2H5'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x3a, // IMPORT_NAME 'adafruit_blinka.board.orangepi.orangepizeroplus2h5'
    0x69, // IMPORT_STAR
    0x42,0xdb,0x8a, // JUMP 1371
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x3b, // LOAD_ATTR 'ORANGE_PI_ZERO_PLUS'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x3c, // IMPORT_NAME 'adafruit_blinka.board.orangepi.orangepizeroplus'
    0x69, // IMPORT_STAR
    0x42,0xc6,0x8a, // JUMP 1350
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x3d, // LOAD_ATTR 'ORANGE_PI_ZERO_2'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x3e, // IMPORT_NAME 'adafruit_blinka.board.orangepi.orangepizero2'
    0x69, // IMPORT_STAR
    0x42,0xb1,0x8a, // JUMP 1329
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x3f, // LOAD_ATTR 'ORANGE_PI_3'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x40, // IMPORT_NAME 'adafruit_blinka.board.orangepi.orangepi3'
    0x69, // IMPORT_STAR
    0x42,0x9c,0x8a, // JUMP 1308
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x41, // LOAD_ATTR 'ORANGE_PI_4'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x42, // IMPORT_NAME 'adafruit_blinka.board.orangepi.orangepi4'
    0x69, // IMPORT_STAR
    0x42,0x87,0x8a, // JUMP 1287
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x43, // LOAD_ATTR 'ORANGE_PI_4_LTS'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x42, // IMPORT_NAME 'adafruit_blinka.board.orangepi.orangepi4'
    0x69, // IMPORT_STAR
    0x42,0xf2,0x89, // JUMP 1266
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x44, // LOAD_ATTR 'BANANA_PI_M2_ZERO'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x45, // IMPORT_NAME 'adafruit_blinka.board.bananapi.bpim2zero'
    0x69, // IMPORT_STAR
    0x42,0xdd,0x89, // JUMP 1245
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x46, // LOAD_ATTR 'BANANA_PI_M2_PLUS'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x47, // IMPORT_NAME 'adafruit_blinka.board.bananapi.bpim2plus'
    0x69, // IMPORT_STAR
    0x42,0xc8,0x89, // JUMP 1224
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x48, // LOAD_ATTR 'BANANA_PI_M5'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x49, // IMPORT_NAME 'adafruit_blinka.board.bananapi.bpim5'
    0x69, // IMPORT_STAR
    0x42,0xb3,0x89, // JUMP 1203
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x4a, // LOAD_ATTR 'GIANT_BOARD'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x4b, // IMPORT_NAME 'adafruit_blinka.board.giantboard'
    0x69, // IMPORT_STAR
    0x42,0x9e,0x89, // JUMP 1182
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x4c, // LOAD_ATTR 'JETSON_TX1'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x4d, // IMPORT_NAME 'adafruit_blinka.board.nvidia.jetson_tx1'
    0x69, // IMPORT_STAR
    0x42,0x89,0x89, // JUMP 1161
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x4e, // LOAD_ATTR 'JETSON_TX2'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x4f, // IMPORT_NAME 'adafruit_blinka.board.nvidia.jetson_tx2'
    0x69, // IMPORT_STAR
    0x42,0xf4,0x88, // JUMP 1140
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x50, // LOAD_ATTR 'JETSON_TX2_NX'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x51, // IMPORT_NAME 'adafruit_blinka.board.nvidia.jetson_tx2_nx'
    0x69, // IMPORT_STAR
    0x42,0xdf,0x88, // JUMP 1119
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x52, // LOAD_ATTR 'JETSON_XAVIER'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x53, // IMPORT_NAME 'adafruit_blinka.board.nvidia.jetson_xavier'
    0x69, // IMPORT_STAR
    0x42,0xca,0x88, // JUMP 1098
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x54, // LOAD_ATTR 'JETSON_NANO'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x55, // IMPORT_NAME 'adafruit_blinka.board.nvidia.jetson_nano'
    0x69, // IMPORT_STAR
    0x42,0xb5,0x88, // JUMP 1077
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x56, // LOAD_ATTR 'JETSON_NX'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x57, // IMPORT_NAME 'adafruit_blinka.board.nvidia.jetson_nx'
    0x69, // IMPORT_STAR
    0x42,0xa0,0x88, // JUMP 1056
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x58, // LOAD_ATTR 'JETSON_AGX_ORIN'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x59, // IMPORT_NAME 'adafruit_blinka.board.nvidia.jetson_orin'
    0x69, // IMPORT_STAR
    0x42,0x8b,0x88, // JUMP 1035
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x5a, // LOAD_ATTR 'CLARA_AGX_XAVIER'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x5b, // IMPORT_NAME 'adafruit_blinka.board.nvidia.clara_agx_xavier'
    0x69, // IMPORT_STAR
    0x42,0xf6,0x87, // JUMP 1014
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x5c, // LOAD_ATTR 'CORAL_EDGE_TPU_DEV'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x5d, // IMPORT_NAME 'adafruit_blinka.board.coral_dev_board'
    0x69, // IMPORT_STAR
    0x42,0xe1,0x87, // JUMP 993
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x5e, // LOAD_ATTR 'CORAL_EDGE_TPU_DEV_MINI'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x5f, // IMPORT_NAME 'adafruit_blinka.board.coral_dev_board_mini'
    0x69, // IMPORT_STAR
    0x42,0xcc,0x87, // JUMP 972
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x60, // LOAD_ATTR 'ODROID_C2'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x61, // IMPORT_NAME 'adafruit_blinka.board.hardkernel.odroidc2'
    0x69, // IMPORT_STAR
    0x42,0xb7,0x87, // JUMP 951
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x62, // LOAD_ATTR 'ODROID_C4'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x63, // IMPORT_NAME 'adafruit_blinka.board.hardkernel.odroidc4'
    0x69, // IMPORT_STAR
    0x42,0xa2,0x87, // JUMP 930
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x64, // LOAD_ATTR 'ODROID_N2'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x65, // IMPORT_NAME 'adafruit_blinka.board.hardkernel.odroidn2'
    0x69, // IMPORT_STAR
    0x42,0x8d,0x87, // JUMP 909
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x66, // LOAD_ATTR 'KHADAS_VIM3'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x67, // IMPORT_NAME 'adafruit_blinka.board.khadas.khadasvim3'
    0x69, // IMPORT_STAR
    0x42,0xf8,0x86, // JUMP 888
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x68, // LOAD_ATTR 'ODROID_XU4'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x69, // IMPORT_NAME 'adafruit_blinka.board.hardkernel.odroidxu4'
    0x69, // IMPORT_STAR
    0x42,0xe3,0x86, // JUMP 867
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x6a, // LOAD_ATTR 'DRAGONBOARD_410C'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x6b, // IMPORT_NAME 'adafruit_blinka.board.dragonboard_410c'
    0x69, // IMPORT_STAR
    0x42,0xce,0x86, // JUMP 846
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x6c, // LOAD_ATTR 'FTDI_FT232H'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x6d, // IMPORT_NAME 'adafruit_blinka.board.ftdi_ft232h'
    0x69, // IMPORT_STAR
    0x42,0xb9,0x86, // JUMP 825
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x6e, // LOAD_ATTR 'FTDI_FT2232H'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x6f, // IMPORT_NAME 'adafruit_blinka.board.ftdi_ft2232h'
    0x69, // IMPORT_STAR
    0x42,0xa4,0x86, // JUMP 804
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x70, // LOAD_ATTR 'BINHO_NOVA'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x71, // IMPORT_NAME 'adafruit_blinka.board.binho_nova'
    0x69, // IMPORT_STAR
    0x42,0x8f,0x86, // JUMP 783
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x72, // LOAD_ATTR 'MICROCHIP_MCP2221'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x73, // IMPORT_NAME 'adafruit_blinka.board.microchip_mcp2221'
    0x69, // IMPORT_STAR
    0x42,0xfa,0x85, // JUMP 762
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x74, // LOAD_ATTR 'GREATFET_ONE'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x75, // IMPORT_NAME 'adafruit_blinka.board.greatfet_one'
    0x69, // IMPORT_STAR
    0x42,0xe5,0x85, // JUMP 741
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x76, // LOAD_ATTR 'SIFIVE_UNLEASHED'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x77, // IMPORT_NAME 'adafruit_blinka.board.hifive_unleashed'
    0x69, // IMPORT_STAR
    0x42,0xd0,0x85, // JUMP 720
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x78, // LOAD_ATTR 'PINE64'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x79, // IMPORT_NAME 'adafruit_blinka.board.pine64'
    0x69, // IMPORT_STAR
    0x42,0xbb,0x85, // JUMP 699
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x7a, // LOAD_ATTR 'PINEH64'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x7b, // IMPORT_NAME 'adafruit_blinka.board.pineH64'
    0x69, // IMPORT_STAR
    0x42,0xa6,0x85, // JUMP 678
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x7c, // LOAD_ATTR 'SOPINE'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x7d, // IMPORT_NAME 'adafruit_blinka.board.soPine'
    0x69, // IMPORT_STAR
    0x42,0x91,0x85, // JUMP 657
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x7e, // LOAD_ATTR 'CLOCKWORK_CPI3'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x7f, // IMPORT_NAME 'adafruit_blinka.board.clockworkcpi3'
    0x69, // IMPORT_STAR
    0x42,0xfc,0x84, // JUMP 636
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x00, // LOAD_ATTR 'ONION_OMEGA2'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x01, // IMPORT_NAME 'adafruit_blinka.board.onion.omega2'
    0x69, // IMPORT_STAR
    0x42,0xe5,0x84, // JUMP 613
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x02, // LOAD_ATTR 'RADXA_ZERO'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x03, // IMPORT_NAME 'adafruit_blinka.board.radxa.radxazero'
    0x69, // IMPORT_STAR
    0x42,0xce,0x84, // JUMP 590
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x04, // LOAD_ATTR 'ROCK_PI_S'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x05, // IMPORT_NAME 'adafruit_blinka.board.radxa.rockpis'
    0x69, // IMPORT_STAR
    0x42,0xb7,0x84, // JUMP 567
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x06, // LOAD_ATTR 'ROCK_PI_4'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x07, // IMPORT_NAME 'adafruit_blinka.board.radxa.rockpi4'
    0x69, // IMPORT_STAR
    0x42,0xa0,0x84, // JUMP 544
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x08, // LOAD_ATTR 'ROCK_PI_E'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x09, // IMPORT_NAME 'adafruit_blinka.board.radxa.rockpie'
    0x69, // IMPORT_STAR
    0x42,0x89,0x84, // JUMP 521
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x0a, // LOAD_ATTR 'UDOO_X86'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x0b, // IMPORT_NAME 'adafruit_blinka.board.udoo_x86ultra'
    0x69, // IMPORT_STAR
    0x42,0xf2,0x83, // JUMP 498
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x0c, // LOAD_ATTR 'STM32MP157C_DK2'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x0d, // IMPORT_NAME 'adafruit_blinka.board.stm32.stm32mp157c_dk2'
    0x69, // IMPORT_STAR
    0x42,0xdb,0x83, // JUMP 475
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x0e, // LOAD_ATTR 'OSD32MP1_RED'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x0f, // IMPORT_NAME 'adafruit_blinka.board.stm32.osd32mp1_red'
    0x69, // IMPORT_STAR
    0x42,0xc4,0x83, // JUMP 452
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x10, // LOAD_ATTR 'OSD32MP1_BRK'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x11, // IMPORT_NAME 'adafruit_blinka.board.stm32.osd32mp1_brk'
    0x69, // IMPORT_STAR
    0x42,0xad,0x83, // JUMP 429
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x12, // LOAD_ATTR 'LUBANCAT_IMX6ULL'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x13, // IMPORT_NAME 'adafruit_blinka.board.lubancat.lubancat_imx6ull'
    0x69, // IMPORT_STAR
    0x42,0x96,0x83, // JUMP 406
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x14, // LOAD_ATTR 'LUBANCAT_STM32MP157'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x15, // IMPORT_NAME 'adafruit_blinka.board.lubancat.lubancat_stm32mp157'
    0x69, // IMPORT_STAR
    0x42,0xff,0x82, // JUMP 383
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x16, // LOAD_ATTR 'NANOPI_NEO_AIR'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x17, // IMPORT_NAME 'adafruit_blinka.board.nanopi.neoair'
    0x69, // IMPORT_STAR
    0x42,0xe8,0x82, // JUMP 360
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x18, // LOAD_ATTR 'NANOPI_DUO2'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x19, // IMPORT_NAME 'adafruit_blinka.board.nanopi.duo2'
    0x69, // IMPORT_STAR
    0x42,0xd1,0x82, // JUMP 337
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x1a, // LOAD_ATTR 'NANOPI_NEO'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x1b, // IMPORT_NAME 'adafruit_blinka.board.nanopi.neo'
    0x69, // IMPORT_STAR
    0x42,0xba,0x82, // JUMP 314
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x1c, // LOAD_ATTR 'PICO_U2IF'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x1d, // IMPORT_NAME 'adafruit_blinka.board.pico_u2if'
    0x69, // IMPORT_STAR
    0x42,0xa3,0x82, // JUMP 291
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x1e, // LOAD_ATTR 'FEATHER_U2IF'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x1f, // IMPORT_NAME 'adafruit_blinka.board.feather_u2if'
    0x69, // IMPORT_STAR
    0x42,0x8c,0x82, // JUMP 268
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x20, // LOAD_ATTR 'QTPY_U2IF'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x21, // IMPORT_NAME 'adafruit_blinka.board.qtpy_u2if'
    0x69, // IMPORT_STAR
    0x42,0xf5,0x81, // JUMP 245
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x22, // LOAD_ATTR 'ITSYBITSY_U2IF'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x23, // IMPORT_NAME 'adafruit_blinka.board.itsybitsy_u2if'
    0x69, // IMPORT_STAR
    0x42,0xde,0x81, // JUMP 222
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x24, // LOAD_ATTR 'MACROPAD_U2IF'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x25, // IMPORT_NAME 'adafruit_blinka.board.macropad_u2if'
    0x69, // IMPORT_STAR
    0x42,0xc7,0x81, // JUMP 199
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x26, // LOAD_ATTR 'QT2040_TRINKEY_U2IF'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x27, // IMPORT_NAME 'adafruit_blinka.board.qt2040_trinkey_u2if'
    0x69, // IMPORT_STAR
    0x42,0xb0,0x81, // JUMP 176
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x28, // LOAD_ATTR 'LICHEE_RV'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x29, // IMPORT_NAME 'adafruit_blinka.board.lichee_rv'
    0x69, // IMPORT_STAR
    0x42,0x99,0x81, // JUMP 153
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x2a, // LOAD_ATTR 'SIEMENS_SIMATIC_IOT2050_ADV'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x2b, // IMPORT_NAME 'adafruit_blinka.board.siemens.siemens_iot2050'
    0x69, // IMPORT_STAR
    0x42,0x82,0x81, // JUMP 130
    0x11,0x06, // LOAD_NAME 'board_id'
    0x11,0x81,0x42, // LOAD_NAME 'ap_board'
    0x13,0x81,0x2c, // LOAD_ATTR 'AML_S905X_CC'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0a, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x81,0x2d, // IMPORT_NAME 'adafruit_blinka.board.librecomputer.aml_s905x_cc_v1'
    0x69, // IMPORT_STAR
    0x42,0xeb,0x80, // JUMP 107
    0x10,0x81,0x2e, // LOAD_CONST_STRING 'sphinx'
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x81,0x2f, // LOAD_ATTR 'modules'
    0xdd, // BINARY_OP 6 <in>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x42,0xdd,0x80, // JUMP 93
    0x11,0x06, // LOAD_NAME 'board_id'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0xc7,0x80, // POP_JUMP_IF_FALSE 71
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x81,0x30, // IMPORT_NAME 'platform'
    0x16,0x81,0x30, // STORE_NAME 'platform'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x81,0x31, // IMPORT_NAME 'pkg_resources'
    0x16,0x81,0x31, // STORE_NAME 'pkg_resources'
    0x11,0x81,0x43, // LOAD_NAME 'str'
    0x11,0x81,0x31, // LOAD_NAME 'pkg_resources'
    0x14,0x81,0x32, // LOAD_METHOD 'get_distribution'
    0x10,0x81,0x33, // LOAD_CONST_STRING 'adafruit_platformdetect'
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x81,0x34, // LOAD_METHOD 'split'
    0x36,0x00, // CALL_METHOD 0
    0x16,0x81,0x44, // STORE_NAME 'package'
    0x11,0x81,0x45, // LOAD_NAME 'NotImplementedError'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x14,0x81,0x35, // LOAD_METHOD 'format'
    0x11,0x81,0x30, // LOAD_NAME 'platform'
    0x14,0x81,0x36, // LOAD_METHOD 'system'
    0x36,0x00, // CALL_METHOD 0
    0x11,0x81,0x44, // LOAD_NAME 'package'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x11,0x81,0x44, // LOAD_NAME 'package'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x36,0x03, // CALL_METHOD 3
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x11,0x81,0x45, // LOAD_NAME 'NotImplementedError'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x14,0x81,0x35, // LOAD_METHOD 'format'
    0x11,0x06, // LOAD_NAME 'board_id'
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x10,0x81,0x37, // LOAD_CONST_STRING 'SCL'
    0x11,0x81,0x46, // LOAD_NAME 'locals'
    0x34,0x00, // CALL_FUNCTION 0
    0xdd, // BINARY_OP 6 <in>
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0x10,0x81,0x38, // LOAD_CONST_STRING 'SDA'
    0x11,0x81,0x46, // LOAD_NAME 'locals'
    0x34,0x00, // CALL_FUNCTION 0
    0xdd, // BINARY_OP 6 <in>
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x81,0x3c, // STORE_NAME 'I2C'
    0x10,0x81,0x39, // LOAD_CONST_STRING 'SCLK'
    0x11,0x81,0x46, // LOAD_NAME 'locals'
    0x34,0x00, // CALL_FUNCTION 0
    0xdd, // BINARY_OP 6 <in>
    0x44,0x5b, // POP_JUMP_IF_FALSE 27
    0x10,0x81,0x3a, // LOAD_CONST_STRING 'MOSI'
    0x11,0x81,0x46, // LOAD_NAME 'locals'
    0x34,0x00, // CALL_FUNCTION 0
    0xdd, // BINARY_OP 6 <in>
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0x10,0x81,0x3b, // LOAD_CONST_STRING 'MISO'
    0x11,0x81,0x46, // LOAD_NAME 'locals'
    0x34,0x00, // CALL_FUNCTION 0
    0xdd, // BINARY_OP 6 <in>
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x81,0x3e, // STORE_NAME 'SPI'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of board__lt_module_gt_
// frozen bytecode for file board.py, scope board_I2C
static const FLASHMEM byte fun_data_board_I2C[27] = {
    0x20,0x0c, // prelude
    0x81,0x3c, // names: I2C
    0x90,0x36,0x20,0x46, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x81,0x3d, // IMPORT_NAME 'busio'
    0xc0, // STORE_FAST 0
    0xb0, // LOAD_FAST 0
    0x14,0x81,0x3c, // LOAD_METHOD 'I2C'
    0x12,0x81,0x37, // LOAD_GLOBAL 'SCL'
    0x12,0x81,0x38, // LOAD_GLOBAL 'SDA'
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_board_I2C = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_board_I2C,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 27,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 188,
        .line_info = fun_data_board_I2C + 4,
        .opcodes = fun_data_board_I2C + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of board__lt_module_gt_
// frozen bytecode for file board.py, scope board_SPI
static const FLASHMEM byte fun_data_board_SPI[30] = {
    0x28,0x0c, // prelude
    0x81,0x3e, // names: SPI
    0x90,0x3f,0x20,0x46, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x81,0x3d, // IMPORT_NAME 'busio'
    0xc0, // STORE_FAST 0
    0xb0, // LOAD_FAST 0
    0x14,0x81,0x3e, // LOAD_METHOD 'SPI'
    0x12,0x81,0x39, // LOAD_GLOBAL 'SCLK'
    0x12,0x81,0x3a, // LOAD_GLOBAL 'MOSI'
    0x12,0x81,0x3b, // LOAD_GLOBAL 'MISO'
    0x36,0x03, // CALL_METHOD 3
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_board_SPI = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_board_SPI,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 30,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 190,
        .line_info = fun_data_board_SPI + 4,
        .opcodes = fun_data_board_SPI + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_board__lt_module_gt_[] = {
    &raw_code_board_I2C,
    &raw_code_board_SPI,
};

static const FLASHMEM mp_raw_code_t raw_code_board__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_board__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 2293,
    #endif
    .children = (void *)&children_board__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_board__lt_module_gt_ + 4,
        .opcodes = fun_data_board__lt_module_gt_ + 204,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_board[199] = {
    MP_QSTR_board_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sys,
    MP_QSTR_adafruit_platformdetect_dot_constants_dot_boards,
    MP_QSTR_constants,
    MP_QSTR_boards,
    MP_QSTR_board_id,
    MP_QSTR_detector,
    MP_QSTR_adafruit_blinka_dot_agnostic,
    MP_QSTR_FEATHER_HUZZAH,
    MP_QSTR__star_,
    MP_QSTR_adafruit_blinka_dot_board_dot_feather_huzzah,
    MP_QSTR_NODEMCU,
    MP_QSTR_adafruit_blinka_dot_board_dot_nodemcu,
    MP_QSTR_PYBOARD,
    MP_QSTR_adafruit_blinka_dot_board_dot_pyboard,
    MP_QSTR_RASPBERRY_PI_PICO,
    MP_QSTR_adafruit_blinka_dot_board_dot_raspberrypi_dot_pico,
    MP_QSTR_board,
    MP_QSTR_RASPBERRY_PI_4B,
    MP_QSTR_RASPBERRY_PI_CM4,
    MP_QSTR_RASPBERRY_PI_400,
    MP_QSTR_adafruit_blinka_dot_board_dot_raspberrypi_dot_raspi_4b,
    MP_QSTR_any_raspberry_pi_40_pin,
    MP_QSTR_adafruit_blinka_dot_board_dot_raspberrypi_dot_raspi_40pin,
    MP_QSTR_any_raspberry_pi_cm,
    MP_QSTR_adafruit_blinka_dot_board_dot_raspberrypi_dot_raspi_cm,
    MP_QSTR_RASPBERRY_PI_B_REV1,
    MP_QSTR_adafruit_blinka_dot_board_dot_raspberrypi_dot_raspi_1b_rev1,
    MP_QSTR_RASPBERRY_PI_A,
    MP_QSTR_RASPBERRY_PI_B_REV2,
    MP_QSTR_adafruit_blinka_dot_board_dot_raspberrypi_dot_raspi_1b_rev2,
    MP_QSTR_BEAGLEBONE,
    MP_QSTR_adafruit_blinka_dot_board_dot_beagleboard_dot_beaglebone_black,
    MP_QSTR_BEAGLEBONE_BLACK,
    MP_QSTR_BEAGLEBONE_GREEN,
    MP_QSTR_BEAGLEBONE_GREEN_GATEWAY,
    MP_QSTR_BEAGLEBONE_BLACK_INDUSTRIAL,
    MP_QSTR_BEAGLEBONE_GREEN_WIRELESS,
    MP_QSTR_BEAGLEBONE_BLACK_WIRELESS,
    MP_QSTR_BEAGLEBONE_POCKETBEAGLE,
    MP_QSTR_adafruit_blinka_dot_board_dot_beagleboard_dot_beaglebone_pocketbeagle,
    MP_QSTR_BEAGLEBONE_AI,
    MP_QSTR_adafruit_blinka_dot_board_dot_beagleboard_dot_beaglebone_ai,
    MP_QSTR_BEAGLEV_STARLIGHT,
    MP_QSTR_adafruit_blinka_dot_board_dot_beagleboard_dot_beaglev_starlight,
    MP_QSTR_ORANGE_PI_PC,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepipc,
    MP_QSTR_ORANGE_PI_R1,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepir1,
    MP_QSTR_ORANGE_PI_ZERO,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepizero,
    MP_QSTR_ORANGE_PI_ONE,
    MP_QSTR_ORANGE_PI_PC_PLUS,
    MP_QSTR_ORANGE_PI_LITE,
    MP_QSTR_ORANGE_PI_PLUS_2E,
    MP_QSTR_ORANGE_PI_2,
    MP_QSTR_ORANGE_PI_ZERO_PLUS_2H5,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepizeroplus2h5,
    MP_QSTR_ORANGE_PI_ZERO_PLUS,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepizeroplus,
    MP_QSTR_ORANGE_PI_ZERO_2,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepizero2,
    MP_QSTR_ORANGE_PI_3,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepi3,
    MP_QSTR_ORANGE_PI_4,
    MP_QSTR_adafruit_blinka_dot_board_dot_orangepi_dot_orangepi4,
    MP_QSTR_ORANGE_PI_4_LTS,
    MP_QSTR_BANANA_PI_M2_ZERO,
    MP_QSTR_adafruit_blinka_dot_board_dot_bananapi_dot_bpim2zero,
    MP_QSTR_BANANA_PI_M2_PLUS,
    MP_QSTR_adafruit_blinka_dot_board_dot_bananapi_dot_bpim2plus,
    MP_QSTR_BANANA_PI_M5,
    MP_QSTR_adafruit_blinka_dot_board_dot_bananapi_dot_bpim5,
    MP_QSTR_GIANT_BOARD,
    MP_QSTR_adafruit_blinka_dot_board_dot_giantboard,
    MP_QSTR_JETSON_TX1,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_jetson_tx1,
    MP_QSTR_JETSON_TX2,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_jetson_tx2,
    MP_QSTR_JETSON_TX2_NX,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_jetson_tx2_nx,
    MP_QSTR_JETSON_XAVIER,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_jetson_xavier,
    MP_QSTR_JETSON_NANO,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_jetson_nano,
    MP_QSTR_JETSON_NX,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_jetson_nx,
    MP_QSTR_JETSON_AGX_ORIN,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_jetson_orin,
    MP_QSTR_CLARA_AGX_XAVIER,
    MP_QSTR_adafruit_blinka_dot_board_dot_nvidia_dot_clara_agx_xavier,
    MP_QSTR_CORAL_EDGE_TPU_DEV,
    MP_QSTR_adafruit_blinka_dot_board_dot_coral_dev_board,
    MP_QSTR_CORAL_EDGE_TPU_DEV_MINI,
    MP_QSTR_adafruit_blinka_dot_board_dot_coral_dev_board_mini,
    MP_QSTR_ODROID_C2,
    MP_QSTR_adafruit_blinka_dot_board_dot_hardkernel_dot_odroidc2,
    MP_QSTR_ODROID_C4,
    MP_QSTR_adafruit_blinka_dot_board_dot_hardkernel_dot_odroidc4,
    MP_QSTR_ODROID_N2,
    MP_QSTR_adafruit_blinka_dot_board_dot_hardkernel_dot_odroidn2,
    MP_QSTR_KHADAS_VIM3,
    MP_QSTR_adafruit_blinka_dot_board_dot_khadas_dot_khadasvim3,
    MP_QSTR_ODROID_XU4,
    MP_QSTR_adafruit_blinka_dot_board_dot_hardkernel_dot_odroidxu4,
    MP_QSTR_DRAGONBOARD_410C,
    MP_QSTR_adafruit_blinka_dot_board_dot_dragonboard_410c,
    MP_QSTR_FTDI_FT232H,
    MP_QSTR_adafruit_blinka_dot_board_dot_ftdi_ft232h,
    MP_QSTR_FTDI_FT2232H,
    MP_QSTR_adafruit_blinka_dot_board_dot_ftdi_ft2232h,
    MP_QSTR_BINHO_NOVA,
    MP_QSTR_adafruit_blinka_dot_board_dot_binho_nova,
    MP_QSTR_MICROCHIP_MCP2221,
    MP_QSTR_adafruit_blinka_dot_board_dot_microchip_mcp2221,
    MP_QSTR_GREATFET_ONE,
    MP_QSTR_adafruit_blinka_dot_board_dot_greatfet_one,
    MP_QSTR_SIFIVE_UNLEASHED,
    MP_QSTR_adafruit_blinka_dot_board_dot_hifive_unleashed,
    MP_QSTR_PINE64,
    MP_QSTR_adafruit_blinka_dot_board_dot_pine64,
    MP_QSTR_PINEH64,
    MP_QSTR_adafruit_blinka_dot_board_dot_pineH64,
    MP_QSTR_SOPINE,
    MP_QSTR_adafruit_blinka_dot_board_dot_soPine,
    MP_QSTR_CLOCKWORK_CPI3,
    MP_QSTR_adafruit_blinka_dot_board_dot_clockworkcpi3,
    MP_QSTR_ONION_OMEGA2,
    MP_QSTR_adafruit_blinka_dot_board_dot_onion_dot_omega2,
    MP_QSTR_RADXA_ZERO,
    MP_QSTR_adafruit_blinka_dot_board_dot_radxa_dot_radxazero,
    MP_QSTR_ROCK_PI_S,
    MP_QSTR_adafruit_blinka_dot_board_dot_radxa_dot_rockpis,
    MP_QSTR_ROCK_PI_4,
    MP_QSTR_adafruit_blinka_dot_board_dot_radxa_dot_rockpi4,
    MP_QSTR_ROCK_PI_E,
    MP_QSTR_adafruit_blinka_dot_board_dot_radxa_dot_rockpie,
    MP_QSTR_UDOO_X86,
    MP_QSTR_adafruit_blinka_dot_board_dot_udoo_x86ultra,
    MP_QSTR_STM32MP157C_DK2,
    MP_QSTR_adafruit_blinka_dot_board_dot_stm32_dot_stm32mp157c_dk2,
    MP_QSTR_OSD32MP1_RED,
    MP_QSTR_adafruit_blinka_dot_board_dot_stm32_dot_osd32mp1_red,
    MP_QSTR_OSD32MP1_BRK,
    MP_QSTR_adafruit_blinka_dot_board_dot_stm32_dot_osd32mp1_brk,
    MP_QSTR_LUBANCAT_IMX6ULL,
    MP_QSTR_adafruit_blinka_dot_board_dot_lubancat_dot_lubancat_imx6ull,
    MP_QSTR_LUBANCAT_STM32MP157,
    MP_QSTR_adafruit_blinka_dot_board_dot_lubancat_dot_lubancat_stm32mp157,
    MP_QSTR_NANOPI_NEO_AIR,
    MP_QSTR_adafruit_blinka_dot_board_dot_nanopi_dot_neoair,
    MP_QSTR_NANOPI_DUO2,
    MP_QSTR_adafruit_blinka_dot_board_dot_nanopi_dot_duo2,
    MP_QSTR_NANOPI_NEO,
    MP_QSTR_adafruit_blinka_dot_board_dot_nanopi_dot_neo,
    MP_QSTR_PICO_U2IF,
    MP_QSTR_adafruit_blinka_dot_board_dot_pico_u2if,
    MP_QSTR_FEATHER_U2IF,
    MP_QSTR_adafruit_blinka_dot_board_dot_feather_u2if,
    MP_QSTR_QTPY_U2IF,
    MP_QSTR_adafruit_blinka_dot_board_dot_qtpy_u2if,
    MP_QSTR_ITSYBITSY_U2IF,
    MP_QSTR_adafruit_blinka_dot_board_dot_itsybitsy_u2if,
    MP_QSTR_MACROPAD_U2IF,
    MP_QSTR_adafruit_blinka_dot_board_dot_macropad_u2if,
    MP_QSTR_QT2040_TRINKEY_U2IF,
    MP_QSTR_adafruit_blinka_dot_board_dot_qt2040_trinkey_u2if,
    MP_QSTR_LICHEE_RV,
    MP_QSTR_adafruit_blinka_dot_board_dot_lichee_rv,
    MP_QSTR_SIEMENS_SIMATIC_IOT2050_ADV,
    MP_QSTR_adafruit_blinka_dot_board_dot_siemens_dot_siemens_iot2050,
    MP_QSTR_AML_S905X_CC,
    MP_QSTR_adafruit_blinka_dot_board_dot_librecomputer_dot_aml_s905x_cc_v1,
    MP_QSTR_sphinx,
    MP_QSTR_modules,
    MP_QSTR_platform,
    MP_QSTR_pkg_resources,
    MP_QSTR_get_distribution,
    MP_QSTR_adafruit_platformdetect,
    MP_QSTR_split,
    MP_QSTR_format,
    MP_QSTR_system,
    MP_QSTR_SCL,
    MP_QSTR_SDA,
    MP_QSTR_SCLK,
    MP_QSTR_MOSI,
    MP_QSTR_MISO,
    MP_QSTR_I2C,
    MP_QSTR_busio,
    MP_QSTR_SPI,
    MP_QSTR___version__,
    MP_QSTR___repo__,
    MP_QSTR___blinka__,
    MP_QSTR_ap_board,
    MP_QSTR_str,
    MP_QSTR_package,
    MP_QSTR_NotImplementedError,
    MP_QSTR_locals,
};

// constants
static const FLASHMEM mp_obj_str_t const_obj_board_1 = {{&mp_type_str}, 26870, 47, (const byte*)"\x68\x74\x74\x70\x73\x3a\x2f\x2f\x67\x69\x74\x68\x75\x62\x2e\x63\x6f\x6d\x2f\x61\x64\x61\x66\x72\x75\x69\x74\x2f\x41\x64\x61\x66\x72\x75\x69\x74\x5f\x42\x6c\x69\x6e\x6b\x61\x2e\x67\x69\x74"};
static const FLASHMEM mp_obj_str_t const_obj_board_2 = {{&mp_type_str}, 48949, 215, (const byte*)"\x7b\x31\x7d\x20\x76\x65\x72\x73\x69\x6f\x6e\x20\x7b\x32\x7d\x20\x77\x61\x73\x20\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x69\x64\x65\x6e\x74\x69\x66\x79\x20\x74\x68\x65\x20\x62\x6f\x61\x72\x64\x20\x61\x6e\x64\x2f\x6f\x72\x20\x6d\x69\x63\x72\x6f\x63\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72\x20\x72\x75\x6e\x6e\x69\x6e\x67\x20\x74\x68\x65\x20\x7b\x30\x7d\x20\x70\x6c\x61\x74\x66\x6f\x72\x6d\x2e\x20\x50\x6c\x65\x61\x73\x65\x20\x62\x65\x20\x73\x75\x72\x65\x20\x79\x6f\x75\x20\x68\x61\x76\x65\x20\x74\x68\x65\x20\x6c\x61\x74\x65\x73\x74\x20\x70\x61\x63\x6b\x61\x67\x65\x73\x20\x72\x75\x6e\x6e\x69\x6e\x67\x3a\x20\x27\x70\x69\x70\x33\x20\x69\x6e\x73\x74\x61\x6c\x6c\x20\x2d\x2d\x75\x70\x67\x72\x61\x64\x65\x20\x61\x64\x61\x66\x72\x75\x69\x74\x2d\x62\x6c\x69\x6e\x6b\x61\x20\x61\x64\x61\x66\x72\x75\x69\x74\x2d\x70\x6c\x61\x74\x66\x6f\x72\x6d\x64\x65\x74\x65\x63\x74\x27"};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_board[4] = {
    MP_ROM_QSTR(MP_QSTR_0_dot_0_dot_0_plus_auto_dot_0),
    MP_ROM_PTR(&const_obj_board_1),
    MP_ROM_PTR(&const_obj_board_2),
    MP_ROM_QSTR(MP_QSTR_Board_space_not_space_supported_space__brace_open__brace_close_),
};

static const FLASHMEM mp_frozen_module_t frozen_module_board = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_board,
        .obj_table = (mp_obj_t *)&const_obj_table_data_board,
    },
    .rc = &raw_code_board__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module micropython
// - original source file: build-SHAREDLIB/frozen_mpy/micropython.mpy
// - frozen file name: micropython.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file micropython.py, scope micropython__lt_module_gt_
static const FLASHMEM byte fun_data_micropython__lt_module_gt_[30] = {
    0x00,0x14, // prelude
    0x01, // names: <module>
    0x60,0x80,0x08,0x64,0x40,0x64,0x40,0x64,0x40, // code info
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x02, // STORE_NAME 'const'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x03, // STORE_NAME 'native'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x04, // STORE_NAME 'viper'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x05, // STORE_NAME 'asm_thumb'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of micropython__lt_module_gt_
// frozen bytecode for file micropython.py, scope micropython_const
static const FLASHMEM byte fun_data_micropython_const[9] = {
    0x09,0x0a, // prelude
    0x02,0x06, // names: const, x
    0x80,0x0c,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_micropython_const = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_micropython_const,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 9,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 2,
        .line_info = fun_data_micropython_const + 4,
        .opcodes = fun_data_micropython_const + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of micropython__lt_module_gt_
// frozen bytecode for file micropython.py, scope micropython_native
static const FLASHMEM byte fun_data_micropython_native[9] = {
    0x09,0x0a, // prelude
    0x03,0x07, // names: native, f
    0x80,0x11,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_micropython_native = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_micropython_native,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 9,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 3,
        .line_info = fun_data_micropython_native + 4,
        .opcodes = fun_data_micropython_native + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of micropython__lt_module_gt_
// frozen bytecode for file micropython.py, scope micropython_viper
static const FLASHMEM byte fun_data_micropython_viper[14] = {
    0x11,0x0a, // prelude
    0x04,0x07, // names: viper, f
    0x80,0x16,0x20, // code info
    0x12,0x08, // LOAD_GLOBAL 'SyntaxError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
};
static const FLASHMEM mp_raw_code_t raw_code_micropython_viper = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_micropython_viper,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_micropython_viper + 4,
        .opcodes = fun_data_micropython_viper + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of micropython__lt_module_gt_
// frozen bytecode for file micropython.py, scope micropython_asm_thumb
static const FLASHMEM byte fun_data_micropython_asm_thumb[14] = {
    0x11,0x0a, // prelude
    0x05,0x07, // names: asm_thumb, f
    0x80,0x1b,0x20, // code info
    0x12,0x08, // LOAD_GLOBAL 'SyntaxError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
};
static const FLASHMEM mp_raw_code_t raw_code_micropython_asm_thumb = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_micropython_asm_thumb,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_micropython_asm_thumb + 4,
        .opcodes = fun_data_micropython_asm_thumb + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_micropython__lt_module_gt_[] = {
    &raw_code_micropython_const,
    &raw_code_micropython_native,
    &raw_code_micropython_viper,
    &raw_code_micropython_asm_thumb,
};

static const FLASHMEM mp_raw_code_t raw_code_micropython__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_micropython__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 30,
    #endif
    .children = (void *)&children_micropython__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 4,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_micropython__lt_module_gt_ + 3,
        .opcodes = fun_data_micropython__lt_module_gt_ + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_micropython[9] = {
    MP_QSTR_micropython_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_const,
    MP_QSTR_native,
    MP_QSTR_viper,
    MP_QSTR_asm_thumb,
    MP_QSTR_x,
    MP_QSTR_f,
    MP_QSTR_SyntaxError,
};

// constants
static const FLASHMEM mp_obj_str_t const_obj_micropython_0 = {{&mp_type_str}, 51085, 29, (const byte*)"\x69\x6e\x76\x61\x6c\x69\x64\x20\x6d\x69\x63\x72\x6f\x70\x79\x74\x68\x6f\x6e\x20\x64\x65\x63\x6f\x72\x61\x74\x6f\x72"};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_micropython[1] = {
    MP_ROM_PTR(&const_obj_micropython_0),
};

static const FLASHMEM mp_frozen_module_t frozen_module_micropython = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_micropython,
        .obj_table = (mp_obj_t *)&const_obj_table_data_micropython,
    },
    .rc = &raw_code_micropython__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module neopixel_write
// - original source file: build-SHAREDLIB/frozen_mpy/neopixel_write.mpy
// - frozen file name: neopixel_write.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file neopixel_write.py, scope neopixel_write__lt_module_gt_
static const FLASHMEM byte fun_data_neopixel_write__lt_module_gt_[163] = {
    0x08,0x26, // prelude
    0x01, // names: <module>
    0x60,0x80,0x0a,0x46,0x4c,0x28,0x2f,0x28,0x4f,0x28,0x28,0x28,0x28,0x48,0x2e,0x29,0x42,0x67, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'sys'
    0x16,0x02, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x03, // LOAD_CONST_STRING 'detector'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x04, // IMPORT_NAME 'adafruit_blinka.agnostic'
    0x1c,0x03, // IMPORT_FROM 'detector'
    0x16,0x03, // STORE_NAME 'detector'
    0x59, // POP_TOP
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x06, // LOAD_ATTR 'any_raspberry_pi'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'neopixel'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x08, // IMPORT_NAME 'adafruit_blinka.microcontroller.bcm283x'
    0x1c,0x07, // IMPORT_FROM 'neopixel'
    0x16,0x13, // STORE_NAME '_neopixel'
    0x59, // POP_TOP
    0x42,0xdf,0x80, // JUMP 95
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x09, // LOAD_ATTR 'pico_u2if'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'neopixel'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0a, // IMPORT_NAME 'adafruit_blinka.microcontroller.rp2040_u2if'
    0x1c,0x07, // IMPORT_FROM 'neopixel'
    0x16,0x13, // STORE_NAME '_neopixel'
    0x59, // POP_TOP
    0x42,0xc8,0x80, // JUMP 72
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x0b, // LOAD_ATTR 'feather_u2if'
    0x43,0x60, // POP_JUMP_IF_TRUE 32
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x0c, // LOAD_ATTR 'qtpy_u2if'
    0x43,0x58, // POP_JUMP_IF_TRUE 24
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x0d, // LOAD_ATTR 'itsybitsy_u2if'
    0x43,0x50, // POP_JUMP_IF_TRUE 16
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x0e, // LOAD_ATTR 'macropad_u2if'
    0x43,0x48, // POP_JUMP_IF_TRUE 8
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x0f, // LOAD_ATTR 'qt2040_trinkey_u2if'
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'neopixel'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0a, // IMPORT_NAME 'adafruit_blinka.microcontroller.rp2040_u2if'
    0x1c,0x07, // IMPORT_FROM 'neopixel'
    0x16,0x13, // STORE_NAME '_neopixel'
    0x59, // POP_TOP
    0x42,0x52, // JUMP 18
    0x10,0x10, // LOAD_CONST_STRING 'sphinx'
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x11, // LOAD_ATTR 'modules'
    0xdd, // BINARY_OP 6 <in>
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x47, // JUMP 7
    0x11,0x14, // LOAD_NAME 'NotImplementedError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x12, // STORE_NAME 'neopixel_write'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of neopixel_write__lt_module_gt_
// frozen bytecode for file neopixel_write.py, scope neopixel_write_neopixel_write
static const FLASHMEM byte fun_data_neopixel_write_neopixel_write[17] = {
    0x2a,0x0c, // prelude
    0x12,0x15,0x16, // names: neopixel_write, gpio, buf
    0x80,0x24,0x20, // code info
    0x12,0x13, // LOAD_GLOBAL '_neopixel'
    0x14,0x12, // LOAD_METHOD 'neopixel_write'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_neopixel_write_neopixel_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_neopixel_write_neopixel_write,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 17,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_neopixel_write_neopixel_write + 5,
        .opcodes = fun_data_neopixel_write_neopixel_write + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_neopixel_write__lt_module_gt_[] = {
    &raw_code_neopixel_write_neopixel_write,
};

static const FLASHMEM mp_raw_code_t raw_code_neopixel_write__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_neopixel_write__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 163,
    #endif
    .children = (void *)&children_neopixel_write__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_neopixel_write__lt_module_gt_ + 3,
        .opcodes = fun_data_neopixel_write__lt_module_gt_ + 21,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_neopixel_write[23] = {
    MP_QSTR_neopixel_write_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sys,
    MP_QSTR_detector,
    MP_QSTR_adafruit_blinka_dot_agnostic,
    MP_QSTR_board,
    MP_QSTR_any_raspberry_pi,
    MP_QSTR_neopixel,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_bcm283x,
    MP_QSTR_pico_u2if,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rp2040_u2if,
    MP_QSTR_feather_u2if,
    MP_QSTR_qtpy_u2if,
    MP_QSTR_itsybitsy_u2if,
    MP_QSTR_macropad_u2if,
    MP_QSTR_qt2040_trinkey_u2if,
    MP_QSTR_sphinx,
    MP_QSTR_modules,
    MP_QSTR_neopixel_write,
    MP_QSTR__neopixel,
    MP_QSTR_NotImplementedError,
    MP_QSTR_gpio,
    MP_QSTR_buf,
};

// constants

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_neopixel_write[1] = {
    MP_ROM_QSTR(MP_QSTR_Board_space_not_space_supported),
};

static const FLASHMEM mp_frozen_module_t frozen_module_neopixel_write = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_neopixel_write,
        .obj_table = (mp_obj_t *)&const_obj_table_data_neopixel_write,
    },
    .rc = &raw_code_neopixel_write__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module __version__
// - original source file: build-SHAREDLIB/frozen_mpy/__version__.mpy
// - frozen file name: __version__.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file __version__.py, scope __version____lt_module_gt_
static const FLASHMEM byte fun_data___version____lt_module_gt_[14] = {
    0x08,0x06, // prelude
    0x01, // names: <module>
    0x60,0x40, // code info
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x57, // DUP_TOP
    0x16,0x02, // STORE_NAME '__version__'
    0x16,0x03, // STORE_NAME 'VERSION'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code___version____lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data___version____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data___version____lt_module_gt_ + 3,
        .opcodes = fun_data___version____lt_module_gt_ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data___version__[4] = {
    MP_QSTR___version___dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR___version__,
    MP_QSTR_VERSION,
};

// constants

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data___version__[1] = {
    MP_ROM_QSTR(MP_QSTR_0_dot_0_dot_0_plus_auto_dot_0),
};

static const FLASHMEM mp_frozen_module_t frozen_module___version__ = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data___version__,
        .obj_table = (mp_obj_t *)&const_obj_table_data___version__,
    },
    .rc = &raw_code___version____lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module keypad
// - original source file: build-SHAREDLIB/frozen_mpy/keypad.mpy
// - frozen file name: keypad.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file keypad.py, scope keypad__lt_module_gt_
static const FLASHMEM byte fun_data_keypad__lt_module_gt_[112] = {
    0x18,0x24, // prelude
    0x01, // names: <module>
    0x60,0x80,0x08,0x26,0x26,0x2c,0x66,0x89,0x34,0x89,0x54,0x89,0x27,0x8b,0x4b,0x8b,0x6d, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'time'
    0x16,0x02, // STORE_NAME 'time'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'threading'
    0x16,0x03, // STORE_NAME 'threading'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'deque'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x05, // IMPORT_NAME 'collections'
    0x1c,0x04, // IMPORT_FROM 'deque'
    0x16,0x04, // STORE_NAME 'deque'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x06, // IMPORT_NAME 'digitalio'
    0x16,0x06, // STORE_NAME 'digitalio'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x07, // LOAD_CONST_STRING 'Event'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x07, // STORE_NAME 'Event'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x08, // LOAD_CONST_STRING '_EventQueue'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x08, // STORE_NAME '_EventQueue'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x09, // LOAD_CONST_STRING '_KeysBase'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x09, // STORE_NAME '_KeysBase'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x03, // MAKE_FUNCTION 3
    0x10,0x0a, // LOAD_CONST_STRING 'Keys'
    0x11,0x09, // LOAD_NAME '_KeysBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0a, // STORE_NAME 'Keys'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x04, // MAKE_FUNCTION 4
    0x10,0x0b, // LOAD_CONST_STRING 'KeyMatrix'
    0x11,0x09, // LOAD_NAME '_KeysBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0b, // STORE_NAME 'KeyMatrix'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x05, // MAKE_FUNCTION 5
    0x10,0x0c, // LOAD_CONST_STRING 'ShiftRegisterKeys'
    0x11,0x09, // LOAD_NAME '_KeysBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0c, // STORE_NAME 'ShiftRegisterKeys'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of keypad__lt_module_gt_
// frozen bytecode for file keypad.py, scope keypad_Event
static const FLASHMEM byte fun_data_keypad_Event[73] = {
    0x08,0x20, // prelude
    0x07, // names: Event
    0x88,0x12,0x40,0x89,0x0a,0x68,0x40,0x88,0x08,0x88,0x08,0x84,0x07,0x64,0x20, // code info
    0x11,0x54, // LOAD_NAME '__name__'
    0x16,0x55, // STORE_NAME '__module__'
    0x10,0x07, // LOAD_CONST_STRING 'Event'
    0x16,0x56, // STORE_NAME '__qualname__'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x52, // LOAD_CONST_TRUE
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x11, // STORE_NAME '__init__'
    0x11,0x57, // LOAD_NAME 'property'
    0x32,0x01, // MAKE_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x14, // STORE_NAME 'key_number'
    0x11,0x57, // LOAD_NAME 'property'
    0x32,0x02, // MAKE_FUNCTION 2
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x15, // STORE_NAME 'pressed'
    0x11,0x57, // LOAD_NAME 'property'
    0x32,0x03, // MAKE_FUNCTION 3
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x16, // STORE_NAME 'released'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x17, // STORE_NAME '__eq__'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x18, // STORE_NAME '__hash__'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x19, // STORE_NAME '__repr__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of keypad_Event
// frozen bytecode for file keypad.py, scope keypad_Event___init__
static const FLASHMEM byte fun_data_keypad_Event___init__[23] = {
    0xa3,0x80,0x01,0x12, // prelude
    0x11,0x58,0x14,0x15, // names: __init__, self, key_number, pressed
    0x80,0x15,0x60,0x60,0x24, // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x12, // STORE_ATTR '_key_number'
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x18,0x13, // STORE_ATTR '_pressed'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_Event___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_keypad_Event___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 23,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_keypad_Event___init__ + 8,
        .opcodes = fun_data_keypad_Event___init__ + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_Event
// frozen bytecode for file keypad.py, scope keypad_Event_key_number
static const FLASHMEM byte fun_data_keypad_Event_key_number[11] = {
    0x09,0x0a, // prelude
    0x14,0x58, // names: key_number, self
    0x80,0x20,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x12, // LOAD_ATTR '_key_number'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_Event_key_number = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_Event_key_number,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 11,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_keypad_Event_key_number + 4,
        .opcodes = fun_data_keypad_Event_key_number + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_Event
// frozen bytecode for file keypad.py, scope keypad_Event_pressed
static const FLASHMEM byte fun_data_keypad_Event_pressed[12] = {
    0x09,0x0c, // prelude
    0x15,0x58, // names: pressed, self
    0x80,0x25,0x60,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x13, // LOAD_ATTR '_pressed'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_Event_pressed = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_Event_pressed,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 12,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 21,
        .line_info = fun_data_keypad_Event_pressed + 4,
        .opcodes = fun_data_keypad_Event_pressed + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_Event
// frozen bytecode for file keypad.py, scope keypad_Event_released
static const FLASHMEM byte fun_data_keypad_Event_released[13] = {
    0x09,0x0c, // prelude
    0x16,0x58, // names: released, self
    0x80,0x2d,0x60,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x13, // LOAD_ATTR '_pressed'
    0xd3, // UNARY_OP 3 <not>
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_Event_released = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_Event_released,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 13,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_keypad_Event_released + 4,
        .opcodes = fun_data_keypad_Event_released + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_Event
// frozen bytecode for file keypad.py, scope keypad_Event___eq__
static const FLASHMEM byte fun_data_keypad_Event___eq__[26] = {
    0x1a,0x0e, // prelude
    0x17,0x58,0x59, // names: __eq__, self, other
    0x80,0x34,0x60,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x14, // LOAD_ATTR 'key_number'
    0xb1, // LOAD_FAST 1
    0x13,0x14, // LOAD_ATTR 'key_number'
    0xd9, // BINARY_OP 2 __eq__
    0x46,0x07, // JUMP_IF_FALSE_OR_POP 7
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'pressed'
    0xb1, // LOAD_FAST 1
    0x13,0x15, // LOAD_ATTR 'pressed'
    0xd9, // BINARY_OP 2 __eq__
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_Event___eq__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_keypad_Event___eq__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 26,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 23,
        .line_info = fun_data_keypad_Event___eq__ + 5,
        .opcodes = fun_data_keypad_Event___eq__ + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_Event
// frozen bytecode for file keypad.py, scope keypad_Event___hash__
static const FLASHMEM byte fun_data_keypad_Event___hash__[15] = {
    0x11,0x0a, // prelude
    0x18,0x58, // names: __hash__, self
    0x80,0x3b,0x20, // code info
    0x12,0x5a, // LOAD_GLOBAL 'hash'
    0xb0, // LOAD_FAST 0
    0x13,0x12, // LOAD_ATTR '_key_number'
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_Event___hash__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_Event___hash__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 24,
        .line_info = fun_data_keypad_Event___hash__ + 4,
        .opcodes = fun_data_keypad_Event___hash__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_Event
// frozen bytecode for file keypad.py, scope keypad_Event___repr__
static const FLASHMEM byte fun_data_keypad_Event___repr__[29] = {
    0x21,0x0c, // prelude
    0x19,0x58, // names: __repr__, self
    0x80,0x3f,0x20,0x24, // code info
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x14,0x1a, // LOAD_METHOD 'format'
    0xb0, // LOAD_FAST 0
    0x13,0x14, // LOAD_ATTR 'key_number'
    0xb0, // LOAD_FAST 0
    0x13,0x13, // LOAD_ATTR '_pressed'
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x10,0x15, // LOAD_CONST_STRING 'pressed'
    0x42,0x42, // JUMP 2
    0x10,0x16, // LOAD_CONST_STRING 'released'
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_Event___repr__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_Event___repr__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 29,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 25,
        .line_info = fun_data_keypad_Event___repr__ + 4,
        .opcodes = fun_data_keypad_Event___repr__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_keypad_Event[] = {
    &raw_code_keypad_Event___init__,
    &raw_code_keypad_Event_key_number,
    &raw_code_keypad_Event_pressed,
    &raw_code_keypad_Event_released,
    &raw_code_keypad_Event___eq__,
    &raw_code_keypad_Event___hash__,
    &raw_code_keypad_Event___repr__,
};

static const FLASHMEM mp_raw_code_t raw_code_keypad_Event = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_keypad_Event,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 73,
    #endif
    .children = (void *)&children_keypad_Event,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 7,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_keypad_Event + 3,
        .opcodes = fun_data_keypad_Event + 18,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__lt_module_gt_
// frozen bytecode for file keypad.py, scope keypad__EventQueue
static const FLASHMEM byte fun_data_keypad__EventQueue[67] = {
    0x08,0x26, // prelude
    0x08, // names: _EventQueue
    0x88,0x46,0x80,0x07,0x64,0x20,0x84,0x10,0x84,0x17,0x84,0x07,0x64,0x60,0x64,0x20,0x88,0x08, // code info
    0x11,0x54, // LOAD_NAME '__name__'
    0x16,0x55, // STORE_NAME '__module__'
    0x10,0x08, // LOAD_CONST_STRING '_EventQueue'
    0x16,0x56, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x11, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x1d, // STORE_NAME 'get'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x1f, // STORE_NAME 'get_into'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x20, // STORE_NAME 'clear'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x21, // STORE_NAME '__bool__'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x22, // STORE_NAME '__len__'
    0x11,0x57, // LOAD_NAME 'property'
    0x32,0x06, // MAKE_FUNCTION 6
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x23, // STORE_NAME 'overflowed'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x24, // STORE_NAME 'keypad_eventqueue_record'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of keypad__EventQueue
// frozen bytecode for file keypad.py, scope keypad__EventQueue___init__
static const FLASHMEM byte fun_data_keypad__EventQueue___init__[24] = {
    0x22,0x0c, // prelude
    0x11,0x58,0x0f, // names: __init__, self, max_events
    0x80,0x4e,0x2a, // code info
    0x12,0x04, // LOAD_GLOBAL 'deque'
    0x2b,0x00, // BUILD_LIST 0
    0xb1, // LOAD_FAST 1
    0x34,0x02, // CALL_FUNCTION 2
    0xb0, // LOAD_FAST 0
    0x18,0x1b, // STORE_ATTR '_events'
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x1c, // STORE_ATTR '_overflowed'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad__EventQueue___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_keypad__EventQueue___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_keypad__EventQueue___init__ + 5,
        .opcodes = fun_data_keypad__EventQueue___init__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__EventQueue
// frozen bytecode for file keypad.py, scope keypad__EventQueue_get
static const FLASHMEM byte fun_data_keypad__EventQueue_get[25] = {
    0x11,0x10, // prelude
    0x1d,0x58, // names: get, self
    0x80,0x52,0x80,0x0b,0x25,0x22, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x14,0x1e, // LOAD_METHOD 'popleft'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad__EventQueue_get = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad__EventQueue_get,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 29,
        .line_info = fun_data_keypad__EventQueue_get + 4,
        .opcodes = fun_data_keypad__EventQueue_get + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__EventQueue
// frozen bytecode for file keypad.py, scope keypad__EventQueue_get_into
static const FLASHMEM byte fun_data_keypad__EventQueue_get_into[43] = {
    0x22,0x18, // prelude
    0x1f,0x58,0x5b, // names: get_into, self, event
    0x80,0x62,0x80,0x0d,0x25,0x22,0x48,0x26,0x46, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x50, // LOAD_CONST_FALSE
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x14,0x1e, // LOAD_METHOD 'popleft'
    0x36,0x00, // CALL_METHOD 0
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x13,0x12, // LOAD_ATTR '_key_number'
    0xb1, // LOAD_FAST 1
    0x18,0x12, // STORE_ATTR '_key_number'
    0xb2, // LOAD_FAST 2
    0x13,0x13, // LOAD_ATTR '_pressed'
    0xb1, // LOAD_FAST 1
    0x18,0x13, // STORE_ATTR '_pressed'
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad__EventQueue_get_into = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_keypad__EventQueue_get_into,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 43,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 31,
        .line_info = fun_data_keypad__EventQueue_get_into + 5,
        .opcodes = fun_data_keypad__EventQueue_get_into + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__EventQueue
// frozen bytecode for file keypad.py, scope keypad__EventQueue_clear
static const FLASHMEM byte fun_data_keypad__EventQueue_clear[22] = {
    0x11,0x0c, // prelude
    0x20,0x58, // names: clear, self
    0x80,0x79,0x60,0x28, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x14,0x20, // LOAD_METHOD 'clear'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x1c, // STORE_ATTR '_overflowed'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad__EventQueue_clear = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad__EventQueue_clear,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 22,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 32,
        .line_info = fun_data_keypad__EventQueue_clear + 4,
        .opcodes = fun_data_keypad__EventQueue_clear + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__EventQueue
// frozen bytecode for file keypad.py, scope keypad__EventQueue___bool__
static const FLASHMEM byte fun_data_keypad__EventQueue___bool__[17] = {
    0x11,0x0a, // prelude
    0x21,0x58, // names: __bool__, self
    0x80,0x80,0x60, // code info
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad__EventQueue___bool__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad__EventQueue___bool__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 17,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 33,
        .line_info = fun_data_keypad__EventQueue___bool__ + 4,
        .opcodes = fun_data_keypad__EventQueue___bool__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__EventQueue
// frozen bytecode for file keypad.py, scope keypad__EventQueue___len__
static const FLASHMEM byte fun_data_keypad__EventQueue___len__[15] = {
    0x11,0x0a, // prelude
    0x22,0x58, // names: __len__, self
    0x80,0x86,0x20, // code info
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad__EventQueue___len__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad__EventQueue___len__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 34,
        .line_info = fun_data_keypad__EventQueue___len__ + 4,
        .opcodes = fun_data_keypad__EventQueue___len__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__EventQueue
// frozen bytecode for file keypad.py, scope keypad__EventQueue_overflowed
static const FLASHMEM byte fun_data_keypad__EventQueue_overflowed[12] = {
    0x09,0x0c, // prelude
    0x23,0x58, // names: overflowed, self
    0x80,0x8b,0x60,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1c, // LOAD_ATTR '_overflowed'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad__EventQueue_overflowed = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad__EventQueue_overflowed,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 12,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 35,
        .line_info = fun_data_keypad__EventQueue_overflowed + 4,
        .opcodes = fun_data_keypad__EventQueue_overflowed + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__EventQueue
// frozen bytecode for file keypad.py, scope keypad__EventQueue_keypad_eventqueue_record
static const FLASHMEM byte fun_data_keypad__EventQueue_keypad_eventqueue_record[48] = {
    0x3b,0x12, // prelude
    0x24,0x58,0x14,0x5d, // names: keypad_eventqueue_record, self, key_number, current
    0x80,0x92,0x20,0x2f,0x46, // code info
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x13,0x25, // LOAD_ATTR 'maxlen'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x52, // LOAD_CONST_TRUE
    0xb0, // LOAD_FAST 0
    0x18,0x1c, // STORE_ATTR '_overflowed'
    0x42,0x4e, // JUMP 14
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x14,0x26, // LOAD_METHOD 'append'
    0x12,0x07, // LOAD_GLOBAL 'Event'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x34,0x02, // CALL_FUNCTION 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad__EventQueue_keypad_eventqueue_record = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_keypad__EventQueue_keypad_eventqueue_record,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 48,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 36,
        .line_info = fun_data_keypad__EventQueue_keypad_eventqueue_record + 6,
        .opcodes = fun_data_keypad__EventQueue_keypad_eventqueue_record + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_keypad__EventQueue[] = {
    &raw_code_keypad__EventQueue___init__,
    &raw_code_keypad__EventQueue_get,
    &raw_code_keypad__EventQueue_get_into,
    &raw_code_keypad__EventQueue_clear,
    &raw_code_keypad__EventQueue___bool__,
    &raw_code_keypad__EventQueue___len__,
    &raw_code_keypad__EventQueue_overflowed,
    &raw_code_keypad__EventQueue_keypad_eventqueue_record,
};

static const FLASHMEM mp_raw_code_t raw_code_keypad__EventQueue = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_keypad__EventQueue,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 67,
    #endif
    .children = (void *)&children_keypad__EventQueue,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 8,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_keypad__EventQueue + 3,
        .opcodes = fun_data_keypad__EventQueue + 21,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__lt_module_gt_
// frozen bytecode for file keypad.py, scope keypad__KeysBase
static const FLASHMEM byte fun_data_keypad__KeysBase[53] = {
    0x08,0x1a, // prelude
    0x09, // names: _KeysBase
    0x88,0x9a,0x84,0x08,0x68,0x40,0x64,0x40,0x64,0x20,0x84,0x07, // code info
    0x11,0x54, // LOAD_NAME '__name__'
    0x16,0x55, // STORE_NAME '__module__'
    0x10,0x09, // LOAD_CONST_STRING '_KeysBase'
    0x16,0x56, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x11, // STORE_NAME '__init__'
    0x11,0x57, // LOAD_NAME 'property'
    0x32,0x01, // MAKE_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x31, // STORE_NAME 'events'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x32, // STORE_NAME 'deinit'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x35, // STORE_NAME '__enter__'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x36, // STORE_NAME '__exit__'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x2d, // STORE_NAME '_scanning_loop'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of keypad__KeysBase
// frozen bytecode for file keypad.py, scope keypad__KeysBase___init__
static const FLASHMEM byte fun_data_keypad__KeysBase___init__[68] = {
    0xc8,0x04,0x18, // prelude
    0x11,0x58,0x0e,0x0f,0x5e, // names: __init__, self, interval, max_events, scanning_function
    0x80,0x9b,0x24,0x29,0x28,0x24,0x32, // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x27, // STORE_ATTR '_interval'
    0x12,0x02, // LOAD_GLOBAL 'time'
    0x14,0x28, // LOAD_METHOD 'monotonic'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x29, // STORE_ATTR '_last_scan'
    0x12,0x08, // LOAD_GLOBAL '_EventQueue'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x1b, // STORE_ATTR '_events'
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x18,0x2a, // STORE_ATTR '_scanning_function'
    0x12,0x03, // LOAD_GLOBAL 'threading'
    0x14,0x2b, // LOAD_METHOD 'Thread'
    0x10,0x2c, // LOAD_CONST_STRING 'target'
    0xb0, // LOAD_FAST 0
    0x13,0x2d, // LOAD_ATTR '_scanning_loop'
    0x10,0x2e, // LOAD_CONST_STRING 'daemon'
    0x52, // LOAD_CONST_TRUE
    0x36,0x84,0x00, // CALL_METHOD 512
    0xb0, // LOAD_FAST 0
    0x18,0x2f, // STORE_ATTR '_scan_thread'
    0xb0, // LOAD_FAST 0
    0x13,0x2f, // LOAD_ATTR '_scan_thread'
    0x14,0x30, // LOAD_METHOD 'start'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad__KeysBase___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 4,
    .fun_data = fun_data_keypad__KeysBase___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 68,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_keypad__KeysBase___init__ + 8,
        .opcodes = fun_data_keypad__KeysBase___init__ + 15,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__KeysBase
// frozen bytecode for file keypad.py, scope keypad__KeysBase_events
static const FLASHMEM byte fun_data_keypad__KeysBase_events[11] = {
    0x09,0x0a, // prelude
    0x31,0x58, // names: events, self
    0x80,0xa4,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad__KeysBase_events = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad__KeysBase_events,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 11,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 49,
        .line_info = fun_data_keypad__KeysBase_events + 4,
        .opcodes = fun_data_keypad__KeysBase_events + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__KeysBase
// frozen bytecode for file keypad.py, scope keypad__KeysBase_deinit
static const FLASHMEM byte fun_data_keypad__KeysBase_deinit[27] = {
    0x11,0x0c, // prelude
    0x32,0x58, // names: deinit, self
    0x80,0xa8,0x20,0x29, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x2f, // LOAD_ATTR '_scan_thread'
    0x14,0x33, // LOAD_METHOD 'is_alive'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb0, // LOAD_FAST 0
    0x13,0x2f, // LOAD_ATTR '_scan_thread'
    0x14,0x34, // LOAD_METHOD 'join'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad__KeysBase_deinit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad__KeysBase_deinit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 27,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 50,
        .line_info = fun_data_keypad__KeysBase_deinit + 4,
        .opcodes = fun_data_keypad__KeysBase_deinit + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__KeysBase
// frozen bytecode for file keypad.py, scope keypad__KeysBase___enter__
static const FLASHMEM byte fun_data_keypad__KeysBase___enter__[9] = {
    0x09,0x0a, // prelude
    0x35,0x58, // names: __enter__, self
    0x80,0xad,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad__KeysBase___enter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad__KeysBase___enter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 9,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 53,
        .line_info = fun_data_keypad__KeysBase___enter__ + 4,
        .opcodes = fun_data_keypad__KeysBase___enter__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__KeysBase
// frozen bytecode for file keypad.py, scope keypad__KeysBase___exit__
static const FLASHMEM byte fun_data_keypad__KeysBase___exit__[20] = {
    0xa8,0x04,0x12, // prelude
    0x36,0x58,0x5f,0x60,0x61, // names: __exit__, self, exception_type, exception_value, traceback
    0x80,0xb1,0x60,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x32, // LOAD_METHOD 'deinit'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad__KeysBase___exit__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 4,
    .fun_data = fun_data_keypad__KeysBase___exit__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 20,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 54,
        .line_info = fun_data_keypad__KeysBase___exit__ + 8,
        .opcodes = fun_data_keypad__KeysBase___exit__ + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__KeysBase
// frozen bytecode for file keypad.py, scope keypad__KeysBase__scanning_loop
static const FLASHMEM byte fun_data_keypad__KeysBase__scanning_loop[58] = {
    0x21,0x12, // prelude
    0x2d,0x58, // names: _scanning_loop, self
    0x80,0xb8,0x20,0x2f,0x25,0x28,0x29, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x27, // LOAD_ATTR '_interval'
    0x12,0x02, // LOAD_GLOBAL 'time'
    0x14,0x28, // LOAD_METHOD 'monotonic'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x13,0x29, // LOAD_ATTR '_last_scan'
    0xf3, // BINARY_OP 28 __sub__
    0xf3, // BINARY_OP 28 __sub__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x12,0x02, // LOAD_GLOBAL 'time'
    0x14,0x37, // LOAD_METHOD 'sleep'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x02, // LOAD_GLOBAL 'time'
    0x14,0x28, // LOAD_METHOD 'monotonic'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x29, // STORE_ATTR '_last_scan'
    0xb0, // LOAD_FAST 0
    0x14,0x2a, // LOAD_METHOD '_scanning_function'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x13, // JUMP -45
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad__KeysBase__scanning_loop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad__KeysBase__scanning_loop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 58,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 45,
        .line_info = fun_data_keypad__KeysBase__scanning_loop + 4,
        .opcodes = fun_data_keypad__KeysBase__scanning_loop + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_keypad__KeysBase[] = {
    &raw_code_keypad__KeysBase___init__,
    &raw_code_keypad__KeysBase_events,
    &raw_code_keypad__KeysBase_deinit,
    &raw_code_keypad__KeysBase___enter__,
    &raw_code_keypad__KeysBase___exit__,
    &raw_code_keypad__KeysBase__scanning_loop,
};

static const FLASHMEM mp_raw_code_t raw_code_keypad__KeysBase = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_keypad__KeysBase,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 53,
    #endif
    .children = (void *)&children_keypad__KeysBase,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 9,
        .line_info = fun_data_keypad__KeysBase + 3,
        .opcodes = fun_data_keypad__KeysBase + 15,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__lt_module_gt_
// frozen bytecode for file keypad.py, scope keypad_Keys
static const FLASHMEM byte fun_data_keypad_Keys[73] = {
    0x20,0x1d, // prelude
    0x0a, // names: Keys
    0x88,0xc1,0x40,0x27,0x71,0x80,0x29,0x66,0x60,0x84,0x07,0x68,0x40,0x00, // code info
    0x11,0x54, // LOAD_NAME '__name__'
    0x16,0x55, // STORE_NAME '__module__'
    0x10,0x0a, // LOAD_CONST_STRING 'Keys'
    0x16,0x56, // STORE_NAME '__qualname__'
    0x53, // LOAD_NULL
    0x2c,0x00, // BUILD_MAP 0
    0x52, // LOAD_CONST_TRUE
    0x10,0x0d, // LOAD_CONST_STRING 'pull'
    0x62, // STORE_MAP
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x10,0x0e, // LOAD_CONST_STRING 'interval'
    0x62, // STORE_MAP
    0x22,0x80,0x40, // LOAD_CONST_SMALL_INT 64
    0x10,0x0f, // LOAD_CONST_STRING 'max_events'
    0x62, // STORE_MAP
    0xb0, // LOAD_FAST 0
    0x21,0x00,0x01, // MAKE_CLOSURE_DEFARGS 0
    0x16,0x11, // STORE_NAME '__init__'
    0xb0, // LOAD_FAST 0
    0x20,0x01,0x01, // MAKE_CLOSURE 1
    0x16,0x32, // STORE_NAME 'deinit'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x41, // STORE_NAME 'reset'
    0x11,0x57, // LOAD_NAME 'property'
    0x32,0x03, // MAKE_FUNCTION 3
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x42, // STORE_NAME 'key_count'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x40, // STORE_NAME '_keypad_keys_scan'
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
// child of keypad_Keys
// frozen bytecode for file keypad.py, scope keypad_Keys___init__
static const FLASHMEM byte fun_data_keypad_Keys___init__[125] = {
    0xfb,0x80,0x80,0x88,0x40,0x2c, // prelude
    0x11,0x62,0x58,0x63,0x64,0x0d,0x0e,0x0f, // names: __init__, *, self, pins, value_when_pressed, pull, interval, max_events
    0x80,0xc6,0x80,0x1b,0x25,0x25,0x28,0x23,0x20,0x54,0x4b,0x2c,0x2c,0x44, // code info
    0x2b,0x00, // BUILD_LIST 0
    0xb1, // LOAD_FAST 1
    0x18,0x38, // STORE_ATTR '_digitalinouts'
    0xb2, // LOAD_FAST 2
    0x5f, // GET_ITER_STACK
    0x4b,0x2b, // FOR_ITER 43
    0xc7, // STORE_FAST 7
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x14,0x39, // LOAD_METHOD 'DigitalInOut'
    0xb7, // LOAD_FAST 7
    0x36,0x01, // CALL_METHOD 1
    0xc8, // STORE_FAST 8
    0xb4, // LOAD_FAST 4
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xb3, // LOAD_FAST 3
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x13,0x3a, // LOAD_ATTR 'Pull'
    0x13,0x3b, // LOAD_ATTR 'DOWN'
    0x42,0x46, // JUMP 6
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x13,0x3a, // LOAD_ATTR 'Pull'
    0x13,0x3c, // LOAD_ATTR 'UP'
    0xb8, // LOAD_FAST 8
    0x18,0x0d, // STORE_ATTR 'pull'
    0xb1, // LOAD_FAST 1
    0x13,0x38, // LOAD_ATTR '_digitalinouts'
    0x14,0x26, // LOAD_METHOD 'append'
    0xb8, // LOAD_FAST 8
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x13, // JUMP -45
    0x50, // LOAD_CONST_FALSE
    0x2b,0x01, // BUILD_LIST 1
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0xf4, // BINARY_OP 29 __mul__
    0xb1, // LOAD_FAST 1
    0x18,0x3d, // STORE_ATTR '_currently_pressed'
    0x50, // LOAD_CONST_FALSE
    0x2b,0x01, // BUILD_LIST 1
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0xf4, // BINARY_OP 29 __mul__
    0xb1, // LOAD_FAST 1
    0x18,0x3e, // STORE_ATTR '_previously_pressed'
    0xb3, // LOAD_FAST 3
    0xb1, // LOAD_FAST 1
    0x18,0x3f, // STORE_ATTR '_value_when_pressed'
    0x12,0x65, // LOAD_GLOBAL 'super'
    0x25,0x00, // LOAD_DEREF 0
    0xb1, // LOAD_FAST 1
    0x15,0x11, // LOAD_SUPER_METHOD '__init__'
    0xb5, // LOAD_FAST 5
    0xb6, // LOAD_FAST 6
    0xb1, // LOAD_FAST 1
    0x13,0x40, // LOAD_ATTR '_keypad_keys_scan'
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_Keys___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x08,
    .n_pos_args = 3,
    .fun_data = fun_data_keypad_Keys___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 125,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 16,
        .n_exc_stack = 0,
        .scope_flags = 8,
        .n_pos_args = 3,
        .n_kwonly_args = 4,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_keypad_Keys___init__ + 14,
        .opcodes = fun_data_keypad_Keys___init__ + 28,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_Keys
// frozen bytecode for file keypad.py, scope keypad_Keys_deinit
static const FLASHMEM byte fun_data_keypad_Keys_deinit[37] = {
    0x42,0x10, // prelude
    0x32,0x62,0x58, // names: deinit, *, self
    0x80,0xf1,0x20,0x2a,0x27, // code info
    0x12,0x65, // LOAD_GLOBAL 'super'
    0x25,0x00, // LOAD_DEREF 0
    0xb1, // LOAD_FAST 1
    0x15,0x32, // LOAD_SUPER_METHOD 'deinit'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x13,0x38, // LOAD_ATTR '_digitalinouts'
    0x5f, // GET_ITER_STACK
    0x4b,0x09, // FOR_ITER 9
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x14,0x32, // LOAD_METHOD 'deinit'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x35, // JUMP -11
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_Keys_deinit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_keypad_Keys_deinit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 37,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 50,
        .line_info = fun_data_keypad_Keys_deinit + 5,
        .opcodes = fun_data_keypad_Keys_deinit + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_Keys
// frozen bytecode for file keypad.py, scope keypad_Keys_reset
static const FLASHMEM byte fun_data_keypad_Keys_reset[24] = {
    0x19,0x0c, // prelude
    0x41,0x58, // names: reset, self
    0x80,0xf7,0x60,0x20, // code info
    0x50, // LOAD_CONST_FALSE
    0x2b,0x01, // BUILD_LIST 1
    0xb0, // LOAD_FAST 0
    0x13,0x42, // LOAD_ATTR 'key_count'
    0xf4, // BINARY_OP 29 __mul__
    0x57, // DUP_TOP
    0xb0, // LOAD_FAST 0
    0x18,0x3d, // STORE_ATTR '_currently_pressed'
    0xb0, // LOAD_FAST 0
    0x18,0x3e, // STORE_ATTR '_previously_pressed'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_Keys_reset = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_Keys_reset,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 65,
        .line_info = fun_data_keypad_Keys_reset + 4,
        .opcodes = fun_data_keypad_Keys_reset + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_Keys
// frozen bytecode for file keypad.py, scope keypad_Keys_key_count
static const FLASHMEM byte fun_data_keypad_Keys_key_count[15] = {
    0x11,0x0a, // prelude
    0x42,0x58, // names: key_count, self
    0x80,0xff,0x20, // code info
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x38, // LOAD_ATTR '_digitalinouts'
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_Keys_key_count = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_Keys_key_count,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 66,
        .line_info = fun_data_keypad_Keys_key_count + 4,
        .opcodes = fun_data_keypad_Keys_key_count + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_Keys
// frozen bytecode for file keypad.py, scope keypad_Keys__keypad_keys_scan
static const FLASHMEM byte fun_data_keypad_Keys__keypad_keys_scan[72] = {
    0x59,0x12, // prelude
    0x40,0x58, // names: _keypad_keys_scan, self
    0x90,0x03,0x2e,0x2a,0x28,0x26,0x29, // code info
    0x12,0x66, // LOAD_GLOBAL 'enumerate'
    0xb0, // LOAD_FAST 0
    0x13,0x38, // LOAD_ATTR '_digitalinouts'
    0x34,0x01, // CALL_FUNCTION 1
    0x5f, // GET_ITER_STACK
    0x4b,0x31, // FOR_ITER 49
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc1, // STORE_FAST 1
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x3d, // LOAD_ATTR '_currently_pressed'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x3e, // LOAD_ATTR '_previously_pressed'
    0xb1, // LOAD_FAST 1
    0x56, // STORE_SUBSCR
    0xb2, // LOAD_FAST 2
    0x13,0x43, // LOAD_ATTR 'value'
    0xb0, // LOAD_FAST 0
    0x13,0x3f, // LOAD_ATTR '_value_when_pressed'
    0xd9, // BINARY_OP 2 __eq__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x3d, // LOAD_ATTR '_currently_pressed'
    0xb1, // LOAD_FAST 1
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x3e, // LOAD_ATTR '_previously_pressed'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0xb3, // LOAD_FAST 3
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x14,0x24, // LOAD_METHOD 'keypad_eventqueue_record'
    0xb1, // LOAD_FAST 1
    0xb3, // LOAD_FAST 3
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x0d, // JUMP -51
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_Keys__keypad_keys_scan = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_Keys__keypad_keys_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 72,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 64,
        .line_info = fun_data_keypad_Keys__keypad_keys_scan + 4,
        .opcodes = fun_data_keypad_Keys__keypad_keys_scan + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_keypad_Keys[] = {
    &raw_code_keypad_Keys___init__,
    &raw_code_keypad_Keys_deinit,
    &raw_code_keypad_Keys_reset,
    &raw_code_keypad_Keys_key_count,
    &raw_code_keypad_Keys__keypad_keys_scan,
};

static const FLASHMEM mp_raw_code_t raw_code_keypad_Keys = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_keypad_Keys,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 73,
    #endif
    .children = (void *)&children_keypad_Keys,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_keypad_Keys + 3,
        .opcodes = fun_data_keypad_Keys + 17,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__lt_module_gt_
// frozen bytecode for file keypad.py, scope keypad_KeyMatrix
static const FLASHMEM byte fun_data_keypad_KeyMatrix[69] = {
    0x18,0x1f, // prelude
    0x0b, // names: KeyMatrix
    0x98,0x0c,0x60,0x61,0x40,0x8e,0x33,0x68,0x40,0x86,0x08,0x84,0x08,0x64,0x00, // code info
    0x11,0x54, // LOAD_NAME '__name__'
    0x16,0x55, // STORE_NAME '__module__'
    0x10,0x0b, // LOAD_CONST_STRING 'KeyMatrix'
    0x16,0x56, // STORE_NAME '__qualname__'
    0x52, // LOAD_CONST_TRUE
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x22,0x80,0x40, // LOAD_CONST_SMALL_INT 64
    0x2a,0x03, // BUILD_TUPLE 3
    0x53, // LOAD_NULL
    0xb0, // LOAD_FAST 0
    0x21,0x00,0x01, // MAKE_CLOSURE_DEFARGS 0
    0x16,0x11, // STORE_NAME '__init__'
    0x11,0x57, // LOAD_NAME 'property'
    0x32,0x01, // MAKE_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x42, // STORE_NAME 'key_count'
    0xb0, // LOAD_FAST 0
    0x20,0x02,0x01, // MAKE_CLOSURE 2
    0x16,0x32, // STORE_NAME 'deinit'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x41, // STORE_NAME 'reset'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x49, // STORE_NAME '_row_column_to_key_number'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x48, // STORE_NAME '_keypad_keymatrix_scan'
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
// child of keypad_KeyMatrix
// frozen bytecode for file keypad.py, scope keypad_KeyMatrix___init__
static const FLASHMEM byte fun_data_keypad_KeyMatrix___init__[198] = {
    0x93,0x95,0x01,0x36, // prelude
    0x11,0x62,0x58,0x67,0x68,0x69,0x0e,0x0f, // names: __init__, *, self, row_pins, column_pins, columns_to_anodes, interval, max_events
    0x90,0x17,0x80,0x19,0x25,0x25,0x28,0x25,0x55,0x4b,0x25,0x25,0x28,0x25,0x55,0x2b,0x32,0x32,0x44, // code info
    0x2b,0x00, // BUILD_LIST 0
    0xb1, // LOAD_FAST 1
    0x18,0x44, // STORE_ATTR '_row_digitalinouts'
    0xb2, // LOAD_FAST 2
    0x5f, // GET_ITER_STACK
    0x4b,0x2e, // FOR_ITER 46
    0xc7, // STORE_FAST 7
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x14,0x39, // LOAD_METHOD 'DigitalInOut'
    0xb7, // LOAD_FAST 7
    0x36,0x01, // CALL_METHOD 1
    0xc8, // STORE_FAST 8
    0xb8, // LOAD_FAST 8
    0x14,0x45, // LOAD_METHOD 'switch_to_input'
    0x10,0x0d, // LOAD_CONST_STRING 'pull'
    0xb4, // LOAD_FAST 4
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x13,0x3a, // LOAD_ATTR 'Pull'
    0x13,0x3c, // LOAD_ATTR 'UP'
    0x42,0x46, // JUMP 6
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x13,0x3a, // LOAD_ATTR 'Pull'
    0x13,0x3b, // LOAD_ATTR 'DOWN'
    0x36,0x82,0x00, // CALL_METHOD 256
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x13,0x44, // LOAD_ATTR '_row_digitalinouts'
    0x14,0x26, // LOAD_METHOD 'append'
    0xb8, // LOAD_FAST 8
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x10, // JUMP -48
    0x2b,0x00, // BUILD_LIST 0
    0xb1, // LOAD_FAST 1
    0x18,0x46, // STORE_ATTR '_column_digitalinouts'
    0xb3, // LOAD_FAST 3
    0x5f, // GET_ITER_STACK
    0x4b,0x2e, // FOR_ITER 46
    0xc9, // STORE_FAST 9
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x14,0x39, // LOAD_METHOD 'DigitalInOut'
    0xb9, // LOAD_FAST 9
    0x36,0x01, // CALL_METHOD 1
    0xca, // STORE_FAST 10
    0xba, // LOAD_FAST 10
    0x14,0x45, // LOAD_METHOD 'switch_to_input'
    0x10,0x0d, // LOAD_CONST_STRING 'pull'
    0xb4, // LOAD_FAST 4
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x13,0x3a, // LOAD_ATTR 'Pull'
    0x13,0x3c, // LOAD_ATTR 'UP'
    0x42,0x46, // JUMP 6
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x13,0x3a, // LOAD_ATTR 'Pull'
    0x13,0x3b, // LOAD_ATTR 'DOWN'
    0x36,0x82,0x00, // CALL_METHOD 256
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x13,0x46, // LOAD_ATTR '_column_digitalinouts'
    0x14,0x26, // LOAD_METHOD 'append'
    0xba, // LOAD_FAST 10
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x10, // JUMP -48
    0x50, // LOAD_CONST_FALSE
    0x2b,0x01, // BUILD_LIST 1
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0xf4, // BINARY_OP 29 __mul__
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0xf4, // BINARY_OP 29 __mul__
    0xb1, // LOAD_FAST 1
    0x18,0x3d, // STORE_ATTR '_currently_pressed'
    0x50, // LOAD_CONST_FALSE
    0x2b,0x01, // BUILD_LIST 1
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0xf4, // BINARY_OP 29 __mul__
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0xf4, // BINARY_OP 29 __mul__
    0xb1, // LOAD_FAST 1
    0x18,0x3e, // STORE_ATTR '_previously_pressed'
    0xb4, // LOAD_FAST 4
    0xb1, // LOAD_FAST 1
    0x18,0x47, // STORE_ATTR '_columns_to_anodes'
    0x12,0x65, // LOAD_GLOBAL 'super'
    0x25,0x00, // LOAD_DEREF 0
    0xb1, // LOAD_FAST 1
    0x15,0x11, // LOAD_SUPER_METHOD '__init__'
    0xb5, // LOAD_FAST 5
    0xb6, // LOAD_FAST 6
    0xb1, // LOAD_FAST 1
    0x13,0x48, // LOAD_ATTR '_keypad_keymatrix_scan'
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_KeyMatrix___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 7,
    .fun_data = fun_data_keypad_KeyMatrix___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 198,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 19,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 7,
        .n_kwonly_args = 0,
        .n_def_pos_args = 3,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_keypad_KeyMatrix___init__ + 12,
        .opcodes = fun_data_keypad_KeyMatrix___init__ + 31,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_KeyMatrix
// frozen bytecode for file keypad.py, scope keypad_KeyMatrix_key_count
static const FLASHMEM byte fun_data_keypad_KeyMatrix_key_count[23] = {
    0x19,0x0a, // prelude
    0x42,0x58, // names: key_count, self
    0x90,0x49,0x20, // code info
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x44, // LOAD_ATTR '_row_digitalinouts'
    0x34,0x01, // CALL_FUNCTION 1
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x46, // LOAD_ATTR '_column_digitalinouts'
    0x34,0x01, // CALL_FUNCTION 1
    0xf4, // BINARY_OP 29 __mul__
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_KeyMatrix_key_count = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_KeyMatrix_key_count,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 23,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 66,
        .line_info = fun_data_keypad_KeyMatrix_key_count + 4,
        .opcodes = fun_data_keypad_KeyMatrix_key_count + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_KeyMatrix
// frozen bytecode for file keypad.py, scope keypad_KeyMatrix_deinit
static const FLASHMEM byte fun_data_keypad_KeyMatrix_deinit[54] = {
    0x4a,0x14, // prelude
    0x32,0x62,0x58, // names: deinit, *, self
    0x90,0x4d,0x20,0x2a,0x27,0x28,0x27, // code info
    0x12,0x65, // LOAD_GLOBAL 'super'
    0x25,0x00, // LOAD_DEREF 0
    0xb1, // LOAD_FAST 1
    0x15,0x32, // LOAD_SUPER_METHOD 'deinit'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x13,0x44, // LOAD_ATTR '_row_digitalinouts'
    0x5f, // GET_ITER_STACK
    0x4b,0x09, // FOR_ITER 9
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x14,0x32, // LOAD_METHOD 'deinit'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x35, // JUMP -11
    0xb1, // LOAD_FAST 1
    0x13,0x46, // LOAD_ATTR '_column_digitalinouts'
    0x5f, // GET_ITER_STACK
    0x4b,0x09, // FOR_ITER 9
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x14,0x32, // LOAD_METHOD 'deinit'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x35, // JUMP -11
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_KeyMatrix_deinit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_keypad_KeyMatrix_deinit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 54,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 50,
        .line_info = fun_data_keypad_KeyMatrix_deinit + 5,
        .opcodes = fun_data_keypad_KeyMatrix_deinit + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_KeyMatrix
// frozen bytecode for file keypad.py, scope keypad_KeyMatrix_reset
static const FLASHMEM byte fun_data_keypad_KeyMatrix_reset[24] = {
    0x19,0x0c, // prelude
    0x41,0x58, // names: reset, self
    0x90,0x55,0x60,0x40, // code info
    0x50, // LOAD_CONST_FALSE
    0x2b,0x01, // BUILD_LIST 1
    0xb0, // LOAD_FAST 0
    0x13,0x42, // LOAD_ATTR 'key_count'
    0xf4, // BINARY_OP 29 __mul__
    0x57, // DUP_TOP
    0xb0, // LOAD_FAST 0
    0x18,0x3e, // STORE_ATTR '_previously_pressed'
    0xb0, // LOAD_FAST 0
    0x18,0x3d, // STORE_ATTR '_currently_pressed'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_KeyMatrix_reset = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_KeyMatrix_reset,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 65,
        .line_info = fun_data_keypad_KeyMatrix_reset + 4,
        .opcodes = fun_data_keypad_KeyMatrix_reset + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_KeyMatrix
// frozen bytecode for file keypad.py, scope keypad_KeyMatrix__row_column_to_key_number
static const FLASHMEM byte fun_data_keypad_KeyMatrix__row_column_to_key_number[20] = {
    0x2b,0x0c, // prelude
    0x49,0x58,0x6a,0x6b, // names: _row_column_to_key_number, self, row, column
    0x90,0x5d, // code info
    0xb1, // LOAD_FAST 1
    0x12,0x5c, // LOAD_GLOBAL 'len'
    0xb0, // LOAD_FAST 0
    0x13,0x46, // LOAD_ATTR '_column_digitalinouts'
    0x34,0x01, // CALL_FUNCTION 1
    0xf4, // BINARY_OP 29 __mul__
    0xb2, // LOAD_FAST 2
    0xf2, // BINARY_OP 27 __add__
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_KeyMatrix__row_column_to_key_number = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_keypad_KeyMatrix__row_column_to_key_number,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 20,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 73,
        .line_info = fun_data_keypad_KeyMatrix__row_column_to_key_number + 6,
        .opcodes = fun_data_keypad_KeyMatrix__row_column_to_key_number + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_KeyMatrix
// frozen bytecode for file keypad.py, scope keypad_KeyMatrix__keypad_keymatrix_scan
static const FLASHMEM byte fun_data_keypad_KeyMatrix__keypad_keymatrix_scan[164] = {
    0x91,0x10,0x26, // prelude
    0x48,0x58, // names: _keypad_keymatrix_scan, self
    0x90,0x60,0x2f,0x25,0x26,0x4a,0x2e,0x28,0x6a,0x28,0x26,0x29,0x2c,0x26,0x45,0x20,0x2d, // code info
    0x12,0x66, // LOAD_GLOBAL 'enumerate'
    0xb0, // LOAD_FAST 0
    0x13,0x44, // LOAD_ATTR '_row_digitalinouts'
    0x34,0x01, // CALL_FUNCTION 1
    0x5f, // GET_ITER_STACK
    0x4b,0x81,0x01, // FOR_ITER 129
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc1, // STORE_FAST 1
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x14,0x4a, // LOAD_METHOD 'switch_to_output'
    0x10,0x43, // LOAD_CONST_STRING 'value'
    0xb0, // LOAD_FAST 0
    0x13,0x47, // LOAD_ATTR '_columns_to_anodes'
    0xd3, // UNARY_OP 3 <not>
    0x10,0x4b, // LOAD_CONST_STRING 'drive_mode'
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x13,0x4c, // LOAD_ATTR 'DriveMode'
    0x13,0x4d, // LOAD_ATTR 'PUSH_PULL'
    0x36,0x84,0x00, // CALL_METHOD 512
    0x59, // POP_TOP
    0x12,0x66, // LOAD_GLOBAL 'enumerate'
    0xb0, // LOAD_FAST 0
    0x13,0x46, // LOAD_ATTR '_column_digitalinouts'
    0x34,0x01, // CALL_FUNCTION 1
    0x5f, // GET_ITER_STACK
    0x4b,0x39, // FOR_ITER 57
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc3, // STORE_FAST 3
    0xc4, // STORE_FAST 4
    0xb0, // LOAD_FAST 0
    0x14,0x49, // LOAD_METHOD '_row_column_to_key_number'
    0xb1, // LOAD_FAST 1
    0xb3, // LOAD_FAST 3
    0x36,0x02, // CALL_METHOD 2
    0xc5, // STORE_FAST 5
    0xb0, // LOAD_FAST 0
    0x13,0x3d, // LOAD_ATTR '_currently_pressed'
    0xb5, // LOAD_FAST 5
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x3e, // LOAD_ATTR '_previously_pressed'
    0xb5, // LOAD_FAST 5
    0x56, // STORE_SUBSCR
    0xb4, // LOAD_FAST 4
    0x13,0x43, // LOAD_ATTR 'value'
    0xb0, // LOAD_FAST 0
    0x13,0x47, // LOAD_ATTR '_columns_to_anodes'
    0xdc, // BINARY_OP 5 __ne__
    0xc6, // STORE_FAST 6
    0xb6, // LOAD_FAST 6
    0xb0, // LOAD_FAST 0
    0x13,0x3d, // LOAD_ATTR '_currently_pressed'
    0xb5, // LOAD_FAST 5
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x3e, // LOAD_ATTR '_previously_pressed'
    0xb5, // LOAD_FAST 5
    0x55, // LOAD_SUBSCR
    0xb6, // LOAD_FAST 6
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x14,0x24, // LOAD_METHOD 'keypad_eventqueue_record'
    0xb5, // LOAD_FAST 5
    0xb6, // LOAD_FAST 6
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x05, // JUMP -59
    0xb0, // LOAD_FAST 0
    0x13,0x47, // LOAD_ATTR '_columns_to_anodes'
    0xb2, // LOAD_FAST 2
    0x18,0x43, // STORE_ATTR 'value'
    0xb2, // LOAD_FAST 2
    0x14,0x45, // LOAD_METHOD 'switch_to_input'
    0x10,0x0d, // LOAD_CONST_STRING 'pull'
    0xb0, // LOAD_FAST 0
    0x13,0x47, // LOAD_ATTR '_columns_to_anodes'
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x13,0x3a, // LOAD_ATTR 'Pull'
    0x13,0x3c, // LOAD_ATTR 'UP'
    0x42,0x46, // JUMP 6
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x13,0x3a, // LOAD_ATTR 'Pull'
    0x13,0x3b, // LOAD_ATTR 'DOWN'
    0x36,0x82,0x00, // CALL_METHOD 256
    0x59, // POP_TOP
    0x42,0xfc,0x7e, // JUMP -132
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_KeyMatrix__keypad_keymatrix_scan = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_KeyMatrix__keypad_keymatrix_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 164,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 19,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 72,
        .line_info = fun_data_keypad_KeyMatrix__keypad_keymatrix_scan + 5,
        .opcodes = fun_data_keypad_KeyMatrix__keypad_keymatrix_scan + 22,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_keypad_KeyMatrix[] = {
    &raw_code_keypad_KeyMatrix___init__,
    &raw_code_keypad_KeyMatrix_key_count,
    &raw_code_keypad_KeyMatrix_deinit,
    &raw_code_keypad_KeyMatrix_reset,
    &raw_code_keypad_KeyMatrix__row_column_to_key_number,
    &raw_code_keypad_KeyMatrix__keypad_keymatrix_scan,
};

static const FLASHMEM mp_raw_code_t raw_code_keypad_KeyMatrix = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_keypad_KeyMatrix,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 69,
    #endif
    .children = (void *)&children_keypad_KeyMatrix,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_keypad_KeyMatrix + 3,
        .opcodes = fun_data_keypad_KeyMatrix + 18,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad__lt_module_gt_
// frozen bytecode for file keypad.py, scope keypad_ShiftRegisterKeys
static const FLASHMEM byte fun_data_keypad_ShiftRegisterKeys[84] = {
    0x20,0x23, // prelude
    0x0c, // names: ShiftRegisterKeys
    0x98,0x79,0x40,0x87,0x09,0x71,0x80,0x36,0x86,0x07,0x84,0x08,0x68,0x40,0x68,0x40,0x00, // code info
    0x11,0x54, // LOAD_NAME '__name__'
    0x16,0x55, // STORE_NAME '__module__'
    0x10,0x0c, // LOAD_CONST_STRING 'ShiftRegisterKeys'
    0x16,0x56, // STORE_NAME '__qualname__'
    0x53, // LOAD_NULL
    0x2c,0x00, // BUILD_MAP 0
    0x52, // LOAD_CONST_TRUE
    0x10,0x10, // LOAD_CONST_STRING 'value_to_latch'
    0x62, // STORE_MAP
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x10,0x0e, // LOAD_CONST_STRING 'interval'
    0x62, // STORE_MAP
    0x22,0x80,0x40, // LOAD_CONST_SMALL_INT 64
    0x10,0x0f, // LOAD_CONST_STRING 'max_events'
    0x62, // STORE_MAP
    0xb0, // LOAD_FAST 0
    0x21,0x00,0x01, // MAKE_CLOSURE_DEFARGS 0
    0x16,0x11, // STORE_NAME '__init__'
    0xb0, // LOAD_FAST 0
    0x20,0x01,0x01, // MAKE_CLOSURE 1
    0x16,0x32, // STORE_NAME 'deinit'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x41, // STORE_NAME 'reset'
    0x11,0x57, // LOAD_NAME 'property'
    0x32,0x03, // MAKE_FUNCTION 3
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x42, // STORE_NAME 'key_count'
    0x11,0x57, // LOAD_NAME 'property'
    0x32,0x04, // MAKE_FUNCTION 4
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x31, // STORE_NAME 'events'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x53, // STORE_NAME '_keypad_shiftregisterkeys_scan'
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
// child of keypad_ShiftRegisterKeys
// frozen bytecode for file keypad.py, scope keypad_ShiftRegisterKeys___init__
static const FLASHMEM byte fun_data_keypad_ShiftRegisterKeys___init__[159] = {
    0x92,0x90,0x80,0x80,0x48,0x3c, // prelude
    0x11,0x62,0x58,0x6c,0x6d,0x6e,0x10,0x42,0x64,0x0e,0x0f, // names: __init__, *, self, clock, data, latch, value_to_latch, key_count, value_when_pressed, interval, max_events
    0x90,0x87,0x80,0x20,0x28,0x28,0x4a,0x44,0x28,0x26,0x44,0x28,0x32,0x24,0x44,0x28,0x28,0x24,0x44, // code info
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x14,0x39, // LOAD_METHOD 'DigitalInOut'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0xca, // STORE_FAST 10
    0xba, // LOAD_FAST 10
    0x14,0x4a, // LOAD_METHOD 'switch_to_output'
    0x10,0x43, // LOAD_CONST_STRING 'value'
    0x50, // LOAD_CONST_FALSE
    0x10,0x4b, // LOAD_CONST_STRING 'drive_mode'
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x13,0x4c, // LOAD_ATTR 'DriveMode'
    0x13,0x4d, // LOAD_ATTR 'PUSH_PULL'
    0x36,0x84,0x00, // CALL_METHOD 512
    0x59, // POP_TOP
    0xba, // LOAD_FAST 10
    0xb1, // LOAD_FAST 1
    0x18,0x4e, // STORE_ATTR '_clock'
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x14,0x39, // LOAD_METHOD 'DigitalInOut'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0xcb, // STORE_FAST 11
    0xbb, // LOAD_FAST 11
    0x14,0x45, // LOAD_METHOD 'switch_to_input'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xbb, // LOAD_FAST 11
    0xb1, // LOAD_FAST 1
    0x18,0x4f, // STORE_ATTR '_data'
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x14,0x39, // LOAD_METHOD 'DigitalInOut'
    0xb4, // LOAD_FAST 4
    0x36,0x01, // CALL_METHOD 1
    0xcc, // STORE_FAST 12
    0xbc, // LOAD_FAST 12
    0x14,0x4a, // LOAD_METHOD 'switch_to_output'
    0x10,0x43, // LOAD_CONST_STRING 'value'
    0x52, // LOAD_CONST_TRUE
    0x10,0x4b, // LOAD_CONST_STRING 'drive_mode'
    0x12,0x06, // LOAD_GLOBAL 'digitalio'
    0x13,0x4c, // LOAD_ATTR 'DriveMode'
    0x13,0x4d, // LOAD_ATTR 'PUSH_PULL'
    0x36,0x84,0x00, // CALL_METHOD 512
    0x59, // POP_TOP
    0xbc, // LOAD_FAST 12
    0xb1, // LOAD_FAST 1
    0x18,0x50, // STORE_ATTR '_latch'
    0xb5, // LOAD_FAST 5
    0xb1, // LOAD_FAST 1
    0x18,0x51, // STORE_ATTR '_value_to_latch'
    0x50, // LOAD_CONST_FALSE
    0x2b,0x01, // BUILD_LIST 1
    0xb6, // LOAD_FAST 6
    0xf4, // BINARY_OP 29 __mul__
    0xb1, // LOAD_FAST 1
    0x18,0x3d, // STORE_ATTR '_currently_pressed'
    0x50, // LOAD_CONST_FALSE
    0x2b,0x01, // BUILD_LIST 1
    0xb6, // LOAD_FAST 6
    0xf4, // BINARY_OP 29 __mul__
    0xb1, // LOAD_FAST 1
    0x18,0x3e, // STORE_ATTR '_previously_pressed'
    0xb7, // LOAD_FAST 7
    0xb1, // LOAD_FAST 1
    0x18,0x3f, // STORE_ATTR '_value_when_pressed'
    0xb6, // LOAD_FAST 6
    0xb1, // LOAD_FAST 1
    0x18,0x52, // STORE_ATTR '_key_count'
    0x12,0x65, // LOAD_GLOBAL 'super'
    0x25,0x00, // LOAD_DEREF 0
    0xb1, // LOAD_FAST 1
    0x15,0x11, // LOAD_SUPER_METHOD '__init__'
    0xb8, // LOAD_FAST 8
    0xb9, // LOAD_FAST 9
    0xb1, // LOAD_FAST 1
    0x13,0x53, // LOAD_ATTR '_keypad_shiftregisterkeys_scan'
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_ShiftRegisterKeys___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x08,
    .n_pos_args = 2,
    .fun_data = fun_data_keypad_ShiftRegisterKeys___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 159,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 19,
        .n_exc_stack = 0,
        .scope_flags = 8,
        .n_pos_args = 2,
        .n_kwonly_args = 8,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_keypad_ShiftRegisterKeys___init__ + 17,
        .opcodes = fun_data_keypad_ShiftRegisterKeys___init__ + 36,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_ShiftRegisterKeys
// frozen bytecode for file keypad.py, scope keypad_ShiftRegisterKeys_deinit
static const FLASHMEM byte fun_data_keypad_ShiftRegisterKeys_deinit[47] = {
    0x22,0x12, // prelude
    0x32,0x62,0x58, // names: deinit, *, self
    0x90,0xbe,0x20,0x2a,0x28,0x28, // code info
    0x12,0x65, // LOAD_GLOBAL 'super'
    0x25,0x00, // LOAD_DEREF 0
    0xb1, // LOAD_FAST 1
    0x15,0x32, // LOAD_SUPER_METHOD 'deinit'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x13,0x4e, // LOAD_ATTR '_clock'
    0x14,0x32, // LOAD_METHOD 'deinit'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x13,0x4f, // LOAD_ATTR '_data'
    0x14,0x32, // LOAD_METHOD 'deinit'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x13,0x50, // LOAD_ATTR '_latch'
    0x14,0x32, // LOAD_METHOD 'deinit'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_ShiftRegisterKeys_deinit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_keypad_ShiftRegisterKeys_deinit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 47,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 50,
        .line_info = fun_data_keypad_ShiftRegisterKeys_deinit + 5,
        .opcodes = fun_data_keypad_ShiftRegisterKeys_deinit + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_ShiftRegisterKeys
// frozen bytecode for file keypad.py, scope keypad_ShiftRegisterKeys_reset
static const FLASHMEM byte fun_data_keypad_ShiftRegisterKeys_reset[24] = {
    0x19,0x0c, // prelude
    0x41,0x58, // names: reset, self
    0x90,0xc5,0x60,0x40, // code info
    0x50, // LOAD_CONST_FALSE
    0x2b,0x01, // BUILD_LIST 1
    0xb0, // LOAD_FAST 0
    0x13,0x52, // LOAD_ATTR '_key_count'
    0xf4, // BINARY_OP 29 __mul__
    0x57, // DUP_TOP
    0xb0, // LOAD_FAST 0
    0x18,0x3d, // STORE_ATTR '_currently_pressed'
    0xb0, // LOAD_FAST 0
    0x18,0x3e, // STORE_ATTR '_previously_pressed'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_ShiftRegisterKeys_reset = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_ShiftRegisterKeys_reset,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 65,
        .line_info = fun_data_keypad_ShiftRegisterKeys_reset + 4,
        .opcodes = fun_data_keypad_ShiftRegisterKeys_reset + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_ShiftRegisterKeys
// frozen bytecode for file keypad.py, scope keypad_ShiftRegisterKeys_key_count
static const FLASHMEM byte fun_data_keypad_ShiftRegisterKeys_key_count[11] = {
    0x09,0x0a, // prelude
    0x42,0x58, // names: key_count, self
    0x90,0xce,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x52, // LOAD_ATTR '_key_count'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_ShiftRegisterKeys_key_count = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_ShiftRegisterKeys_key_count,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 11,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 66,
        .line_info = fun_data_keypad_ShiftRegisterKeys_key_count + 4,
        .opcodes = fun_data_keypad_ShiftRegisterKeys_key_count + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_ShiftRegisterKeys
// frozen bytecode for file keypad.py, scope keypad_ShiftRegisterKeys_events
static const FLASHMEM byte fun_data_keypad_ShiftRegisterKeys_events[11] = {
    0x09,0x0a, // prelude
    0x31,0x58, // names: events, self
    0x90,0xd3,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_ShiftRegisterKeys_events = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_ShiftRegisterKeys_events,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 11,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 49,
        .line_info = fun_data_keypad_ShiftRegisterKeys_events + 4,
        .opcodes = fun_data_keypad_ShiftRegisterKeys_events + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of keypad_ShiftRegisterKeys
// frozen bytecode for file keypad.py, scope keypad_ShiftRegisterKeys__keypad_shiftregisterkeys_scan
static const FLASHMEM byte fun_data_keypad_ShiftRegisterKeys__keypad_shiftregisterkeys_scan[109] = {
    0x41,0x1a, // prelude
    0x53,0x58, // names: _keypad_shiftregisterkeys_scan, self
    0x90,0xd7,0x28,0x28,0x26,0x2a,0x2a,0x26,0x26,0x29,0x54, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x51, // LOAD_ATTR '_value_to_latch'
    0xb0, // LOAD_FAST 0
    0x13,0x50, // LOAD_ATTR '_latch'
    0x18,0x43, // STORE_ATTR 'value'
    0xb0, // LOAD_FAST 0
    0x13,0x52, // LOAD_ATTR '_key_count'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x7d, // JUMP 61
    0x57, // DUP_TOP
    0xc1, // STORE_FAST 1
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x13,0x4e, // LOAD_ATTR '_clock'
    0x18,0x43, // STORE_ATTR 'value'
    0xb0, // LOAD_FAST 0
    0x13,0x3d, // LOAD_ATTR '_currently_pressed'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x3e, // LOAD_ATTR '_previously_pressed'
    0xb1, // LOAD_FAST 1
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x4f, // LOAD_ATTR '_data'
    0x13,0x43, // LOAD_ATTR 'value'
    0xb0, // LOAD_FAST 0
    0x13,0x3f, // LOAD_ATTR '_value_when_pressed'
    0xd9, // BINARY_OP 2 __eq__
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x3d, // LOAD_ATTR '_currently_pressed'
    0xb1, // LOAD_FAST 1
    0x56, // STORE_SUBSCR
    0x52, // LOAD_CONST_TRUE
    0xb0, // LOAD_FAST 0
    0x13,0x4e, // LOAD_ATTR '_clock'
    0x18,0x43, // STORE_ATTR 'value'
    0xb0, // LOAD_FAST 0
    0x13,0x3e, // LOAD_ATTR '_previously_pressed'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0xb0, // LOAD_FAST 0
    0x13,0x1b, // LOAD_ATTR '_events'
    0x14,0x24, // LOAD_METHOD 'keypad_eventqueue_record'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0xbd,0x7f, // POP_JUMP_IF_TRUE -67
    0x59, // POP_TOP
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x51, // LOAD_ATTR '_value_to_latch'
    0xd3, // UNARY_OP 3 <not>
    0xb0, // LOAD_FAST 0
    0x13,0x50, // LOAD_ATTR '_latch'
    0x18,0x43, // STORE_ATTR 'value'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_keypad_ShiftRegisterKeys__keypad_shiftregisterkeys_scan = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_keypad_ShiftRegisterKeys__keypad_shiftregisterkeys_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 109,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 83,
        .line_info = fun_data_keypad_ShiftRegisterKeys__keypad_shiftregisterkeys_scan + 4,
        .opcodes = fun_data_keypad_ShiftRegisterKeys__keypad_shiftregisterkeys_scan + 15,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_keypad_ShiftRegisterKeys[] = {
    &raw_code_keypad_ShiftRegisterKeys___init__,
    &raw_code_keypad_ShiftRegisterKeys_deinit,
    &raw_code_keypad_ShiftRegisterKeys_reset,
    &raw_code_keypad_ShiftRegisterKeys_key_count,
    &raw_code_keypad_ShiftRegisterKeys_events,
    &raw_code_keypad_ShiftRegisterKeys__keypad_shiftregisterkeys_scan,
};

static const FLASHMEM mp_raw_code_t raw_code_keypad_ShiftRegisterKeys = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_keypad_ShiftRegisterKeys,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 84,
    #endif
    .children = (void *)&children_keypad_ShiftRegisterKeys,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_keypad_ShiftRegisterKeys + 3,
        .opcodes = fun_data_keypad_ShiftRegisterKeys + 20,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_keypad__lt_module_gt_[] = {
    &raw_code_keypad_Event,
    &raw_code_keypad__EventQueue,
    &raw_code_keypad__KeysBase,
    &raw_code_keypad_Keys,
    &raw_code_keypad_KeyMatrix,
    &raw_code_keypad_ShiftRegisterKeys,
};

static const FLASHMEM mp_raw_code_t raw_code_keypad__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_keypad__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 112,
    #endif
    .children = (void *)&children_keypad__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_keypad__lt_module_gt_ + 3,
        .opcodes = fun_data_keypad__lt_module_gt_ + 20,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_keypad[111] = {
    MP_QSTR_keypad_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_time,
    MP_QSTR_threading,
    MP_QSTR_deque,
    MP_QSTR_collections,
    MP_QSTR_digitalio,
    MP_QSTR_Event,
    MP_QSTR__EventQueue,
    MP_QSTR__KeysBase,
    MP_QSTR_Keys,
    MP_QSTR_KeyMatrix,
    MP_QSTR_ShiftRegisterKeys,
    MP_QSTR_pull,
    MP_QSTR_interval,
    MP_QSTR_max_events,
    MP_QSTR_value_to_latch,
    MP_QSTR___init__,
    MP_QSTR__key_number,
    MP_QSTR__pressed,
    MP_QSTR_key_number,
    MP_QSTR_pressed,
    MP_QSTR_released,
    MP_QSTR___eq__,
    MP_QSTR___hash__,
    MP_QSTR___repr__,
    MP_QSTR_format,
    MP_QSTR__events,
    MP_QSTR__overflowed,
    MP_QSTR_get,
    MP_QSTR_popleft,
    MP_QSTR_get_into,
    MP_QSTR_clear,
    MP_QSTR___bool__,
    MP_QSTR___len__,
    MP_QSTR_overflowed,
    MP_QSTR_keypad_eventqueue_record,
    MP_QSTR_maxlen,
    MP_QSTR_append,
    MP_QSTR__interval,
    MP_QSTR_monotonic,
    MP_QSTR__last_scan,
    MP_QSTR__scanning_function,
    MP_QSTR_Thread,
    MP_QSTR_target,
    MP_QSTR__scanning_loop,
    MP_QSTR_daemon,
    MP_QSTR__scan_thread,
    MP_QSTR_start,
    MP_QSTR_events,
    MP_QSTR_deinit,
    MP_QSTR_is_alive,
    MP_QSTR_join,
    MP_QSTR___enter__,
    MP_QSTR___exit__,
    MP_QSTR_sleep,
    MP_QSTR__digitalinouts,
    MP_QSTR_DigitalInOut,
    MP_QSTR_Pull,
    MP_QSTR_DOWN,
    MP_QSTR_UP,
    MP_QSTR__currently_pressed,
    MP_QSTR__previously_pressed,
    MP_QSTR__value_when_pressed,
    MP_QSTR__keypad_keys_scan,
    MP_QSTR_reset,
    MP_QSTR_key_count,
    MP_QSTR_value,
    MP_QSTR__row_digitalinouts,
    MP_QSTR_switch_to_input,
    MP_QSTR__column_digitalinouts,
    MP_QSTR__columns_to_anodes,
    MP_QSTR__keypad_keymatrix_scan,
    MP_QSTR__row_column_to_key_number,
    MP_QSTR_switch_to_output,
    MP_QSTR_drive_mode,
    MP_QSTR_DriveMode,
    MP_QSTR_PUSH_PULL,
    MP_QSTR__clock,
    MP_QSTR__data,
    MP_QSTR__latch,
    MP_QSTR__value_to_latch,
    MP_QSTR__key_count,
    MP_QSTR__keypad_shiftregisterkeys_scan,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_property,
    MP_QSTR_self,
    MP_QSTR_other,
    MP_QSTR_hash,
    MP_QSTR_event,
    MP_QSTR_len,
    MP_QSTR_current,
    MP_QSTR_scanning_function,
    MP_QSTR_exception_type,
    MP_QSTR_exception_value,
    MP_QSTR_traceback,
    MP_QSTR__star_,
    MP_QSTR_pins,
    MP_QSTR_value_when_pressed,
    MP_QSTR_super,
    MP_QSTR_enumerate,
    MP_QSTR_row_pins,
    MP_QSTR_column_pins,
    MP_QSTR_columns_to_anodes,
    MP_QSTR_row,
    MP_QSTR_column,
    MP_QSTR_clock,
    MP_QSTR_data,
    MP_QSTR_latch,
};

// constants
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
static const mp_obj_float_t FLASHMEM const_obj_keypad_0 = {{&mp_type_float}, (mp_float_t)0.02};
#define const_obj_keypad_0_macro MP_ROM_PTR(&const_obj_keypad_0)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
#define const_obj_keypad_0_macro MP_ROM_PTR(&13805919765693076603)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
#define const_obj_keypad_0_macro MP_ROM_PTR(&13805919765693076603)
#endif
static const FLASHMEM mp_obj_str_t const_obj_keypad_1 = {{&mp_type_str}, 38714, 25, (const byte*)"\x3c\x45\x76\x65\x6e\x74\x3a\x20\x6b\x65\x79\x5f\x6e\x75\x6d\x62\x65\x72\x20\x7b\x7d\x20\x7b\x7d\x3e"};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_keypad[2] = {
    const_obj_keypad_0_macro,
    MP_ROM_PTR(&const_obj_keypad_1),
};

static const FLASHMEM mp_frozen_module_t frozen_module_keypad = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_keypad,
        .obj_table = (mp_obj_t *)&const_obj_table_data_keypad,
    },
    .rc = &raw_code_keypad__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module pwmio
// - original source file: build-SHAREDLIB/frozen_mpy/pwmio.mpy
// - frozen file name: pwmio.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file pwmio.py, scope pwmio__lt_module_gt_
static const FLASHMEM byte fun_data_pwmio__lt_module_gt_[359] = {
    0x08,0x46, // prelude
    0x01, // names: <module>
    0x60,0x80,0x09,0x46,0x6c,0x20,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x4f,0x28,0x28,0x28,0x28,0x48,0x2e,0x29,0x42, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'sys'
    0x16,0x02, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x03, // LOAD_CONST_STRING 'detector'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x04, // IMPORT_NAME 'adafruit_blinka.agnostic'
    0x1c,0x03, // IMPORT_FROM 'detector'
    0x16,0x03, // STORE_NAME 'detector'
    0x59, // POP_TOP
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x06, // LOAD_ATTR 'any_raspberry_pi'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'PWMOut'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x08, // IMPORT_NAME 'adafruit_blinka.microcontroller.bcm283x.pwmio.PWMOut'
    0x1c,0x07, // IMPORT_FROM 'PWMOut'
    0x16,0x07, // STORE_NAME 'PWMOut'
    0x59, // POP_TOP
    0x42,0x97,0x82, // JUMP 279
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x09, // LOAD_ATTR 'any_coral_board'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'PWMOut'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0a, // IMPORT_NAME 'adafruit_blinka.microcontroller.generic_linux.sysfs_pwmout'
    0x1c,0x07, // IMPORT_FROM 'PWMOut'
    0x16,0x07, // STORE_NAME 'PWMOut'
    0x59, // POP_TOP
    0x42,0x80,0x82, // JUMP 256
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x0b, // LOAD_ATTR 'any_giant_board'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'PWMOut'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0a, // IMPORT_NAME 'adafruit_blinka.microcontroller.generic_linux.sysfs_pwmout'
    0x1c,0x07, // IMPORT_FROM 'PWMOut'
    0x16,0x07, // STORE_NAME 'PWMOut'
    0x59, // POP_TOP
    0x42,0xe9,0x81, // JUMP 233
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x0c, // LOAD_ATTR 'any_beaglebone'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'PWMOut'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0d, // IMPORT_NAME 'adafruit_blinka.microcontroller.am335x.sysfs_pwmout'
    0x1c,0x07, // IMPORT_FROM 'PWMOut'
    0x16,0x07, // STORE_NAME 'PWMOut'
    0x59, // POP_TOP
    0x42,0xd2,0x81, // JUMP 210
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x0e, // LOAD_ATTR 'any_siemens_simatic_iot2000'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'PWMOut'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0f, // IMPORT_NAME 'adafruit_blinka.microcontroller.am65xx.pwmout'
    0x1c,0x07, // IMPORT_FROM 'PWMOut'
    0x16,0x07, // STORE_NAME 'PWMOut'
    0x59, // POP_TOP
    0x42,0xbb,0x81, // JUMP 187
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x10, // LOAD_ATTR 'any_rock_pi_board'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'PWMOut'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x11, // IMPORT_NAME 'adafruit_blinka.microcontroller.rockchip.PWMOut'
    0x1c,0x07, // IMPORT_FROM 'PWMOut'
    0x16,0x07, // STORE_NAME 'PWMOut'
    0x59, // POP_TOP
    0x42,0xa4,0x81, // JUMP 164
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x12, // LOAD_ATTR 'binho_nova'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'PWMOut'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x13, // IMPORT_NAME 'adafruit_blinka.microcontroller.nova.pwmout'
    0x1c,0x07, // IMPORT_FROM 'PWMOut'
    0x16,0x07, // STORE_NAME 'PWMOut'
    0x59, // POP_TOP
    0x42,0x8d,0x81, // JUMP 141
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x14, // LOAD_ATTR 'greatfet_one'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'PWMOut'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x15, // IMPORT_NAME 'adafruit_blinka.microcontroller.nxp_lpc4330.pwmout'
    0x1c,0x07, // IMPORT_FROM 'PWMOut'
    0x16,0x07, // STORE_NAME 'PWMOut'
    0x59, // POP_TOP
    0x42,0xf6,0x80, // JUMP 118
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x16, // LOAD_ATTR 'any_lubancat'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'PWMOut'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0a, // IMPORT_NAME 'adafruit_blinka.microcontroller.generic_linux.sysfs_pwmout'
    0x1c,0x07, // IMPORT_FROM 'PWMOut'
    0x16,0x07, // STORE_NAME 'PWMOut'
    0x59, // POP_TOP
    0x42,0xdf,0x80, // JUMP 95
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x17, // LOAD_ATTR 'pico_u2if'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'PWMOut'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x18, // IMPORT_NAME 'adafruit_blinka.microcontroller.rp2040_u2if.pwmio'
    0x1c,0x07, // IMPORT_FROM 'PWMOut'
    0x16,0x07, // STORE_NAME 'PWMOut'
    0x59, // POP_TOP
    0x42,0xc8,0x80, // JUMP 72
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x19, // LOAD_ATTR 'feather_u2if'
    0x43,0x60, // POP_JUMP_IF_TRUE 32
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x1a, // LOAD_ATTR 'qtpy_u2if'
    0x43,0x58, // POP_JUMP_IF_TRUE 24
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x1b, // LOAD_ATTR 'itsybitsy_u2if'
    0x43,0x50, // POP_JUMP_IF_TRUE 16
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x1c, // LOAD_ATTR 'macropad_u2if'
    0x43,0x48, // POP_JUMP_IF_TRUE 8
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x1d, // LOAD_ATTR 'qt2040_trinkey_u2if'
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'PWMOut'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x18, // IMPORT_NAME 'adafruit_blinka.microcontroller.rp2040_u2if.pwmio'
    0x1c,0x07, // IMPORT_FROM 'PWMOut'
    0x16,0x07, // STORE_NAME 'PWMOut'
    0x59, // POP_TOP
    0x42,0x52, // JUMP 18
    0x10,0x1e, // LOAD_CONST_STRING 'sphinx'
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x1f, // LOAD_ATTR 'modules'
    0xdd, // BINARY_OP 6 <in>
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x47, // JUMP 7
    0x11,0x20, // LOAD_NAME 'NotImplementedError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_pwmio__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_pwmio__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 359,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_pwmio__lt_module_gt_ + 3,
        .opcodes = fun_data_pwmio__lt_module_gt_ + 37,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_pwmio[33] = {
    MP_QSTR_pwmio_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sys,
    MP_QSTR_detector,
    MP_QSTR_adafruit_blinka_dot_agnostic,
    MP_QSTR_board,
    MP_QSTR_any_raspberry_pi,
    MP_QSTR_PWMOut,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_bcm283x_dot_pwmio_dot_PWMOut,
    MP_QSTR_any_coral_board,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_generic_linux_dot_sysfs_pwmout,
    MP_QSTR_any_giant_board,
    MP_QSTR_any_beaglebone,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_am335x_dot_sysfs_pwmout,
    MP_QSTR_any_siemens_simatic_iot2000,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_am65xx_dot_pwmout,
    MP_QSTR_any_rock_pi_board,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rockchip_dot_PWMOut,
    MP_QSTR_binho_nova,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_nova_dot_pwmout,
    MP_QSTR_greatfet_one,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_nxp_lpc4330_dot_pwmout,
    MP_QSTR_any_lubancat,
    MP_QSTR_pico_u2if,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rp2040_u2if_dot_pwmio,
    MP_QSTR_feather_u2if,
    MP_QSTR_qtpy_u2if,
    MP_QSTR_itsybitsy_u2if,
    MP_QSTR_macropad_u2if,
    MP_QSTR_qt2040_trinkey_u2if,
    MP_QSTR_sphinx,
    MP_QSTR_modules,
    MP_QSTR_NotImplementedError,
};

// constants
static const FLASHMEM mp_obj_str_t const_obj_pwmio_0 = {{&mp_type_str}, 26779, 35, (const byte*)"\x70\x77\x6d\x69\x6f\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x66\x6f\x72\x20\x74\x68\x69\x73\x20\x62\x6f\x61\x72\x64\x2e"};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_pwmio[1] = {
    MP_ROM_PTR(&const_obj_pwmio_0),
};

static const FLASHMEM mp_frozen_module_t frozen_module_pwmio = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_pwmio,
        .obj_table = (mp_obj_t *)&const_obj_table_data_pwmio,
    },
    .rc = &raw_code_pwmio__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module rainbowio
// - original source file: build-SHAREDLIB/frozen_mpy/rainbowio.mpy
// - frozen file name: rainbowio.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file rainbowio.py, scope rainbowio__lt_module_gt_
static const FLASHMEM byte fun_data_rainbowio__lt_module_gt_[12] = {
    0x00,0x08, // prelude
    0x01, // names: <module>
    0x60,0x80,0x0a, // code info
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x02, // STORE_NAME 'colorwheel'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of rainbowio__lt_module_gt_
// frozen bytecode for file rainbowio.py, scope rainbowio_colorwheel
static const FLASHMEM byte fun_data_rainbowio_colorwheel[160] = {
    0x39,0x30, // prelude
    0x02,0x03, // names: colorwheel, color_value
    0x80,0x0e,0x80,0x07,0x26,0x2c,0x22,0x22,0x25,0x27,0x2c,0x28,0x25,0x27,0x26,0x22,0x2c,0x4a,0x26,0x28,0x22,0x2c, // code info
    0x12,0x04, // LOAD_GLOBAL 'int'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0xc0, // STORE_FAST 0
    0xb0, // LOAD_FAST 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x47, // POP_JUMP_IF_TRUE 7
    0xb0, // LOAD_FAST 0
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc1, // STORE_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc2, // STORE_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc3, // STORE_FAST 3
    0x42,0xe1,0x80, // JUMP 97
    0xb0, // LOAD_FAST 0
    0x22,0x80,0x55, // LOAD_CONST_SMALL_INT 85
    0xd7, // BINARY_OP 0 __lt__
    0x44,0x59, // POP_JUMP_IF_FALSE 25
    0x12,0x04, // LOAD_GLOBAL 'int'
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xb0, // LOAD_FAST 0
    0x83, // LOAD_CONST_SMALL_INT 3
    0xf4, // BINARY_OP 29 __mul__
    0xf3, // BINARY_OP 28 __sub__
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0x12,0x04, // LOAD_GLOBAL 'int'
    0xb0, // LOAD_FAST 0
    0x83, // LOAD_CONST_SMALL_INT 3
    0xf4, // BINARY_OP 29 __mul__
    0x34,0x01, // CALL_FUNCTION 1
    0xc2, // STORE_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc3, // STORE_FAST 3
    0x42,0xc1,0x80, // JUMP 65
    0xb0, // LOAD_FAST 0
    0x22,0x81,0x2a, // LOAD_CONST_SMALL_INT 170
    0xd7, // BINARY_OP 0 __lt__
    0x44,0x5e, // POP_JUMP_IF_FALSE 30
    0xb0, // LOAD_FAST 0
    0x22,0x80,0x55, // LOAD_CONST_SMALL_INT 85
    0xe6, // BINARY_OP 15 __isub__
    0xc0, // STORE_FAST 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc1, // STORE_FAST 1
    0x12,0x04, // LOAD_GLOBAL 'int'
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xb0, // LOAD_FAST 0
    0x83, // LOAD_CONST_SMALL_INT 3
    0xf4, // BINARY_OP 29 __mul__
    0xf3, // BINARY_OP 28 __sub__
    0x34,0x01, // CALL_FUNCTION 1
    0xc2, // STORE_FAST 2
    0x12,0x04, // LOAD_GLOBAL 'int'
    0xb0, // LOAD_FAST 0
    0x83, // LOAD_CONST_SMALL_INT 3
    0xf4, // BINARY_OP 29 __mul__
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0x42,0x5c, // JUMP 28
    0xb0, // LOAD_FAST 0
    0x22,0x81,0x2a, // LOAD_CONST_SMALL_INT 170
    0xe6, // BINARY_OP 15 __isub__
    0xc0, // STORE_FAST 0
    0x12,0x04, // LOAD_GLOBAL 'int'
    0xb0, // LOAD_FAST 0
    0x83, // LOAD_CONST_SMALL_INT 3
    0xf4, // BINARY_OP 29 __mul__
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc2, // STORE_FAST 2
    0x12,0x04, // LOAD_GLOBAL 'int'
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xb0, // LOAD_FAST 0
    0x83, // LOAD_CONST_SMALL_INT 3
    0xf4, // BINARY_OP 29 __mul__
    0xf3, // BINARY_OP 28 __sub__
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0xb1, // LOAD_FAST 1
    0x90, // LOAD_CONST_SMALL_INT 16
    0xf0, // BINARY_OP 25 __lshift__
    0xb2, // LOAD_FAST 2
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xed, // BINARY_OP 22 __or__
    0xb3, // LOAD_FAST 3
    0xed, // BINARY_OP 22 __or__
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_rainbowio_colorwheel = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_rainbowio_colorwheel,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 160,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 2,
        .line_info = fun_data_rainbowio_colorwheel + 4,
        .opcodes = fun_data_rainbowio_colorwheel + 26,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_rainbowio__lt_module_gt_[] = {
    &raw_code_rainbowio_colorwheel,
};

static const FLASHMEM mp_raw_code_t raw_code_rainbowio__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_rainbowio__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 12,
    #endif
    .children = (void *)&children_rainbowio__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_rainbowio__lt_module_gt_ + 3,
        .opcodes = fun_data_rainbowio__lt_module_gt_ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_rainbowio[5] = {
    MP_QSTR_rainbowio_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_colorwheel,
    MP_QSTR_color_value,
    MP_QSTR_int,
};

static const FLASHMEM mp_frozen_module_t frozen_module_rainbowio = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_rainbowio,
        .obj_table = NULL,
    },
    .rc = &raw_code_rainbowio__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module _boot
// - original source file: build-SHAREDLIB/frozen_mpy/_boot.mpy
// - frozen file name: _boot.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file _boot.py, scope _boot__lt_module_gt_
static const FLASHMEM byte fun_data__boot__lt_module_gt_[252] = {
    0xb8,0x02,0x32, // prelude
    0x01, // names: <module>
    0x60,0x20,0x26,0x26,0x26,0x4c,0x28,0x22,0x53,0x31,0x33,0x2b,0x29,0x2b,0x6b,0x22,0x4c,0x22,0x4c,0x47,0x2a,0x2b,0x29,0x4e, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'os'
    0x16,0x02, // STORE_NAME 'os'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'sys'
    0x16,0x03, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x04, // IMPORT_NAME 'mimxrt'
    0x16,0x04, // STORE_NAME 'mimxrt'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x05, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x06, // IMPORT_NAME 'machine'
    0x1c,0x05, // IMPORT_FROM 'Pin'
    0x16,0x05, // STORE_NAME 'Pin'
    0x59, // POP_TOP
    0x11,0x04, // LOAD_NAME 'mimxrt'
    0x14,0x07, // LOAD_METHOD 'Flash'
    0x36,0x00, // CALL_METHOD 0
    0x16,0x16, // STORE_NAME 'bdev'
    0x48,0x12, // SETUP_EXCEPT 18
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x08, // LOAD_METHOD 'VfsLfs2'
    0x11,0x16, // LOAD_NAME 'bdev'
    0x10,0x09, // LOAD_CONST_STRING 'progsize'
    0x22,0x82,0x00, // LOAD_CONST_SMALL_INT 256
    0x36,0x82,0x01, // CALL_METHOD 257
    0x16,0x17, // STORE_NAME 'vfs'
    0x4a,0x25, // POP_EXCEPT_JUMP 37
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'os'
    0x13,0x08, // LOAD_ATTR 'VfsLfs2'
    0x14,0x0a, // LOAD_METHOD 'mkfs'
    0x11,0x16, // LOAD_NAME 'bdev'
    0x10,0x09, // LOAD_CONST_STRING 'progsize'
    0x22,0x82,0x00, // LOAD_CONST_SMALL_INT 256
    0x36,0x82,0x01, // CALL_METHOD 257
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x08, // LOAD_METHOD 'VfsLfs2'
    0x11,0x16, // LOAD_NAME 'bdev'
    0x10,0x09, // LOAD_CONST_STRING 'progsize'
    0x22,0x82,0x00, // LOAD_CONST_SMALL_INT 256
    0x36,0x82,0x01, // CALL_METHOD 257
    0x16,0x17, // STORE_NAME 'vfs'
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x0b, // LOAD_METHOD 'mount'
    0x11,0x17, // LOAD_NAME 'vfs'
    0x10,0x0c, // LOAD_CONST_STRING '/flash'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x0d, // LOAD_METHOD 'chdir'
    0x10,0x0c, // LOAD_CONST_STRING '/flash'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x11,0x03, // LOAD_NAME 'sys'
    0x13,0x0e, // LOAD_ATTR 'path'
    0x14,0x0f, // LOAD_METHOD 'append'
    0x10,0x0c, // LOAD_CONST_STRING '/flash'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x11,0x03, // LOAD_NAME 'sys'
    0x13,0x0e, // LOAD_ATTR 'path'
    0x14,0x0f, // LOAD_METHOD 'append'
    0x10,0x10, // LOAD_CONST_STRING '/flash/lib'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x48,0x0b, // SETUP_EXCEPT 11
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x11, // LOAD_METHOD 'stat'
    0x10,0x12, // LOAD_CONST_STRING 'SKIPSD'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0x48, // POP_EXCEPT_JUMP 72
    0x59, // POP_TOP
    0x48,0x3e, // SETUP_EXCEPT 62
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x13, // LOAD_CONST_STRING 'SDCard'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x06, // IMPORT_NAME 'machine'
    0x1c,0x13, // IMPORT_FROM 'SDCard'
    0x16,0x13, // STORE_NAME 'SDCard'
    0x59, // POP_TOP
    0x11,0x13, // LOAD_NAME 'SDCard'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x18, // STORE_NAME 'sdcard'
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x14, // LOAD_METHOD 'VfsFat'
    0x11,0x18, // LOAD_NAME 'sdcard'
    0x36,0x01, // CALL_METHOD 1
    0x16,0x19, // STORE_NAME 'fat'
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x0b, // LOAD_METHOD 'mount'
    0x11,0x19, // LOAD_NAME 'fat'
    0x10,0x15, // LOAD_CONST_STRING '/sdcard'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'os'
    0x14,0x0d, // LOAD_METHOD 'chdir'
    0x10,0x15, // LOAD_CONST_STRING '/sdcard'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x11,0x03, // LOAD_NAME 'sys'
    0x13,0x0e, // LOAD_ATTR 'path'
    0x14,0x0f, // LOAD_METHOD 'append'
    0x10,0x15, // LOAD_CONST_STRING '/sdcard'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0x04, // POP_EXCEPT_JUMP 4
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code__boot__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data__boot__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 252,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data__boot__lt_module_gt_ + 4,
        .opcodes = fun_data__boot__lt_module_gt_ + 28,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data__boot[26] = {
    MP_QSTR__boot_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_os,
    MP_QSTR_sys,
    MP_QSTR_mimxrt,
    MP_QSTR_Pin,
    MP_QSTR_machine,
    MP_QSTR_Flash,
    MP_QSTR_VfsLfs2,
    MP_QSTR_progsize,
    MP_QSTR_mkfs,
    MP_QSTR_mount,
    MP_QSTR__slash_flash,
    MP_QSTR_chdir,
    MP_QSTR_path,
    MP_QSTR_append,
    MP_QSTR__slash_flash_slash_lib,
    MP_QSTR_stat,
    MP_QSTR_SKIPSD,
    MP_QSTR_SDCard,
    MP_QSTR_VfsFat,
    MP_QSTR__slash_sdcard,
    MP_QSTR_bdev,
    MP_QSTR_vfs,
    MP_QSTR_sdcard,
    MP_QSTR_fat,
};

static const FLASHMEM mp_frozen_module_t frozen_module__boot = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data__boot,
        .obj_table = NULL,
    },
    .rc = &raw_code__boot__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module bitbangio
// - original source file: build-SHAREDLIB/frozen_mpy/bitbangio.mpy
// - frozen file name: bitbangio.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file bitbangio.py, scope bitbangio__lt_module_gt_
static const FLASHMEM byte fun_data_bitbangio__lt_module_gt_[63] = {
    0x18,0x12, // prelude
    0x01, // names: <module>
    0x60,0x80,0x09,0x2a,0x72,0x40,0x8b,0x3f, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'adafruit_platformdetect.constants.boards'
    0x13,0x03, // LOAD_ATTR 'constants'
    0x13,0x04, // LOAD_ATTR 'boards'
    0x16,0x2d, // STORE_NAME 'ap_board'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x05, // LOAD_CONST_STRING 'Lockable'
    0x10,0x06, // LOAD_CONST_STRING 'agnostic'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x07, // IMPORT_NAME 'adafruit_blinka'
    0x1c,0x05, // IMPORT_FROM 'Lockable'
    0x16,0x05, // STORE_NAME 'Lockable'
    0x1c,0x06, // IMPORT_FROM 'agnostic'
    0x16,0x06, // STORE_NAME 'agnostic'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x08, // LOAD_CONST_STRING 'I2C'
    0x11,0x05, // LOAD_NAME 'Lockable'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x08, // STORE_NAME 'I2C'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x09, // LOAD_CONST_STRING 'SPI'
    0x11,0x05, // LOAD_NAME 'Lockable'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x09, // STORE_NAME 'SPI'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of bitbangio__lt_module_gt_
// frozen bytecode for file bitbangio.py, scope bitbangio_I2C
static const FLASHMEM byte fun_data_bitbangio_I2C[78] = {
    0x10,0x20, // prelude
    0x08, // names: I2C
    0x88,0x13,0x40,0x8b,0x0b,0x84,0x0c,0x84,0x07,0x64,0x64,0x64,0x20,0x89,0x09, // code info
    0x11,0x2e, // LOAD_NAME '__name__'
    0x16,0x2f, // STORE_NAME '__module__'
    0x10,0x08, // LOAD_CONST_STRING 'I2C'
    0x16,0x30, // STORE_NAME '__qualname__'
    0x22,0x98,0xb5,0x00, // LOAD_CONST_SMALL_INT 400000
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x0a, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x11, // STORE_NAME 'init'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x14, // STORE_NAME 'deinit'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x18, // STORE_NAME '__enter__'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x19, // STORE_NAME '__exit__'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x1a, // STORE_NAME 'scan'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x06, // MAKE_FUNCTION_DEFARGS 6
    0x16,0x1b, // STORE_NAME 'readfrom_into'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x52, // LOAD_CONST_TRUE
    0x2a,0x03, // BUILD_TUPLE 3
    0x53, // LOAD_NULL
    0x33,0x07, // MAKE_FUNCTION_DEFARGS 7
    0x16,0x1c, // STORE_NAME 'writeto'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of bitbangio_I2C
// frozen bytecode for file bitbangio.py, scope bitbangio_I2C___init__
static const FLASHMEM byte fun_data_bitbangio_I2C___init__[69] = {
    0xc0,0x05,0x18, // prelude
    0x0a,0x31,0x32,0x33,0x34, // names: __init__, self, scl, sda, frequency
    0x80,0x17,0x2b,0x2f,0x4a,0x22,0x45, // code info
    0x12,0x06, // LOAD_GLOBAL 'agnostic'
    0x13,0x0b, // LOAD_ATTR 'board_id'
    0x12,0x2d, // LOAD_GLOBAL 'ap_board'
    0x13,0x0c, // LOAD_ATTR 'PYBOARD'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x12,0x35, // LOAD_GLOBAL 'NotImplementedError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x14,0x0d, // LOAD_METHOD 'format'
    0x12,0x06, // LOAD_GLOBAL 'agnostic'
    0x13,0x0b, // LOAD_ATTR 'board_id'
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x12,0x06, // LOAD_GLOBAL 'agnostic'
    0x13,0x0e, // LOAD_ATTR 'detector'
    0x13,0x0f, // LOAD_ATTR 'board'
    0x13,0x10, // LOAD_ATTR 'any_embedded_linux'
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x35, // LOAD_GLOBAL 'NotImplementedError'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x14,0x11, // LOAD_METHOD 'init'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_bitbangio_I2C___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 4,
    .fun_data = fun_data_bitbangio_I2C___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 69,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_bitbangio_I2C___init__ + 8,
        .opcodes = fun_data_bitbangio_I2C___init__ + 15,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of bitbangio_I2C
// frozen bytecode for file bitbangio.py, scope bitbangio_I2C_init
static const FLASHMEM byte fun_data_bitbangio_I2C_init[71] = {
    0xe0,0x04,0x1a, // prelude
    0x11,0x31,0x32,0x33,0x34, // names: init, self, scl, sda, frequency
    0x80,0x21,0x20,0x2b,0x4b,0x26,0x62,0x20, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x12, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x13, // IMPORT_NAME 'machine'
    0x1c,0x12, // IMPORT_FROM 'Pin'
    0xc4, // STORE_FAST 4
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x08, // LOAD_CONST_STRING 'I2C'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x13, // IMPORT_NAME 'machine'
    0x1c,0x08, // IMPORT_FROM 'I2C'
    0xc5, // STORE_FAST 5
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x14, // LOAD_METHOD 'deinit'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xc6, // STORE_FAST 6
    0xb5, // LOAD_FAST 5
    0xb6, // LOAD_FAST 6
    0xb4, // LOAD_FAST 4
    0xb1, // LOAD_FAST 1
    0x13,0x15, // LOAD_ATTR 'id'
    0x34,0x01, // CALL_FUNCTION 1
    0xb4, // LOAD_FAST 4
    0xb2, // LOAD_FAST 2
    0x13,0x15, // LOAD_ATTR 'id'
    0x34,0x01, // CALL_FUNCTION 1
    0x10,0x16, // LOAD_CONST_STRING 'freq'
    0xb3, // LOAD_FAST 3
    0x34,0x82,0x03, // CALL_FUNCTION 259
    0xb0, // LOAD_FAST 0
    0x18,0x17, // STORE_ATTR '_i2c'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_bitbangio_I2C_init = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 4,
    .fun_data = fun_data_bitbangio_I2C_init,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 71,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_bitbangio_I2C_init + 8,
        .opcodes = fun_data_bitbangio_I2C_init + 16,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of bitbangio_I2C
// frozen bytecode for file bitbangio.py, scope bitbangio_I2C_deinit
static const FLASHMEM byte fun_data_bitbangio_I2C_deinit[30] = {
    0x35,0x0e, // prelude
    0x14,0x31, // names: deinit, self
    0x80,0x2d,0x20,0x22,0x4e, // code info
    0x48,0x07, // SETUP_EXCEPT 7
    0xb0, // LOAD_FAST 0
    0x53, // LOAD_NULL
    0x5a, // ROT_TWO
    0x18,0x17, // STORE_ATTR '_i2c'
    0x4a,0x0a, // POP_EXCEPT_JUMP 10
    0x57, // DUP_TOP
    0x12,0x36, // LOAD_GLOBAL 'AttributeError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_bitbangio_I2C_deinit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_bitbangio_I2C_deinit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 30,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_bitbangio_I2C_deinit + 4,
        .opcodes = fun_data_bitbangio_I2C_deinit + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of bitbangio_I2C
// frozen bytecode for file bitbangio.py, scope bitbangio_I2C___enter__
static const FLASHMEM byte fun_data_bitbangio_I2C___enter__[8] = {
    0x09,0x08, // prelude
    0x18,0x31, // names: __enter__, self
    0x80,0x34, // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_bitbangio_I2C___enter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_bitbangio_I2C___enter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 8,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 24,
        .line_info = fun_data_bitbangio_I2C___enter__ + 4,
        .opcodes = fun_data_bitbangio_I2C___enter__ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of bitbangio_I2C
// frozen bytecode for file bitbangio.py, scope bitbangio_I2C___exit__
static const FLASHMEM byte fun_data_bitbangio_I2C___exit__[18] = {
    0xa8,0x04,0x0e, // prelude
    0x19,0x31,0x37,0x38,0x39, // names: __exit__, self, exc_type, exc_value, traceback
    0x80,0x37, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x14, // LOAD_METHOD 'deinit'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_bitbangio_I2C___exit__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 4,
    .fun_data = fun_data_bitbangio_I2C___exit__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 18,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 25,
        .line_info = fun_data_bitbangio_I2C___exit__ + 8,
        .opcodes = fun_data_bitbangio_I2C___exit__ + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of bitbangio_I2C
// frozen bytecode for file bitbangio.py, scope bitbangio_I2C_scan
static const FLASHMEM byte fun_data_bitbangio_I2C_scan[15] = {
    0x11,0x0a, // prelude
    0x1a,0x31, // names: scan, self
    0x80,0x3a,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x17, // LOAD_ATTR '_i2c'
    0x14,0x1a, // LOAD_METHOD 'scan'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_bitbangio_I2C_scan = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_bitbangio_I2C_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 26,
        .line_info = fun_data_bitbangio_I2C_scan + 4,
        .opcodes = fun_data_bitbangio_I2C_scan + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of bitbangio_I2C
// frozen bytecode for file bitbangio.py, scope bitbangio_I2C_readfrom_into
static const FLASHMEM byte fun_data_bitbangio_I2C_readfrom_into[64] = {
    0xd1,0x84,0x01,0x1c, // prelude
    0x1b,0x31,0x3a,0x3b,0x3c,0x3d, // names: readfrom_into, self, address, buffer, start, end
    0x80,0x3e,0x20,0x2b,0x25,0x26,0x2b,0x22, // code info
    0xb3, // LOAD_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0x43,0x46, // POP_JUMP_IF_TRUE 6
    0xb4, // LOAD_FAST 4
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0xb4, // LOAD_FAST 4
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x3e, // LOAD_GLOBAL 'len'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0xc4, // STORE_FAST 4
    0x12,0x3f, // LOAD_GLOBAL 'memoryview'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc2, // STORE_FAST 2
    0x52, // LOAD_CONST_TRUE
    0xc5, // STORE_FAST 5
    0xb0, // LOAD_FAST 0
    0x13,0x17, // LOAD_ATTR '_i2c'
    0x14,0x1b, // LOAD_METHOD 'readfrom_into'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xb5, // LOAD_FAST 5
    0x36,0x03, // CALL_METHOD 3
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_bitbangio_I2C_readfrom_into = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_bitbangio_I2C_readfrom_into,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 64,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 27,
        .line_info = fun_data_bitbangio_I2C_readfrom_into + 10,
        .opcodes = fun_data_bitbangio_I2C_readfrom_into + 18,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of bitbangio_I2C
// frozen bytecode for file bitbangio.py, scope bitbangio_I2C_writeto
static const FLASHMEM byte fun_data_bitbangio_I2C_writeto[85] = {
    0xda,0x85,0x01,0x1c, // prelude
    0x1c,0x31,0x3a,0x3b,0x3c,0x3d,0x40, // names: writeto, self, address, buffer, start, end, stop
    0x80,0x47,0x20,0x2b,0x25,0x34,0x34, // code info
    0xb3, // LOAD_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0x43,0x46, // POP_JUMP_IF_TRUE 6
    0xb4, // LOAD_FAST 4
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x6d, // POP_JUMP_IF_FALSE 45
    0xb4, // LOAD_FAST 4
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xb0, // LOAD_FAST 0
    0x13,0x17, // LOAD_ATTR '_i2c'
    0x14,0x1c, // LOAD_METHOD 'writeto'
    0xb1, // LOAD_FAST 1
    0x12,0x3f, // LOAD_GLOBAL 'memoryview'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xb5, // LOAD_FAST 5
    0x36,0x03, // CALL_METHOD 3
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0x13,0x17, // LOAD_ATTR '_i2c'
    0x14,0x1c, // LOAD_METHOD 'writeto'
    0xb1, // LOAD_FAST 1
    0x12,0x3f, // LOAD_GLOBAL 'memoryview'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xb5, // LOAD_FAST 5
    0x36,0x03, // CALL_METHOD 3
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0x13,0x17, // LOAD_ATTR '_i2c'
    0x14,0x1c, // LOAD_METHOD 'writeto'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xb5, // LOAD_FAST 5
    0x36,0x03, // CALL_METHOD 3
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_bitbangio_I2C_writeto = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 6,
    .fun_data = fun_data_bitbangio_I2C_writeto,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 85,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 6,
        .n_kwonly_args = 0,
        .n_def_pos_args = 3,
        .qstr_block_name_idx = 28,
        .line_info = fun_data_bitbangio_I2C_writeto + 11,
        .opcodes = fun_data_bitbangio_I2C_writeto + 18,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_bitbangio_I2C[] = {
    &raw_code_bitbangio_I2C___init__,
    &raw_code_bitbangio_I2C_init,
    &raw_code_bitbangio_I2C_deinit,
    &raw_code_bitbangio_I2C___enter__,
    &raw_code_bitbangio_I2C___exit__,
    &raw_code_bitbangio_I2C_scan,
    &raw_code_bitbangio_I2C_readfrom_into,
    &raw_code_bitbangio_I2C_writeto,
};

static const FLASHMEM mp_raw_code_t raw_code_bitbangio_I2C = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_bitbangio_I2C,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 78,
    #endif
    .children = (void *)&children_bitbangio_I2C,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 8,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_bitbangio_I2C + 3,
        .opcodes = fun_data_bitbangio_I2C + 18,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of bitbangio__lt_module_gt_
// frozen bytecode for file bitbangio.py, scope bitbangio_SPI
static const FLASHMEM byte fun_data_bitbangio_SPI[59] = {
    0x18,0x18, // prelude
    0x09, // names: SPI
    0x88,0x52,0x40,0x89,0x0b,0x8e,0x16,0x64,0x20,0x64,0x20, // code info
    0x11,0x2e, // LOAD_NAME '__name__'
    0x16,0x2f, // STORE_NAME '__module__'
    0x10,0x09, // LOAD_CONST_STRING 'SPI'
    0x16,0x30, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x0a, // STORE_NAME '__init__'
    0x22,0x86,0x8d,0x20, // LOAD_CONST_SMALL_INT 100000
    0x80, // LOAD_CONST_SMALL_INT 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x88, // LOAD_CONST_SMALL_INT 8
    0x2a,0x04, // BUILD_TUPLE 4
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x1f, // STORE_NAME 'configure'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x2a, // STORE_NAME 'write'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x2b, // STORE_NAME 'readinto'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x2c, // STORE_NAME 'write_readinto'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of bitbangio_SPI
// frozen bytecode for file bitbangio.py, scope bitbangio_SPI___init__
static const FLASHMEM byte fun_data_bitbangio_SPI___init__[61] = {
    0xb8,0x84,0x01,0x18, // prelude
    0x0a,0x31,0x41,0x42,0x43, // names: __init__, self, clock, MOSI, MISO
    0x80,0x55,0x4a,0x22,0x45,0x4b,0x27, // code info
    0x12,0x06, // LOAD_GLOBAL 'agnostic'
    0x13,0x0e, // LOAD_ATTR 'detector'
    0x13,0x0f, // LOAD_ATTR 'board'
    0x13,0x10, // LOAD_ATTR 'any_embedded_linux'
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x35, // LOAD_GLOBAL 'NotImplementedError'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x09, // LOAD_CONST_STRING 'SPI'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x13, // IMPORT_NAME 'machine'
    0x1c,0x09, // IMPORT_FROM 'SPI'
    0xc4, // STORE_FAST 4
    0x59, // POP_TOP
    0xb4, // LOAD_FAST 4
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x1d, // STORE_ATTR '_spi'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0x2a,0x03, // BUILD_TUPLE 3
    0xb0, // LOAD_FAST 0
    0x18,0x1e, // STORE_ATTR '_pins'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_bitbangio_SPI___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 4,
    .fun_data = fun_data_bitbangio_SPI___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 61,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_bitbangio_SPI___init__ + 9,
        .opcodes = fun_data_bitbangio_SPI___init__ + 16,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of bitbangio_SPI
// frozen bytecode for file bitbangio.py, scope bitbangio_SPI_configure
static const FLASHMEM byte fun_data_bitbangio_SPI_configure[125] = {
    0xd1,0x94,0x80,0x01,0x26, // prelude
    0x1f,0x31,0x21,0x22,0x23,0x24, // names: configure, self, baudrate, polarity, phase, bits
    0x80,0x60,0x20,0x2b,0x4b,0x66,0x20,0x73,0x40,0x25,0x2c,0x2c,0x70, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x12, // LOAD_CONST_STRING 'Pin'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x13, // IMPORT_NAME 'machine'
    0x1c,0x12, // IMPORT_FROM 'Pin'
    0xc5, // STORE_FAST 5
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x09, // LOAD_CONST_STRING 'SPI'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x13, // IMPORT_NAME 'machine'
    0x1c,0x09, // IMPORT_FROM 'SPI'
    0xc6, // STORE_FAST 6
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x20, // LOAD_ATTR '_locked'
    0x44,0xc0,0x80, // POP_JUMP_IF_FALSE 64
    0xb0, // LOAD_FAST 0
    0x13,0x1d, // LOAD_ATTR '_spi'
    0x14,0x11, // LOAD_METHOD 'init'
    0x10,0x21, // LOAD_CONST_STRING 'baudrate'
    0xb1, // LOAD_FAST 1
    0x10,0x22, // LOAD_CONST_STRING 'polarity'
    0xb2, // LOAD_FAST 2
    0x10,0x23, // LOAD_CONST_STRING 'phase'
    0xb3, // LOAD_FAST 3
    0x10,0x24, // LOAD_CONST_STRING 'bits'
    0xb4, // LOAD_FAST 4
    0x10,0x25, // LOAD_CONST_STRING 'firstbit'
    0xb6, // LOAD_FAST 6
    0x13,0x26, // LOAD_ATTR 'MSB'
    0x10,0x27, // LOAD_CONST_STRING 'sck'
    0xb5, // LOAD_FAST 5
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR '_pins'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x13,0x15, // LOAD_ATTR 'id'
    0x34,0x01, // CALL_FUNCTION 1
    0x10,0x28, // LOAD_CONST_STRING 'mosi'
    0xb5, // LOAD_FAST 5
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR '_pins'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x13,0x15, // LOAD_ATTR 'id'
    0x34,0x01, // CALL_FUNCTION 1
    0x10,0x29, // LOAD_CONST_STRING 'miso'
    0xb5, // LOAD_FAST 5
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR '_pins'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x13,0x15, // LOAD_ATTR 'id'
    0x34,0x01, // CALL_FUNCTION 1
    0x36,0x90,0x00, // CALL_METHOD 2048
    0x59, // POP_TOP
    0x42,0x47, // JUMP 7
    0x12,0x44, // LOAD_GLOBAL 'RuntimeError'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_bitbangio_SPI_configure = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_bitbangio_SPI_configure,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 125,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 27,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 4,
        .qstr_block_name_idx = 31,
        .line_info = fun_data_bitbangio_SPI_configure + 11,
        .opcodes = fun_data_bitbangio_SPI_configure + 24,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of bitbangio_SPI
// frozen bytecode for file bitbangio.py, scope bitbangio_SPI_write
static const FLASHMEM byte fun_data_bitbangio_SPI_write[17] = {
    0x22,0x0c, // prelude
    0x2a,0x31,0x45, // names: write, self, buf
    0x80,0x76,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1d, // LOAD_ATTR '_spi'
    0x14,0x2a, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_bitbangio_SPI_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_bitbangio_SPI_write,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 17,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 42,
        .line_info = fun_data_bitbangio_SPI_write + 5,
        .opcodes = fun_data_bitbangio_SPI_write + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of bitbangio_SPI
// frozen bytecode for file bitbangio.py, scope bitbangio_SPI_readinto
static const FLASHMEM byte fun_data_bitbangio_SPI_readinto[15] = {
    0x22,0x0c, // prelude
    0x2b,0x31,0x45, // names: readinto, self, buf
    0x80,0x7a,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x2b, // LOAD_METHOD 'readinto'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_bitbangio_SPI_readinto = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_bitbangio_SPI_readinto,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 43,
        .line_info = fun_data_bitbangio_SPI_readinto + 5,
        .opcodes = fun_data_bitbangio_SPI_readinto + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of bitbangio_SPI
// frozen bytecode for file bitbangio.py, scope bitbangio_SPI_write_readinto
static const FLASHMEM byte fun_data_bitbangio_SPI_write_readinto[17] = {
    0x33,0x0e, // prelude
    0x2c,0x31,0x46,0x47, // names: write_readinto, self, buffer_out, buffer_in
    0x80,0x7e,0x20, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x2c, // LOAD_METHOD 'write_readinto'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_bitbangio_SPI_write_readinto = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_bitbangio_SPI_write_readinto,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 17,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 44,
        .line_info = fun_data_bitbangio_SPI_write_readinto + 6,
        .opcodes = fun_data_bitbangio_SPI_write_readinto + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_bitbangio_SPI[] = {
    &raw_code_bitbangio_SPI___init__,
    &raw_code_bitbangio_SPI_configure,
    &raw_code_bitbangio_SPI_write,
    &raw_code_bitbangio_SPI_readinto,
    &raw_code_bitbangio_SPI_write_readinto,
};

static const FLASHMEM mp_raw_code_t raw_code_bitbangio_SPI = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_bitbangio_SPI,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 59,
    #endif
    .children = (void *)&children_bitbangio_SPI,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 9,
        .line_info = fun_data_bitbangio_SPI + 3,
        .opcodes = fun_data_bitbangio_SPI + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_bitbangio__lt_module_gt_[] = {
    &raw_code_bitbangio_I2C,
    &raw_code_bitbangio_SPI,
};

static const FLASHMEM mp_raw_code_t raw_code_bitbangio__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_bitbangio__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 63,
    #endif
    .children = (void *)&children_bitbangio__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_bitbangio__lt_module_gt_ + 3,
        .opcodes = fun_data_bitbangio__lt_module_gt_ + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_bitbangio[72] = {
    MP_QSTR_bitbangio_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_adafruit_platformdetect_dot_constants_dot_boards,
    MP_QSTR_constants,
    MP_QSTR_boards,
    MP_QSTR_Lockable,
    MP_QSTR_agnostic,
    MP_QSTR_adafruit_blinka,
    MP_QSTR_I2C,
    MP_QSTR_SPI,
    MP_QSTR___init__,
    MP_QSTR_board_id,
    MP_QSTR_PYBOARD,
    MP_QSTR_format,
    MP_QSTR_detector,
    MP_QSTR_board,
    MP_QSTR_any_embedded_linux,
    MP_QSTR_init,
    MP_QSTR_Pin,
    MP_QSTR_machine,
    MP_QSTR_deinit,
    MP_QSTR_id,
    MP_QSTR_freq,
    MP_QSTR__i2c,
    MP_QSTR___enter__,
    MP_QSTR___exit__,
    MP_QSTR_scan,
    MP_QSTR_readfrom_into,
    MP_QSTR_writeto,
    MP_QSTR__spi,
    MP_QSTR__pins,
    MP_QSTR_configure,
    MP_QSTR__locked,
    MP_QSTR_baudrate,
    MP_QSTR_polarity,
    MP_QSTR_phase,
    MP_QSTR_bits,
    MP_QSTR_firstbit,
    MP_QSTR_MSB,
    MP_QSTR_sck,
    MP_QSTR_mosi,
    MP_QSTR_miso,
    MP_QSTR_write,
    MP_QSTR_readinto,
    MP_QSTR_write_readinto,
    MP_QSTR_ap_board,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_scl,
    MP_QSTR_sda,
    MP_QSTR_frequency,
    MP_QSTR_NotImplementedError,
    MP_QSTR_AttributeError,
    MP_QSTR_exc_type,
    MP_QSTR_exc_value,
    MP_QSTR_traceback,
    MP_QSTR_address,
    MP_QSTR_buffer,
    MP_QSTR_start,
    MP_QSTR_end,
    MP_QSTR_len,
    MP_QSTR_memoryview,
    MP_QSTR_stop,
    MP_QSTR_clock,
    MP_QSTR_MOSI,
    MP_QSTR_MISO,
    MP_QSTR_RuntimeError,
    MP_QSTR_buf,
    MP_QSTR_buffer_out,
    MP_QSTR_buffer_in,
};

// constants
static const FLASHMEM mp_obj_str_t const_obj_bitbangio_1 = {{&mp_type_str}, 13191, 67, (const byte*)"\x46\x6f\x72\x20\x62\x69\x74\x62\x61\x6e\x67\x69\x6f\x20\x6f\x6e\x20\x4c\x69\x6e\x75\x78\x2c\x20\x70\x6c\x65\x61\x73\x65\x20\x75\x73\x65\x20\x41\x64\x61\x66\x72\x75\x69\x74\x5f\x43\x69\x72\x63\x75\x69\x74\x50\x79\x74\x68\x6f\x6e\x5f\x42\x69\x74\x62\x61\x6e\x67\x49\x4f"};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_bitbangio[3] = {
    MP_ROM_QSTR(MP_QSTR_No_space_software_space_I2C_space_on_space__brace_open__brace_close_),
    MP_ROM_PTR(&const_obj_bitbangio_1),
    MP_ROM_QSTR(MP_QSTR_First_space_call_space_try_lock_paren_open__paren_close_),
};

static const FLASHMEM mp_frozen_module_t frozen_module_bitbangio = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_bitbangio,
        .obj_table = (mp_obj_t *)&const_obj_table_data_bitbangio,
    },
    .rc = &raw_code_bitbangio__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module analogio
// - original source file: build-SHAREDLIB/frozen_mpy/analogio.mpy
// - frozen file name: analogio.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file analogio.py, scope analogio__lt_module_gt_
static const FLASHMEM byte fun_data_analogio__lt_module_gt_[362] = {
    0x08,0x46, // prelude
    0x01, // names: <module>
    0x60,0x80,0x09,0x46,0x6c,0x20,0x28,0x2c,0x2f,0x28,0x2c,0x2f,0x28,0x2c,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x28,0x2f,0x29,0x23,0x28,0x6f,0x28,0x6e,0x28,0x6e,0x28,0x6e,0x20, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'sys'
    0x16,0x02, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x03, // LOAD_CONST_STRING 'detector'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x04, // IMPORT_NAME 'adafruit_blinka.agnostic'
    0x1c,0x03, // IMPORT_FROM 'detector'
    0x16,0x03, // STORE_NAME 'detector'
    0x59, // POP_TOP
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x06, // LOAD_ATTR 'microchip_mcp2221'
    0x44,0x5b, // POP_JUMP_IF_FALSE 27
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'AnalogIn'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x08, // IMPORT_NAME 'adafruit_blinka.microcontroller.mcp2221.analogio'
    0x1c,0x07, // IMPORT_FROM 'AnalogIn'
    0x16,0x07, // STORE_NAME 'AnalogIn'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x09, // LOAD_CONST_STRING 'AnalogOut'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x08, // IMPORT_NAME 'adafruit_blinka.microcontroller.mcp2221.analogio'
    0x1c,0x09, // IMPORT_FROM 'AnalogOut'
    0x16,0x09, // STORE_NAME 'AnalogOut'
    0x59, // POP_TOP
    0x42,0x8e,0x82, // JUMP 270
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x0a, // LOAD_ATTR 'greatfet_one'
    0x44,0x5b, // POP_JUMP_IF_FALSE 27
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'AnalogIn'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0b, // IMPORT_NAME 'adafruit_blinka.microcontroller.nxp_lpc4330.analogio'
    0x1c,0x07, // IMPORT_FROM 'AnalogIn'
    0x16,0x07, // STORE_NAME 'AnalogIn'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x09, // LOAD_CONST_STRING 'AnalogOut'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0b, // IMPORT_NAME 'adafruit_blinka.microcontroller.nxp_lpc4330.analogio'
    0x1c,0x09, // IMPORT_FROM 'AnalogOut'
    0x16,0x09, // STORE_NAME 'AnalogOut'
    0x59, // POP_TOP
    0x42,0xeb,0x81, // JUMP 235
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x0c, // LOAD_ATTR 'any_siemens_simatic_iot2000'
    0x44,0x5b, // POP_JUMP_IF_FALSE 27
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'AnalogIn'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0d, // IMPORT_NAME 'adafruit_blinka.microcontroller.am65xx.analogio'
    0x1c,0x07, // IMPORT_FROM 'AnalogIn'
    0x16,0x07, // STORE_NAME 'AnalogIn'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x09, // LOAD_CONST_STRING 'AnalogOut'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0d, // IMPORT_NAME 'adafruit_blinka.microcontroller.am65xx.analogio'
    0x1c,0x09, // IMPORT_FROM 'AnalogOut'
    0x16,0x09, // STORE_NAME 'AnalogOut'
    0x59, // POP_TOP
    0x42,0xc8,0x81, // JUMP 200
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x0e, // LOAD_ATTR 'chip'
    0x13,0x0f, // LOAD_ATTR 'RK3308'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'AnalogIn'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x10, // IMPORT_NAME 'adafruit_blinka.microcontroller.generic_linux.sysfs_analogin'
    0x1c,0x07, // IMPORT_FROM 'AnalogIn'
    0x16,0x07, // STORE_NAME 'AnalogIn'
    0x59, // POP_TOP
    0x42,0xb1,0x81, // JUMP 177
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x0e, // LOAD_ATTR 'chip'
    0x13,0x11, // LOAD_ATTR 'RK3399'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'AnalogIn'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x10, // IMPORT_NAME 'adafruit_blinka.microcontroller.generic_linux.sysfs_analogin'
    0x1c,0x07, // IMPORT_FROM 'AnalogIn'
    0x16,0x07, // STORE_NAME 'AnalogIn'
    0x59, // POP_TOP
    0x42,0x9a,0x81, // JUMP 154
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x0e, // LOAD_ATTR 'chip'
    0x13,0x12, // LOAD_ATTR 'IMX6ULL'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'AnalogIn'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x10, // IMPORT_NAME 'adafruit_blinka.microcontroller.generic_linux.sysfs_analogin'
    0x1c,0x07, // IMPORT_FROM 'AnalogIn'
    0x16,0x07, // STORE_NAME 'AnalogIn'
    0x59, // POP_TOP
    0x42,0x83,0x81, // JUMP 131
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x0e, // LOAD_ATTR 'chip'
    0x13,0x13, // LOAD_ATTR 'STM32MP157'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'AnalogIn'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x10, // IMPORT_NAME 'adafruit_blinka.microcontroller.generic_linux.sysfs_analogin'
    0x1c,0x07, // IMPORT_FROM 'AnalogIn'
    0x16,0x07, // STORE_NAME 'AnalogIn'
    0x59, // POP_TOP
    0x42,0xec,0x80, // JUMP 108
    0x10,0x14, // LOAD_CONST_STRING 'sphinx'
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x15, // LOAD_ATTR 'modules'
    0xdd, // BINARY_OP 6 <in>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x42,0xe0,0x80, // JUMP 96
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x16, // LOAD_ATTR 'pico_u2if'
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x17, // LOAD_CONST_STRING 'AnalogIn_Pico'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x18, // IMPORT_NAME 'adafruit_blinka.microcontroller.rp2040_u2if.analogio'
    0x1c,0x17, // IMPORT_FROM 'AnalogIn_Pico'
    0x16,0x07, // STORE_NAME 'AnalogIn'
    0x59, // POP_TOP
    0x42,0xc9,0x80, // JUMP 73
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x19, // LOAD_ATTR 'feather_u2if'
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x1a, // LOAD_CONST_STRING 'AnalogIn_Feather'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x18, // IMPORT_NAME 'adafruit_blinka.microcontroller.rp2040_u2if.analogio'
    0x1c,0x1a, // IMPORT_FROM 'AnalogIn_Feather'
    0x16,0x07, // STORE_NAME 'AnalogIn'
    0x59, // POP_TOP
    0x42,0x73, // JUMP 51
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x1b, // LOAD_ATTR 'qtpy_u2if'
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x1c, // LOAD_CONST_STRING 'AnalogIn_QTPY'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x18, // IMPORT_NAME 'adafruit_blinka.microcontroller.rp2040_u2if.analogio'
    0x1c,0x1c, // IMPORT_FROM 'AnalogIn_QTPY'
    0x16,0x07, // STORE_NAME 'AnalogIn'
    0x59, // POP_TOP
    0x42,0x5d, // JUMP 29
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x1d, // LOAD_ATTR 'itsybitsy_u2if'
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x1e, // LOAD_CONST_STRING 'AnalogIn_ItsyBitsy'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x18, // IMPORT_NAME 'adafruit_blinka.microcontroller.rp2040_u2if.analogio'
    0x1c,0x1e, // IMPORT_FROM 'AnalogIn_ItsyBitsy'
    0x16,0x07, // STORE_NAME 'AnalogIn'
    0x59, // POP_TOP
    0x42,0x47, // JUMP 7
    0x11,0x1f, // LOAD_NAME 'NotImplementedError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_analogio__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_analogio__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 362,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_analogio__lt_module_gt_ + 3,
        .opcodes = fun_data_analogio__lt_module_gt_ + 37,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_analogio[32] = {
    MP_QSTR_analogio_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sys,
    MP_QSTR_detector,
    MP_QSTR_adafruit_blinka_dot_agnostic,
    MP_QSTR_board,
    MP_QSTR_microchip_mcp2221,
    MP_QSTR_AnalogIn,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_mcp2221_dot_analogio,
    MP_QSTR_AnalogOut,
    MP_QSTR_greatfet_one,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_nxp_lpc4330_dot_analogio,
    MP_QSTR_any_siemens_simatic_iot2000,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_am65xx_dot_analogio,
    MP_QSTR_chip,
    MP_QSTR_RK3308,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_generic_linux_dot_sysfs_analogin,
    MP_QSTR_RK3399,
    MP_QSTR_IMX6ULL,
    MP_QSTR_STM32MP157,
    MP_QSTR_sphinx,
    MP_QSTR_modules,
    MP_QSTR_pico_u2if,
    MP_QSTR_AnalogIn_Pico,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_rp2040_u2if_dot_analogio,
    MP_QSTR_feather_u2if,
    MP_QSTR_AnalogIn_Feather,
    MP_QSTR_qtpy_u2if,
    MP_QSTR_AnalogIn_QTPY,
    MP_QSTR_itsybitsy_u2if,
    MP_QSTR_AnalogIn_ItsyBitsy,
    MP_QSTR_NotImplementedError,
};

// constants
static const FLASHMEM mp_obj_str_t const_obj_analogio_0 = {{&mp_type_str}, 56667, 38, (const byte*)"\x61\x6e\x61\x6c\x6f\x67\x69\x6f\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x66\x6f\x72\x20\x74\x68\x69\x73\x20\x62\x6f\x61\x72\x64\x2e"};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_analogio[1] = {
    MP_ROM_PTR(&const_obj_analogio_0),
};

static const FLASHMEM mp_frozen_module_t frozen_module_analogio = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_analogio,
        .obj_table = (mp_obj_t *)&const_obj_table_data_analogio,
    },
    .rc = &raw_code_analogio__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module pulseio
// - original source file: build-SHAREDLIB/frozen_mpy/pulseio.mpy
// - frozen file name: pulseio.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file pulseio.py, scope pulseio__lt_module_gt_
static const FLASHMEM byte fun_data_pulseio__lt_module_gt_[73] = {
    0x08,0x16, // prelude
    0x01, // names: <module>
    0x60,0x80,0x09,0x46,0x6c,0x20,0x28,0x2e,0x29,0x42, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'sys'
    0x16,0x02, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x03, // LOAD_CONST_STRING 'detector'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x04, // IMPORT_NAME 'adafruit_blinka.agnostic'
    0x1c,0x03, // IMPORT_FROM 'detector'
    0x16,0x03, // STORE_NAME 'detector'
    0x59, // POP_TOP
    0x11,0x03, // LOAD_NAME 'detector'
    0x13,0x05, // LOAD_ATTR 'board'
    0x13,0x06, // LOAD_ATTR 'any_raspberry_pi'
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'PulseIn'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x08, // IMPORT_NAME 'adafruit_blinka.microcontroller.bcm283x.pulseio.PulseIn'
    0x1c,0x07, // IMPORT_FROM 'PulseIn'
    0x16,0x07, // STORE_NAME 'PulseIn'
    0x59, // POP_TOP
    0x42,0x52, // JUMP 18
    0x10,0x09, // LOAD_CONST_STRING 'sphinx'
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x0a, // LOAD_ATTR 'modules'
    0xdd, // BINARY_OP 6 <in>
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x47, // JUMP 7
    0x11,0x0b, // LOAD_NAME 'NotImplementedError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_pulseio__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_pulseio__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 73,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_pulseio__lt_module_gt_ + 3,
        .opcodes = fun_data_pulseio__lt_module_gt_ + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_pulseio[12] = {
    MP_QSTR_pulseio_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sys,
    MP_QSTR_detector,
    MP_QSTR_adafruit_blinka_dot_agnostic,
    MP_QSTR_board,
    MP_QSTR_any_raspberry_pi,
    MP_QSTR_PulseIn,
    MP_QSTR_adafruit_blinka_dot_microcontroller_dot_bcm283x_dot_pulseio_dot_PulseIn,
    MP_QSTR_sphinx,
    MP_QSTR_modules,
    MP_QSTR_NotImplementedError,
};

// constants
static const FLASHMEM mp_obj_str_t const_obj_pulseio_0 = {{&mp_type_str}, 30510, 37, (const byte*)"\x70\x75\x6c\x73\x65\x69\x6f\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x66\x6f\x72\x20\x74\x68\x69\x73\x20\x62\x6f\x61\x72\x64\x2e"};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_pulseio[1] = {
    MP_ROM_PTR(&const_obj_pulseio_0),
};

static const FLASHMEM mp_frozen_module_t frozen_module_pulseio = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_pulseio,
        .obj_table = (mp_obj_t *)&const_obj_table_data_pulseio,
    },
    .rc = &raw_code_pulseio__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module onewireio
// - original source file: build-SHAREDLIB/frozen_mpy/onewireio.mpy
// - frozen file name: onewireio.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file onewireio.py, scope onewireio__lt_module_gt_
static const FLASHMEM byte fun_data_onewireio__lt_module_gt_[17] = {
    0x10,0x08, // prelude
    0x01, // names: <module>
    0x60,0x80,0x0d, // code info
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x02, // LOAD_CONST_STRING 'OneWire'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x02, // STORE_NAME 'OneWire'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of onewireio__lt_module_gt_
// frozen bytecode for file onewireio.py, scope onewireio_OneWire
static const FLASHMEM byte fun_data_onewireio_OneWire[44] = {
    0x00,0x18, // prelude
    0x02, // names: OneWire
    0x88,0x11,0x60,0x20,0x64,0x64,0x60,0x64,0x60,0x64,0x60, // code info
    0x11,0x08, // LOAD_NAME '__name__'
    0x16,0x09, // STORE_NAME '__module__'
    0x10,0x02, // LOAD_CONST_STRING 'OneWire'
    0x16,0x0a, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x03, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x04, // STORE_NAME 'deinit'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x05, // STORE_NAME 'reset'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x06, // STORE_NAME 'read_bit'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x07, // STORE_NAME 'write_bit'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of onewireio_OneWire
// frozen bytecode for file onewireio.py, scope onewireio_OneWire___init__
static const FLASHMEM byte fun_data_onewireio_OneWire___init__[14] = {
    0x1a,0x0a, // prelude
    0x03,0x0b,0x0c, // names: __init__, self, pin
    0x80,0x16, // code info
    0x12,0x0d, // LOAD_GLOBAL 'NotImplementedError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
};
static const FLASHMEM mp_raw_code_t raw_code_onewireio_OneWire___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewireio_OneWire___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 3,
        .line_info = fun_data_onewireio_OneWire___init__ + 5,
        .opcodes = fun_data_onewireio_OneWire___init__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewireio_OneWire
// frozen bytecode for file onewireio.py, scope onewireio_OneWire_deinit
static const FLASHMEM byte fun_data_onewireio_OneWire_deinit[14] = {
    0x11,0x0a, // prelude
    0x04,0x0b, // names: deinit, self
    0x80,0x19,0x60, // code info
    0x12,0x0d, // LOAD_GLOBAL 'NotImplementedError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
};
static const FLASHMEM mp_raw_code_t raw_code_onewireio_OneWire_deinit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewireio_OneWire_deinit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_onewireio_OneWire_deinit + 4,
        .opcodes = fun_data_onewireio_OneWire_deinit + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewireio_OneWire
// frozen bytecode for file onewireio.py, scope onewireio_OneWire_reset
static const FLASHMEM byte fun_data_onewireio_OneWire_reset[14] = {
    0x11,0x0a, // prelude
    0x05,0x0b, // names: reset, self
    0x80,0x1f,0x60, // code info
    0x12,0x0d, // LOAD_GLOBAL 'NotImplementedError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
};
static const FLASHMEM mp_raw_code_t raw_code_onewireio_OneWire_reset = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewireio_OneWire_reset,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_onewireio_OneWire_reset + 4,
        .opcodes = fun_data_onewireio_OneWire_reset + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewireio_OneWire
// frozen bytecode for file onewireio.py, scope onewireio_OneWire_read_bit
static const FLASHMEM byte fun_data_onewireio_OneWire_read_bit[14] = {
    0x11,0x0a, // prelude
    0x06,0x0b, // names: read_bit, self
    0x80,0x25,0x60, // code info
    0x12,0x0d, // LOAD_GLOBAL 'NotImplementedError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
};
static const FLASHMEM mp_raw_code_t raw_code_onewireio_OneWire_read_bit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewireio_OneWire_read_bit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_onewireio_OneWire_read_bit + 4,
        .opcodes = fun_data_onewireio_OneWire_read_bit + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewireio_OneWire
// frozen bytecode for file onewireio.py, scope onewireio_OneWire_write_bit
static const FLASHMEM byte fun_data_onewireio_OneWire_write_bit[15] = {
    0x1a,0x0c, // prelude
    0x07,0x0b,0x0e, // names: write_bit, self, value
    0x80,0x2b,0x60, // code info
    0x12,0x0d, // LOAD_GLOBAL 'NotImplementedError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
};
static const FLASHMEM mp_raw_code_t raw_code_onewireio_OneWire_write_bit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewireio_OneWire_write_bit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_onewireio_OneWire_write_bit + 5,
        .opcodes = fun_data_onewireio_OneWire_write_bit + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_onewireio_OneWire[] = {
    &raw_code_onewireio_OneWire___init__,
    &raw_code_onewireio_OneWire_deinit,
    &raw_code_onewireio_OneWire_reset,
    &raw_code_onewireio_OneWire_read_bit,
    &raw_code_onewireio_OneWire_write_bit,
};

static const FLASHMEM mp_raw_code_t raw_code_onewireio_OneWire = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_onewireio_OneWire,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 44,
    #endif
    .children = (void *)&children_onewireio_OneWire,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 2,
        .line_info = fun_data_onewireio_OneWire + 3,
        .opcodes = fun_data_onewireio_OneWire + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_onewireio__lt_module_gt_[] = {
    &raw_code_onewireio_OneWire,
};

static const FLASHMEM mp_raw_code_t raw_code_onewireio__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_onewireio__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 17,
    #endif
    .children = (void *)&children_onewireio__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_onewireio__lt_module_gt_ + 3,
        .opcodes = fun_data_onewireio__lt_module_gt_ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_onewireio[15] = {
    MP_QSTR_onewireio_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_OneWire,
    MP_QSTR___init__,
    MP_QSTR_deinit,
    MP_QSTR_reset,
    MP_QSTR_read_bit,
    MP_QSTR_write_bit,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_pin,
    MP_QSTR_NotImplementedError,
    MP_QSTR_value,
};

// constants
static const FLASHMEM mp_obj_str_t const_obj_onewireio_0 = {{&mp_type_str}, 16037, 32, (const byte*)"\x4f\x6e\x65\x57\x69\x72\x65\x20\x68\x61\x73\x20\x6e\x6f\x74\x20\x62\x65\x65\x6e\x20\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64"};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_onewireio[1] = {
    MP_ROM_PTR(&const_obj_onewireio_0),
};

static const FLASHMEM mp_frozen_module_t frozen_module_onewireio = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_onewireio,
        .obj_table = (mp_obj_t *)&const_obj_table_data_onewireio,
    },
    .rc = &raw_code_onewireio__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module certifi___init__
// - original source file: build-SHAREDLIB/frozen_mpy/certifi/__init__.mpy
// - frozen file name: certifi/__init__.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file certifi/__init__.py, scope certifi___init____lt_module_gt_
static const FLASHMEM byte fun_data_certifi___init____lt_module_gt_[37] = {
    0x10,0x06, // prelude
    0x01, // names: <module>
    0x52,0x28, // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'contents'
    0x10,0x03, // LOAD_CONST_STRING 'where'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x04, // IMPORT_NAME 'core'
    0x1c,0x02, // IMPORT_FROM 'contents'
    0x16,0x02, // STORE_NAME 'contents'
    0x1c,0x03, // IMPORT_FROM 'where'
    0x16,0x03, // STORE_NAME 'where'
    0x59, // POP_TOP
    0x10,0x02, // LOAD_CONST_STRING 'contents'
    0x10,0x03, // LOAD_CONST_STRING 'where'
    0x2b,0x02, // BUILD_LIST 2
    0x16,0x06, // STORE_NAME '__all__'
    0x10,0x05, // LOAD_CONST_STRING '2022.09.24'
    0x16,0x07, // STORE_NAME '__version__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_certifi___init____lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_certifi___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 37,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_certifi___init____lt_module_gt_ + 3,
        .opcodes = fun_data_certifi___init____lt_module_gt_ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_certifi___init__[8] = {
    MP_QSTR_certifi_slash___init___dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_contents,
    MP_QSTR_where,
    MP_QSTR_core,
    MP_QSTR_2022_dot_09_dot_24,
    MP_QSTR___all__,
    MP_QSTR___version__,
};

static const FLASHMEM mp_frozen_module_t frozen_module_certifi___init__ = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_certifi___init__,
        .obj_table = NULL,
    },
    .rc = &raw_code_certifi___init____lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module certifi_core
// - original source file: build-SHAREDLIB/frozen_mpy/certifi/core.mpy
// - frozen file name: certifi/core.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file certifi/core.py, scope certifi_core__lt_module_gt_
static const FLASHMEM byte fun_data_certifi_core__lt_module_gt_[194] = {
    0x10,0x3a, // prelude
    0x01, // names: <module>
    0x60,0x60,0x66,0x49,0x52,0x23,0x43,0x84,0x18,0x67,0x49,0x52,0x23,0x43,0x84,0x19,0x67,0x20,0x26,0x26,0x4c,0x2d,0x6b,0x60,0x8b,0x0b,0x64,0x40, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'sys'
    0x16,0x02, // STORE_NAME 'sys'
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x03, // LOAD_ATTR 'version_info'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xdb, // BINARY_OP 4 __ge__
    0x44,0x63, // POP_JUMP_IF_FALSE 35
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x04, // LOAD_CONST_STRING 'as_file'
    0x10,0x05, // LOAD_CONST_STRING 'files'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x06, // IMPORT_NAME 'importlib.resources'
    0x1c,0x04, // IMPORT_FROM 'as_file'
    0x16,0x04, // STORE_NAME 'as_file'
    0x1c,0x05, // IMPORT_FROM 'files'
    0x16,0x05, // STORE_NAME 'files'
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x17,0x1b, // STORE_GLOBAL '_CACERT_CTX'
    0x51, // LOAD_CONST_NONE
    0x17,0x1c, // STORE_GLOBAL '_CACERT_PATH'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x10, // STORE_NAME 'where'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x15, // STORE_NAME 'contents'
    0x42,0xef,0x80, // JUMP 111
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x03, // LOAD_ATTR 'version_info'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xdb, // BINARY_OP 4 __ge__
    0x44,0x63, // POP_JUMP_IF_FALSE 35
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x07, // LOAD_CONST_STRING 'path'
    0x10,0x08, // LOAD_CONST_STRING 'read_text'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x06, // IMPORT_NAME 'importlib.resources'
    0x1c,0x07, // IMPORT_FROM 'path'
    0x16,0x1d, // STORE_NAME 'get_path'
    0x1c,0x08, // IMPORT_FROM 'read_text'
    0x16,0x08, // STORE_NAME 'read_text'
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x17,0x1b, // STORE_GLOBAL '_CACERT_CTX'
    0x51, // LOAD_CONST_NONE
    0x17,0x1c, // STORE_GLOBAL '_CACERT_PATH'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x10, // STORE_NAME 'where'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x15, // STORE_NAME 'contents'
    0x42,0xc3,0x80, // JUMP 67
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x09, // IMPORT_NAME 'os'
    0x16,0x09, // STORE_NAME 'os'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0a, // IMPORT_NAME 'types'
    0x16,0x0a, // STORE_NAME 'types'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0b, // LOAD_CONST_STRING 'Union'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0c, // IMPORT_NAME 'typing'
    0x1c,0x0b, // IMPORT_FROM 'Union'
    0x16,0x0b, // STORE_NAME 'Union'
    0x59, // POP_TOP
    0x11,0x0b, // LOAD_NAME 'Union'
    0x11,0x0a, // LOAD_NAME 'types'
    0x13,0x0d, // LOAD_ATTR 'ModuleType'
    0x11,0x1e, // LOAD_NAME 'str'
    0x2a,0x02, // BUILD_TUPLE 2
    0x55, // LOAD_SUBSCR
    0x16,0x1f, // STORE_NAME 'Package'
    0x11,0x0b, // LOAD_NAME 'Union'
    0x11,0x1e, // LOAD_NAME 'str'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x2a,0x02, // BUILD_TUPLE 2
    0x55, // LOAD_SUBSCR
    0x16,0x20, // STORE_NAME 'Resource'
    0x10,0x0e, // LOAD_CONST_STRING 'utf-8'
    0x10,0x0f, // LOAD_CONST_STRING 'strict'
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x04, // MAKE_FUNCTION_DEFARGS 4
    0x16,0x08, // STORE_NAME 'read_text'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x10, // STORE_NAME 'where'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x15, // STORE_NAME 'contents'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of certifi_core__lt_module_gt_
// frozen bytecode for file certifi/core.py, scope certifi_core_where
static const FLASHMEM byte fun_data_certifi_core_where[50] = {
    0x18,0x12, // prelude
    0x10, // names: where
    0x80,0x16,0x20,0x20,0x86,0x0b,0x32,0x4c, // code info
    0x12,0x1c, // LOAD_GLOBAL '_CACERT_PATH'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x5e, // POP_JUMP_IF_FALSE 30
    0x12,0x04, // LOAD_GLOBAL 'as_file'
    0x12,0x05, // LOAD_GLOBAL 'files'
    0x10,0x11, // LOAD_CONST_STRING 'certifi'
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x12, // LOAD_METHOD 'joinpath'
    0x10,0x13, // LOAD_CONST_STRING 'cacert.pem'
    0x36,0x01, // CALL_METHOD 1
    0x34,0x01, // CALL_FUNCTION 1
    0x17,0x1b, // STORE_GLOBAL '_CACERT_CTX'
    0x12,0x1e, // LOAD_GLOBAL 'str'
    0x12,0x1b, // LOAD_GLOBAL '_CACERT_CTX'
    0x14,0x14, // LOAD_METHOD '__enter__'
    0x36,0x00, // CALL_METHOD 0
    0x34,0x01, // CALL_FUNCTION 1
    0x17,0x1c, // STORE_GLOBAL '_CACERT_PATH'
    0x12,0x1c, // LOAD_GLOBAL '_CACERT_PATH'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_certifi_core_where = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_certifi_core_where,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 50,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 16,
        .line_info = fun_data_certifi_core_where + 3,
        .opcodes = fun_data_certifi_core_where + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of certifi_core__lt_module_gt_
// frozen bytecode for file certifi/core.py, scope certifi_core_contents
static const FLASHMEM byte fun_data_certifi_core_contents[27] = {
    0x18,0x06, // prelude
    0x15, // names: contents
    0x80,0x29, // code info
    0x12,0x05, // LOAD_GLOBAL 'files'
    0x10,0x11, // LOAD_CONST_STRING 'certifi'
    0x34,0x01, // CALL_FUNCTION 1
    0x14,0x12, // LOAD_METHOD 'joinpath'
    0x10,0x13, // LOAD_CONST_STRING 'cacert.pem'
    0x36,0x01, // CALL_METHOD 1
    0x14,0x08, // LOAD_METHOD 'read_text'
    0x10,0x16, // LOAD_CONST_STRING 'encoding'
    0x10,0x17, // LOAD_CONST_STRING 'ascii'
    0x36,0x82,0x00, // CALL_METHOD 256
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_certifi_core_contents = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_certifi_core_contents,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 27,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 21,
        .line_info = fun_data_certifi_core_contents + 3,
        .opcodes = fun_data_certifi_core_contents + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of certifi_core__lt_module_gt_
// frozen bytecode for file certifi/core.py, scope certifi_core_where2
static const FLASHMEM byte fun_data_certifi_core_where2[42] = {
    0x10,0x12, // prelude
    0x10, // names: where
    0x80,0x38,0x20,0x20,0x86,0x0c,0x2a,0x4c, // code info
    0x12,0x1c, // LOAD_GLOBAL '_CACERT_PATH'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0x12,0x1d, // LOAD_GLOBAL 'get_path'
    0x10,0x11, // LOAD_CONST_STRING 'certifi'
    0x10,0x13, // LOAD_CONST_STRING 'cacert.pem'
    0x34,0x02, // CALL_FUNCTION 2
    0x17,0x1b, // STORE_GLOBAL '_CACERT_CTX'
    0x12,0x1e, // LOAD_GLOBAL 'str'
    0x12,0x1b, // LOAD_GLOBAL '_CACERT_CTX'
    0x14,0x14, // LOAD_METHOD '__enter__'
    0x36,0x00, // CALL_METHOD 0
    0x34,0x01, // CALL_FUNCTION 1
    0x17,0x1c, // STORE_GLOBAL '_CACERT_PATH'
    0x12,0x1c, // LOAD_GLOBAL '_CACERT_PATH'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_certifi_core_where2 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_certifi_core_where2,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 42,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 16,
        .line_info = fun_data_certifi_core_where2 + 3,
        .opcodes = fun_data_certifi_core_where2 + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of certifi_core__lt_module_gt_
// frozen bytecode for file certifi/core.py, scope certifi_core_contents2
static const FLASHMEM byte fun_data_certifi_core_contents2[19] = {
    0x20,0x06, // prelude
    0x15, // names: contents
    0x80,0x4c, // code info
    0x12,0x08, // LOAD_GLOBAL 'read_text'
    0x10,0x11, // LOAD_CONST_STRING 'certifi'
    0x10,0x13, // LOAD_CONST_STRING 'cacert.pem'
    0x10,0x16, // LOAD_CONST_STRING 'encoding'
    0x10,0x17, // LOAD_CONST_STRING 'ascii'
    0x34,0x82,0x02, // CALL_FUNCTION 258
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_certifi_core_contents2 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_certifi_core_contents2,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 21,
        .line_info = fun_data_certifi_core_contents2 + 3,
        .opcodes = fun_data_certifi_core_contents2 + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of certifi_core__lt_module_gt_
// frozen bytecode for file certifi/core.py, scope certifi_core_read_text
static const FLASHMEM byte fun_data_certifi_core_read_text[37] = {
    0xcc,0x84,0x01,0x10, // prelude
    0x08,0x21,0x22,0x16,0x23, // names: read_text, package, resource, encoding, errors
    0x80,0x60,0x2f, // code info
    0x12,0x24, // LOAD_GLOBAL 'open'
    0x12,0x10, // LOAD_GLOBAL 'where'
    0x34,0x00, // CALL_FUNCTION 0
    0x10,0x16, // LOAD_CONST_STRING 'encoding'
    0xb2, // LOAD_FAST 2
    0x34,0x82,0x01, // CALL_FUNCTION 257
    0x47,0x07, // SETUP_WITH 7
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x14,0x18, // LOAD_METHOD 'read'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_certifi_core_read_text = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 4,
    .fun_data = fun_data_certifi_core_read_text,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 37,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_certifi_core_read_text + 9,
        .opcodes = fun_data_certifi_core_read_text + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of certifi_core__lt_module_gt_
// frozen bytecode for file certifi/core.py, scope certifi_core_where3
static const FLASHMEM byte fun_data_certifi_core_where3[29] = {
    0x20,0x08, // prelude
    0x10, // names: where
    0x80,0x66,0x4b, // code info
    0x12,0x09, // LOAD_GLOBAL 'os'
    0x13,0x07, // LOAD_ATTR 'path'
    0x14,0x19, // LOAD_METHOD 'dirname'
    0x12,0x25, // LOAD_GLOBAL '__file__'
    0x36,0x01, // CALL_METHOD 1
    0xc0, // STORE_FAST 0
    0x12,0x09, // LOAD_GLOBAL 'os'
    0x13,0x07, // LOAD_ATTR 'path'
    0x14,0x1a, // LOAD_METHOD 'join'
    0xb0, // LOAD_FAST 0
    0x10,0x13, // LOAD_CONST_STRING 'cacert.pem'
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_certifi_core_where3 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_certifi_core_where3,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 29,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 16,
        .line_info = fun_data_certifi_core_where3 + 3,
        .opcodes = fun_data_certifi_core_where3 + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of certifi_core__lt_module_gt_
// frozen bytecode for file certifi/core.py, scope certifi_core_contents3
static const FLASHMEM byte fun_data_certifi_core_contents3[19] = {
    0x20,0x06, // prelude
    0x15, // names: contents
    0x80,0x6b, // code info
    0x12,0x08, // LOAD_GLOBAL 'read_text'
    0x10,0x11, // LOAD_CONST_STRING 'certifi'
    0x10,0x13, // LOAD_CONST_STRING 'cacert.pem'
    0x10,0x16, // LOAD_CONST_STRING 'encoding'
    0x10,0x17, // LOAD_CONST_STRING 'ascii'
    0x34,0x82,0x02, // CALL_FUNCTION 258
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_certifi_core_contents3 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_certifi_core_contents3,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 21,
        .line_info = fun_data_certifi_core_contents3 + 3,
        .opcodes = fun_data_certifi_core_contents3 + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_certifi_core__lt_module_gt_[] = {
    &raw_code_certifi_core_where,
    &raw_code_certifi_core_contents,
    &raw_code_certifi_core_where2,
    &raw_code_certifi_core_contents2,
    &raw_code_certifi_core_read_text,
    &raw_code_certifi_core_where3,
    &raw_code_certifi_core_contents3,
};

static const FLASHMEM mp_raw_code_t raw_code_certifi_core__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_certifi_core__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 194,
    #endif
    .children = (void *)&children_certifi_core__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 7,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_certifi_core__lt_module_gt_ + 3,
        .opcodes = fun_data_certifi_core__lt_module_gt_ + 31,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_certifi_core[38] = {
    MP_QSTR_certifi_slash_core_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sys,
    MP_QSTR_version_info,
    MP_QSTR_as_file,
    MP_QSTR_files,
    MP_QSTR_importlib_dot_resources,
    MP_QSTR_path,
    MP_QSTR_read_text,
    MP_QSTR_os,
    MP_QSTR_types,
    MP_QSTR_Union,
    MP_QSTR_typing,
    MP_QSTR_ModuleType,
    MP_QSTR_utf_hyphen_8,
    MP_QSTR_strict,
    MP_QSTR_where,
    MP_QSTR_certifi,
    MP_QSTR_joinpath,
    MP_QSTR_cacert_dot_pem,
    MP_QSTR___enter__,
    MP_QSTR_contents,
    MP_QSTR_encoding,
    MP_QSTR_ascii,
    MP_QSTR_read,
    MP_QSTR_dirname,
    MP_QSTR_join,
    MP_QSTR__CACERT_CTX,
    MP_QSTR__CACERT_PATH,
    MP_QSTR_get_path,
    MP_QSTR_str,
    MP_QSTR_Package,
    MP_QSTR_Resource,
    MP_QSTR_package,
    MP_QSTR_resource,
    MP_QSTR_errors,
    MP_QSTR_open,
    MP_QSTR___file__,
};

// constants
static const mp_rom_obj_tuple_t FLASHMEM const_obj_certifi_core_0 = {{&mp_type_tuple}, 2, {
    MP_ROM_INT(3),
    MP_ROM_INT(11),
}};
static const mp_rom_obj_tuple_t FLASHMEM const_obj_certifi_core_1 = {{&mp_type_tuple}, 2, {
    MP_ROM_INT(3),
    MP_ROM_INT(7),
}};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_certifi_core[3] = {
    MP_ROM_PTR(&const_obj_certifi_core_0),
    MP_ROM_PTR(&const_obj_certifi_core_1),
    MP_ROM_QSTR(MP_QSTR_os_dot_PathLike),
};

static const FLASHMEM mp_frozen_module_t frozen_module_certifi_core = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_certifi_core,
        .obj_table = (mp_obj_t *)&const_obj_table_data_certifi_core,
    },
    .rc = &raw_code_certifi_core__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module certifi___main__
// - original source file: build-SHAREDLIB/frozen_mpy/certifi/__main__.mpy
// - frozen file name: certifi/__main__.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file certifi/__main__.py, scope certifi___main____lt_module_gt_
static const FLASHMEM byte fun_data_certifi___main____lt_module_gt_[94] = {
    0x28,0x10, // prelude
    0x01, // names: <module>
    0x46,0x52,0x28,0x30,0x48,0x26,0x4b, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'argparse'
    0x16,0x02, // STORE_NAME 'argparse'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x03, // LOAD_CONST_STRING 'contents'
    0x10,0x04, // LOAD_CONST_STRING 'where'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x05, // IMPORT_NAME 'certifi'
    0x1c,0x03, // IMPORT_FROM 'contents'
    0x16,0x03, // STORE_NAME 'contents'
    0x1c,0x04, // IMPORT_FROM 'where'
    0x16,0x04, // STORE_NAME 'where'
    0x59, // POP_TOP
    0x11,0x02, // LOAD_NAME 'argparse'
    0x14,0x06, // LOAD_METHOD 'ArgumentParser'
    0x36,0x00, // CALL_METHOD 0
    0x16,0x0d, // STORE_NAME 'parser'
    0x11,0x0d, // LOAD_NAME 'parser'
    0x14,0x07, // LOAD_METHOD 'add_argument'
    0x10,0x08, // LOAD_CONST_STRING '-c'
    0x10,0x09, // LOAD_CONST_STRING '--contents'
    0x10,0x0a, // LOAD_CONST_STRING 'action'
    0x10,0x0b, // LOAD_CONST_STRING 'store_true'
    0x36,0x82,0x02, // CALL_METHOD 258
    0x59, // POP_TOP
    0x11,0x0d, // LOAD_NAME 'parser'
    0x14,0x0c, // LOAD_METHOD 'parse_args'
    0x36,0x00, // CALL_METHOD 0
    0x16,0x0e, // STORE_NAME 'args'
    0x11,0x0e, // LOAD_NAME 'args'
    0x13,0x03, // LOAD_ATTR 'contents'
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x11,0x0f, // LOAD_NAME 'print'
    0x11,0x03, // LOAD_NAME 'contents'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x42,0x49, // JUMP 9
    0x11,0x0f, // LOAD_NAME 'print'
    0x11,0x04, // LOAD_NAME 'where'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_certifi___main____lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_certifi___main____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 94,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_certifi___main____lt_module_gt_ + 3,
        .opcodes = fun_data_certifi___main____lt_module_gt_ + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_certifi___main__[16] = {
    MP_QSTR_certifi_slash___main___dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_argparse,
    MP_QSTR_contents,
    MP_QSTR_where,
    MP_QSTR_certifi,
    MP_QSTR_ArgumentParser,
    MP_QSTR_add_argument,
    MP_QSTR__hyphen_c,
    MP_QSTR__hyphen__hyphen_contents,
    MP_QSTR_action,
    MP_QSTR_store_true,
    MP_QSTR_parse_args,
    MP_QSTR_parser,
    MP_QSTR_args,
    MP_QSTR_print,
};

static const FLASHMEM mp_frozen_module_t frozen_module_certifi___main__ = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_certifi___main__,
        .obj_table = NULL,
    },
    .rc = &raw_code_certifi___main____lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module certifi_tests___init__
// - original source file: build-SHAREDLIB/frozen_mpy/certifi/tests/__init__.mpy
// - frozen file name: certifi/tests/__init__.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file certifi/tests/__init__.py, scope certifi_tests___init____lt_module_gt_
static const FLASHMEM byte fun_data_certifi_tests___init____lt_module_gt_[5] = {
    0x00,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_certifi_tests___init____lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_certifi_tests___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 5,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_certifi_tests___init____lt_module_gt_ + 3,
        .opcodes = fun_data_certifi_tests___init____lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_certifi_tests___init__[2] = {
    MP_QSTR_certifi_slash_tests_slash___init___dot_py,
    MP_QSTR__lt_module_gt_,
};

static const FLASHMEM mp_frozen_module_t frozen_module_certifi_tests___init__ = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_certifi_tests___init__,
        .obj_table = NULL,
    },
    .rc = &raw_code_certifi_tests___init____lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module certifi_tests_test_certify
// - original source file: build-SHAREDLIB/frozen_mpy/certifi/tests/test_certify.mpy
// - frozen file name: certifi/tests/test_certify.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file certifi/tests/test_certify.py, scope certifi_tests_test_certify__lt_module_gt_
static const FLASHMEM byte fun_data_certifi_tests_test_certify__lt_module_gt_[39] = {
    0x18,0x08, // prelude
    0x01, // names: <module>
    0x26,0x46,0x66, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'os'
    0x16,0x02, // STORE_NAME 'os'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'unittest'
    0x16,0x03, // STORE_NAME 'unittest'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x04, // IMPORT_NAME 'certifi'
    0x16,0x04, // STORE_NAME 'certifi'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x05, // LOAD_CONST_STRING 'TestCertifi'
    0x11,0x03, // LOAD_NAME 'unittest'
    0x13,0x06, // LOAD_ATTR 'TestCase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x05, // STORE_NAME 'TestCertifi'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of certifi_tests_test_certify__lt_module_gt_
// frozen bytecode for file certifi/tests/test_certify.py, scope certifi_tests_test_certify_TestCertifi
static const FLASHMEM byte fun_data_certifi_tests_test_certify_TestCertifi[30] = {
    0x00,0x0c, // prelude
    0x05, // names: TestCertifi
    0x88,0x07,0x64,0x64,0x20, // code info
    0x11,0x13, // LOAD_NAME '__name__'
    0x16,0x14, // STORE_NAME '__module__'
    0x10,0x05, // LOAD_CONST_STRING 'TestCertifi'
    0x16,0x15, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x07, // STORE_NAME 'test_cabundle_exists'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0c, // STORE_NAME 'test_read_contents'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0e, // STORE_NAME 'test_py_typed_exists'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of certifi_tests_test_certify_TestCertifi
// frozen bytecode for file certifi/tests/test_certify.py, scope certifi_tests_test_certify_TestCertifi_test_cabundle_exists
static const FLASHMEM byte fun_data_certifi_tests_test_certify_TestCertifi_test_cabundle_exists[27] = {
    0x21,0x08, // prelude
    0x07,0x16, // names: test_cabundle_exists, self
    0x80,0x08, // code info
    0x12,0x02, // LOAD_GLOBAL 'os'
    0x13,0x08, // LOAD_ATTR 'path'
    0x14,0x09, // LOAD_METHOD 'exists'
    0x12,0x04, // LOAD_GLOBAL 'certifi'
    0x14,0x0a, // LOAD_METHOD 'where'
    0x36,0x00, // CALL_METHOD 0
    0x36,0x01, // CALL_METHOD 1
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x0b, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_certifi_tests_test_certify_TestCertifi_test_cabundle_exists = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_certifi_tests_test_certify_TestCertifi_test_cabundle_exists,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 27,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_certifi_tests_test_certify_TestCertifi_test_cabundle_exists + 4,
        .opcodes = fun_data_certifi_tests_test_certify_TestCertifi_test_cabundle_exists + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of certifi_tests_test_certify_TestCertifi
// frozen bytecode for file certifi/tests/test_certify.py, scope certifi_tests_test_certify_TestCertifi_test_read_contents
static const FLASHMEM byte fun_data_certifi_tests_test_certify_TestCertifi_test_read_contents[25] = {
    0x19,0x0a, // prelude
    0x0c,0x16, // names: test_read_contents, self
    0x80,0x0b,0x27, // code info
    0x12,0x04, // LOAD_GLOBAL 'certifi'
    0x14,0x0d, // LOAD_METHOD 'contents'
    0x36,0x00, // CALL_METHOD 0
    0xc1, // STORE_FAST 1
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xb1, // LOAD_FAST 1
    0xdd, // BINARY_OP 6 <in>
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x0b, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_certifi_tests_test_certify_TestCertifi_test_read_contents = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_certifi_tests_test_certify_TestCertifi_test_read_contents,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_certifi_tests_test_certify_TestCertifi_test_read_contents + 4,
        .opcodes = fun_data_certifi_tests_test_certify_TestCertifi_test_read_contents + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of certifi_tests_test_certify_TestCertifi
// frozen bytecode for file certifi/tests/test_certify.py, scope certifi_tests_test_certify_TestCertifi_test_py_typed_exists
static const FLASHMEM byte fun_data_certifi_tests_test_certify_TestCertifi_test_py_typed_exists[44] = {
    0x39,0x0a, // prelude
    0x0e,0x16, // names: test_py_typed_exists, self
    0x80,0x0f,0x26, // code info
    0x12,0x02, // LOAD_GLOBAL 'os'
    0x13,0x08, // LOAD_ATTR 'path'
    0x14,0x09, // LOAD_METHOD 'exists'
    0x12,0x02, // LOAD_GLOBAL 'os'
    0x13,0x08, // LOAD_ATTR 'path'
    0x14,0x0f, // LOAD_METHOD 'join'
    0x12,0x02, // LOAD_GLOBAL 'os'
    0x13,0x08, // LOAD_ATTR 'path'
    0x14,0x10, // LOAD_METHOD 'dirname'
    0x12,0x04, // LOAD_GLOBAL 'certifi'
    0x13,0x11, // LOAD_ATTR '__file__'
    0x36,0x01, // CALL_METHOD 1
    0x10,0x12, // LOAD_CONST_STRING 'py.typed'
    0x36,0x02, // CALL_METHOD 2
    0x36,0x01, // CALL_METHOD 1
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x0b, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_certifi_tests_test_certify_TestCertifi_test_py_typed_exists = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_certifi_tests_test_certify_TestCertifi_test_py_typed_exists,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 44,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_certifi_tests_test_certify_TestCertifi_test_py_typed_exists + 4,
        .opcodes = fun_data_certifi_tests_test_certify_TestCertifi_test_py_typed_exists + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_certifi_tests_test_certify_TestCertifi[] = {
    &raw_code_certifi_tests_test_certify_TestCertifi_test_cabundle_exists,
    &raw_code_certifi_tests_test_certify_TestCertifi_test_read_contents,
    &raw_code_certifi_tests_test_certify_TestCertifi_test_py_typed_exists,
};

static const FLASHMEM mp_raw_code_t raw_code_certifi_tests_test_certify_TestCertifi = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_certifi_tests_test_certify_TestCertifi,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 30,
    #endif
    .children = (void *)&children_certifi_tests_test_certify_TestCertifi,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 3,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_certifi_tests_test_certify_TestCertifi + 3,
        .opcodes = fun_data_certifi_tests_test_certify_TestCertifi + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_certifi_tests_test_certify__lt_module_gt_[] = {
    &raw_code_certifi_tests_test_certify_TestCertifi,
};

static const FLASHMEM mp_raw_code_t raw_code_certifi_tests_test_certify__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_certifi_tests_test_certify__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 39,
    #endif
    .children = (void *)&children_certifi_tests_test_certify__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_certifi_tests_test_certify__lt_module_gt_ + 3,
        .opcodes = fun_data_certifi_tests_test_certify__lt_module_gt_ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_certifi_tests_test_certify[23] = {
    MP_QSTR_certifi_slash_tests_slash_test_certify_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_os,
    MP_QSTR_unittest,
    MP_QSTR_certifi,
    MP_QSTR_TestCertifi,
    MP_QSTR_TestCase,
    MP_QSTR_test_cabundle_exists,
    MP_QSTR_path,
    MP_QSTR_exists,
    MP_QSTR_where,
    MP_QSTR_AssertionError,
    MP_QSTR_test_read_contents,
    MP_QSTR_contents,
    MP_QSTR_test_py_typed_exists,
    MP_QSTR_join,
    MP_QSTR_dirname,
    MP_QSTR___file__,
    MP_QSTR_py_dot_typed,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
};

// constants
static const FLASHMEM mp_obj_str_t const_obj_certifi_tests_test_certify_0 = {{&mp_type_str}, 8535, 27, (const byte*)"\x2d\x2d\x2d\x2d\x2d\x42\x45\x47\x49\x4e\x20\x43\x45\x52\x54\x49\x46\x49\x43\x41\x54\x45\x2d\x2d\x2d\x2d\x2d"};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_certifi_tests_test_certify[1] = {
    MP_ROM_PTR(&const_obj_certifi_tests_test_certify_0),
};

static const FLASHMEM mp_frozen_module_t frozen_module_certifi_tests_test_certify = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_certifi_tests_test_certify,
        .obj_table = (mp_obj_t *)&const_obj_table_data_certifi_tests_test_certify,
    },
    .rc = &raw_code_certifi_tests_test_certify__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module onewire
// - original source file: build-SHAREDLIB/frozen_mpy/onewire.mpy
// - frozen file name: onewire.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file onewire.py, scope onewire__lt_module_gt_
static const FLASHMEM byte fun_data_onewire__lt_module_gt_[35] = {
    0x18,0x0a, // prelude
    0x01, // names: <module>
    0x60,0x66,0x6b,0x20, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME '_onewire'
    0x16,0x17, // STORE_NAME '_ow'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x03, // LOAD_CONST_STRING 'OneWireError'
    0x11,0x18, // LOAD_NAME 'Exception'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x03, // STORE_NAME 'OneWireError'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x04, // LOAD_CONST_STRING 'OneWire'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'OneWire'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of onewire__lt_module_gt_
// frozen bytecode for file onewire.py, scope onewire_OneWireError
static const FLASHMEM byte fun_data_onewire_OneWireError[15] = {
    0x00,0x06, // prelude
    0x03, // names: OneWireError
    0x88,0x07, // code info
    0x11,0x19, // LOAD_NAME '__name__'
    0x16,0x1a, // STORE_NAME '__module__'
    0x10,0x03, // LOAD_CONST_STRING 'OneWireError'
    0x16,0x1b, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_onewire_OneWireError = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_onewire_OneWireError,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 3,
        .line_info = fun_data_onewire_OneWireError + 3,
        .opcodes = fun_data_onewire_OneWireError + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire__lt_module_gt_
// frozen bytecode for file onewire.py, scope onewire_OneWire
static const FLASHMEM byte fun_data_onewire_OneWire[103] = {
    0x08,0x30, // prelude
    0x04, // names: OneWire
    0x88,0x0b,0x25,0x25,0x45,0x64,0x20,0x68,0x60,0x64,0x64,0x64,0x20,0x64,0x64,0x64,0x20,0x64,0x40,0x84,0x0c,0x84,0x1c, // code info
    0x11,0x19, // LOAD_NAME '__name__'
    0x16,0x1a, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'OneWire'
    0x16,0x1b, // STORE_NAME '__qualname__'
    0x22,0x81,0x70, // LOAD_CONST_SMALL_INT 240
    0x16,0x15, // STORE_NAME 'SEARCH_ROM'
    0x22,0x80,0x55, // LOAD_CONST_SMALL_INT 85
    0x16,0x12, // STORE_NAME 'MATCH_ROM'
    0x22,0x81,0x4c, // LOAD_CONST_SMALL_INT 204
    0x16,0x1c, // STORE_NAME 'SKIP_ROM'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x05, // STORE_NAME '__init__'
    0x50, // LOAD_CONST_FALSE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x0a, // STORE_NAME 'reset'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0b, // STORE_NAME 'readbit'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x0c, // STORE_NAME 'readbyte'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x0d, // STORE_NAME 'readinto'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x0e, // STORE_NAME 'writebit'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x0f, // STORE_NAME 'writebyte'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x10, // STORE_NAME 'write'
    0x32,0x08, // MAKE_FUNCTION 8
    0x16,0x11, // STORE_NAME 'select_rom'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x13, // STORE_NAME 'scan'
    0x32,0x0a, // MAKE_FUNCTION 10
    0x16,0x14, // STORE_NAME '_search_rom'
    0x32,0x0b, // MAKE_FUNCTION 11
    0x16,0x16, // STORE_NAME 'crc8'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire___init__
static const FLASHMEM byte fun_data_onewire_OneWire___init__[28] = {
    0x2a,0x0c, // prelude
    0x05,0x1d,0x06, // names: __init__, self, pin
    0x80,0x10,0x24, // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'pin'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0x14,0x07, // LOAD_METHOD 'init'
    0xb1, // LOAD_FAST 1
    0x13,0x08, // LOAD_ATTR 'OPEN_DRAIN'
    0xb1, // LOAD_FAST 1
    0x13,0x09, // LOAD_ATTR 'PULL_UP'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_onewire_OneWire___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 28,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_onewire_OneWire___init__ + 5,
        .opcodes = fun_data_onewire_OneWire___init__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_reset
static const FLASHMEM byte fun_data_onewire_OneWire_reset[32] = {
    0xaa,0x01,0x10, // prelude
    0x0a,0x1d,0x1e, // names: reset, self, required
    0x80,0x14,0x2a,0x26,0x23, // code info
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x0a, // LOAD_METHOD 'reset'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb2, // LOAD_FAST 2
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x03, // LOAD_GLOBAL 'OneWireError'
    0x65, // RAISE_OBJ
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_onewire_OneWire_reset = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_reset,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 32,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_onewire_OneWire_reset + 6,
        .opcodes = fun_data_onewire_OneWire_reset + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_readbit
static const FLASHMEM byte fun_data_onewire_OneWire_readbit[16] = {
    0x19,0x08, // prelude
    0x0b,0x1d, // names: readbit, self
    0x80,0x1a, // code info
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x0b, // LOAD_METHOD 'readbit'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_onewire_OneWire_readbit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewire_OneWire_readbit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_onewire_OneWire_readbit + 4,
        .opcodes = fun_data_onewire_OneWire_readbit + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_readbyte
static const FLASHMEM byte fun_data_onewire_OneWire_readbyte[16] = {
    0x19,0x08, // prelude
    0x0c,0x1d, // names: readbyte, self
    0x80,0x1d, // code info
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x0c, // LOAD_METHOD 'readbyte'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_onewire_OneWire_readbyte = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewire_OneWire_readbyte,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_onewire_OneWire_readbyte + 4,
        .opcodes = fun_data_onewire_OneWire_readbyte + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_readinto
static const FLASHMEM byte fun_data_onewire_OneWire_readinto[41] = {
    0x3a,0x0c, // prelude
    0x0d,0x1d,0x1f, // names: readinto, self, buf
    0x80,0x20,0x2a, // code info
    0x12,0x20, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x50, // JUMP 16
    0x57, // DUP_TOP
    0xc2, // STORE_FAST 2
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x0c, // LOAD_METHOD 'readbyte'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0x36,0x01, // CALL_METHOD 1
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x56, // STORE_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x2b, // POP_JUMP_IF_TRUE -21
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_onewire_OneWire_readinto = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_readinto,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 41,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_onewire_OneWire_readinto + 5,
        .opcodes = fun_data_onewire_OneWire_readinto + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_writebit
static const FLASHMEM byte fun_data_onewire_OneWire_writebit[18] = {
    0x2a,0x0a, // prelude
    0x0e,0x1d,0x21, // names: writebit, self, value
    0x80,0x24, // code info
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x0e, // LOAD_METHOD 'writebit'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_onewire_OneWire_writebit = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_writebit,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 18,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_onewire_OneWire_writebit + 5,
        .opcodes = fun_data_onewire_OneWire_writebit + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_writebyte
static const FLASHMEM byte fun_data_onewire_OneWire_writebyte[18] = {
    0x2a,0x0a, // prelude
    0x0f,0x1d,0x21, // names: writebyte, self, value
    0x80,0x27, // code info
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x0f, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0xb1, // LOAD_FAST 1
    0x36,0x02, // CALL_METHOD 2
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_onewire_OneWire_writebyte = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_writebyte,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 18,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_onewire_OneWire_writebyte + 5,
        .opcodes = fun_data_onewire_OneWire_writebyte + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_write
static const FLASHMEM byte fun_data_onewire_OneWire_write[28] = {
    0x52,0x0c, // prelude
    0x10,0x1d,0x1f, // names: write, self, buf
    0x80,0x2a,0x25, // code info
    0xb1, // LOAD_FAST 1
    0x5f, // GET_ITER_STACK
    0x4b,0x0e, // FOR_ITER 14
    0xc2, // STORE_FAST 2
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x0f, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'pin'
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x30, // JUMP -16
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_onewire_OneWire_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_write,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 28,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 16,
        .line_info = fun_data_onewire_OneWire_write + 5,
        .opcodes = fun_data_onewire_OneWire_write + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_select_rom
static const FLASHMEM byte fun_data_onewire_OneWire_select_rom[33] = {
    0x22,0x0e, // prelude
    0x11,0x1d,0x22, // names: select_rom, self, rom
    0x80,0x2e,0x26,0x29, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0a, // LOAD_METHOD 'reset'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x0f, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x12, // LOAD_ATTR 'MATCH_ROM'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x10, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_onewire_OneWire_select_rom = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_select_rom,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 33,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_onewire_OneWire_select_rom + 5,
        .opcodes = fun_data_onewire_OneWire_select_rom + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_scan
static const FLASHMEM byte fun_data_onewire_OneWire_scan[68] = {
    0x49,0x1a, // prelude
    0x13,0x1d, // names: scan, self
    0x80,0x33,0x23,0x24,0x22,0x25,0x2b,0x23,0x26,0x25,0x2c, // code info
    0x2b,0x00, // BUILD_LIST 0
    0xc1, // STORE_FAST 1
    0x22,0x80,0x41, // LOAD_CONST_SMALL_INT 65
    0xc2, // STORE_FAST 2
    0x50, // LOAD_CONST_FALSE
    0xc3, // STORE_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x5f, // JUMP 31
    0x57, // DUP_TOP
    0xc4, // STORE_FAST 4
    0xb0, // LOAD_FAST 0
    0x14,0x14, // LOAD_METHOD '_search_rom'
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc3, // STORE_FAST 3
    0xc2, // STORE_FAST 2
    0xb3, // LOAD_FAST 3
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb1, // LOAD_FAST 1
    0xb3, // LOAD_FAST 3
    0x2b,0x01, // BUILD_LIST 1
    0xe5, // BINARY_OP 14 __iadd__
    0xc1, // STORE_FAST 1
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x49, // JUMP 9
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x57, // DUP_TOP
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x1a, // POP_JUMP_IF_TRUE -38
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_onewire_OneWire_scan = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_onewire_OneWire_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 68,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_onewire_OneWire_scan + 4,
        .opcodes = fun_data_onewire_OneWire_scan + 15,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire__search_rom
static const FLASHMEM byte fun_data_onewire_OneWire__search_rom[180] = {
    0x73,0x3c, // prelude
    0x14,0x1d,0x23,0x24, // names: _search_rom, self, l_rom, diff
    0x80,0x3f,0x27,0x23,0x29,0x23,0x26,0x26,0x22,0x24,0x26,0x22,0x26,0x26,0x27,0x23,0x45,0x23,0x33,0x22,0x22,0x27,0x23,0x26,0x2d,0x2d, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0a, // LOAD_METHOD 'reset'
    0x36,0x00, // CALL_METHOD 0
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0x14,0x0f, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'SEARCH_ROM'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x43,0x46, // POP_JUMP_IF_TRUE 6
    0x12,0x25, // LOAD_GLOBAL 'bytearray'
    0x88, // LOAD_CONST_SMALL_INT 8
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0x12,0x25, // LOAD_GLOBAL 'bytearray'
    0x88, // LOAD_CONST_SMALL_INT 8
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc4, // STORE_FAST 4
    0x22,0x80,0x40, // LOAD_CONST_SMALL_INT 64
    0xc5, // STORE_FAST 5
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0xdc,0x80, // JUMP 92
    0x57, // DUP_TOP
    0xc6, // STORE_FAST 6
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc7, // STORE_FAST 7
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0xc7,0x80, // JUMP 71
    0x57, // DUP_TOP
    0xc8, // STORE_FAST 8
    0xb0, // LOAD_FAST 0
    0x14,0x0b, // LOAD_METHOD 'readbit'
    0x36,0x00, // CALL_METHOD 0
    0xc9, // STORE_FAST 9
    0xb0, // LOAD_FAST 0
    0x14,0x0b, // LOAD_METHOD 'readbit'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb9, // LOAD_FAST 9
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x63, // RETURN_VALUE
    0x42,0x5a, // JUMP 26
    0xb9, // LOAD_FAST 9
    0x43,0x57, // POP_JUMP_IF_TRUE 23
    0xb2, // LOAD_FAST 2
    0xb5, // LOAD_FAST 5
    0xd8, // BINARY_OP 1 __gt__
    0x43,0x4e, // POP_JUMP_IF_TRUE 14
    0xb1, // LOAD_FAST 1
    0xb6, // LOAD_FAST 6
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb8, // LOAD_FAST 8
    0xf0, // BINARY_OP 25 __lshift__
    0xef, // BINARY_OP 24 __and__
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb2, // LOAD_FAST 2
    0xb5, // LOAD_FAST 5
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0xc9, // STORE_FAST 9
    0xb5, // LOAD_FAST 5
    0xc4, // STORE_FAST 4
    0xb0, // LOAD_FAST 0
    0x14,0x0e, // LOAD_METHOD 'writebit'
    0xb9, // LOAD_FAST 9
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb9, // LOAD_FAST 9
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb7, // LOAD_FAST 7
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb8, // LOAD_FAST 8
    0xf0, // BINARY_OP 25 __lshift__
    0xe0, // BINARY_OP 9 __ior__
    0xc7, // STORE_FAST 7
    0xb5, // LOAD_FAST 5
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe6, // BINARY_OP 15 __isub__
    0xc5, // STORE_FAST 5
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x57, // DUP_TOP
    0x88, // LOAD_CONST_SMALL_INT 8
    0xd7, // BINARY_OP 0 __lt__
    0x43,0xb3,0x7f, // POP_JUMP_IF_TRUE -77
    0x59, // POP_TOP
    0xb7, // LOAD_FAST 7
    0xb3, // LOAD_FAST 3
    0xb6, // LOAD_FAST 6
    0x56, // STORE_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x57, // DUP_TOP
    0x88, // LOAD_CONST_SMALL_INT 8
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x9e,0x7f, // POP_JUMP_IF_TRUE -98
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x2a,0x02, // BUILD_TUPLE 2
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_onewire_OneWire__search_rom = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_onewire_OneWire__search_rom,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 180,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_onewire_OneWire__search_rom + 6,
        .opcodes = fun_data_onewire_OneWire__search_rom + 32,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of onewire_OneWire
// frozen bytecode for file onewire.py, scope onewire_OneWire_crc8
static const FLASHMEM byte fun_data_onewire_OneWire_crc8[15] = {
    0x22,0x0a, // prelude
    0x16,0x1d,0x26, // names: crc8, self, data
    0x80,0x5b, // code info
    0x12,0x17, // LOAD_GLOBAL '_ow'
    0x14,0x16, // LOAD_METHOD 'crc8'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_onewire_OneWire_crc8 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_onewire_OneWire_crc8,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_onewire_OneWire_crc8 + 5,
        .opcodes = fun_data_onewire_OneWire_crc8 + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_onewire_OneWire[] = {
    &raw_code_onewire_OneWire___init__,
    &raw_code_onewire_OneWire_reset,
    &raw_code_onewire_OneWire_readbit,
    &raw_code_onewire_OneWire_readbyte,
    &raw_code_onewire_OneWire_readinto,
    &raw_code_onewire_OneWire_writebit,
    &raw_code_onewire_OneWire_writebyte,
    &raw_code_onewire_OneWire_write,
    &raw_code_onewire_OneWire_select_rom,
    &raw_code_onewire_OneWire_scan,
    &raw_code_onewire_OneWire__search_rom,
    &raw_code_onewire_OneWire_crc8,
};

static const FLASHMEM mp_raw_code_t raw_code_onewire_OneWire = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_onewire_OneWire,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 103,
    #endif
    .children = (void *)&children_onewire_OneWire,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 12,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_onewire_OneWire + 3,
        .opcodes = fun_data_onewire_OneWire + 26,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_onewire__lt_module_gt_[] = {
    &raw_code_onewire_OneWireError,
    &raw_code_onewire_OneWire,
};

static const FLASHMEM mp_raw_code_t raw_code_onewire__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_onewire__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 35,
    #endif
    .children = (void *)&children_onewire__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_onewire__lt_module_gt_ + 3,
        .opcodes = fun_data_onewire__lt_module_gt_ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_onewire[39] = {
    MP_QSTR_onewire_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR__onewire,
    MP_QSTR_OneWireError,
    MP_QSTR_OneWire,
    MP_QSTR___init__,
    MP_QSTR_pin,
    MP_QSTR_init,
    MP_QSTR_OPEN_DRAIN,
    MP_QSTR_PULL_UP,
    MP_QSTR_reset,
    MP_QSTR_readbit,
    MP_QSTR_readbyte,
    MP_QSTR_readinto,
    MP_QSTR_writebit,
    MP_QSTR_writebyte,
    MP_QSTR_write,
    MP_QSTR_select_rom,
    MP_QSTR_MATCH_ROM,
    MP_QSTR_scan,
    MP_QSTR__search_rom,
    MP_QSTR_SEARCH_ROM,
    MP_QSTR_crc8,
    MP_QSTR__ow,
    MP_QSTR_Exception,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_SKIP_ROM,
    MP_QSTR_self,
    MP_QSTR_required,
    MP_QSTR_buf,
    MP_QSTR_len,
    MP_QSTR_value,
    MP_QSTR_rom,
    MP_QSTR_l_rom,
    MP_QSTR_diff,
    MP_QSTR_bytearray,
    MP_QSTR_data,
};

// constants
static const mp_rom_obj_tuple_t FLASHMEM const_obj_onewire_0 = {{&mp_type_tuple}, 2, {
    MP_ROM_NONE,
    MP_ROM_INT(0),
}};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_onewire[1] = {
    MP_ROM_PTR(&const_obj_onewire_0),
};

static const FLASHMEM mp_frozen_module_t frozen_module_onewire = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_onewire,
        .obj_table = (mp_obj_t *)&const_obj_table_data_onewire,
    },
    .rc = &raw_code_onewire__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module ds18x20
// - original source file: build-SHAREDLIB/frozen_mpy/ds18x20.mpy
// - frozen file name: ds18x20.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file ds18x20.py, scope ds18x20__lt_module_gt_
static const FLASHMEM byte fun_data_ds18x20__lt_module_gt_[29] = {
    0x10,0x08, // prelude
    0x01, // names: <module>
    0x60,0x8c,0x07, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'const'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'micropython'
    0x1c,0x02, // IMPORT_FROM 'const'
    0x16,0x02, // STORE_NAME 'const'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'DS18X20'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'DS18X20'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of ds18x20__lt_module_gt_
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20
static const FLASHMEM byte fun_data_ds18x20_DS18X20[48] = {
    0x00,0x18, // prelude
    0x04, // names: DS18X20
    0x88,0x0b,0x64,0x20,0x64,0x64,0x40,0x84,0x09,0x64,0x60, // code info
    0x11,0x16, // LOAD_NAME '__name__'
    0x16,0x17, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'DS18X20'
    0x16,0x18, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x05, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x08, // STORE_NAME 'scan'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x09, // STORE_NAME 'convert_temp'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x0d, // STORE_NAME 'read_scratch'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x12, // STORE_NAME 'write_scratch'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x14, // STORE_NAME 'read_temp'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20___init__
static const FLASHMEM byte fun_data_ds18x20_DS18X20___init__[22] = {
    0x1a,0x0c, // prelude
    0x05,0x19,0x1a, // names: __init__, self, onewire
    0x80,0x0c,0x24, // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'ow'
    0x12,0x1b, // LOAD_GLOBAL 'bytearray'
    0x89, // LOAD_CONST_SMALL_INT 9
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x07, // STORE_ATTR 'buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_ds18x20_DS18X20___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_ds18x20_DS18X20___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 22,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_ds18x20_DS18X20___init__ + 5,
        .opcodes = fun_data_ds18x20_DS18X20___init__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_scan
static const FLASHMEM byte fun_data_ds18x20_DS18X20_scan[18] = {
    0x19,0x08, // prelude
    0x08,0x19, // names: scan, self
    0x80,0x10, // code info
    0x32,0x00, // MAKE_FUNCTION 0
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x08, // LOAD_METHOD 'scan'
    0x36,0x00, // CALL_METHOD 0
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
// child of ds18x20_DS18X20_scan
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_scan__lt_listcomp_gt_
static const FLASHMEM byte fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_[27] = {
    0x41,0x08, // prelude
    0x15,0x1e, // names: <listcomp>, *
    0x80,0x10, // code info
    0x2b,0x00, // BUILD_LIST 0
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0x0e, // FOR_ITER 14
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xdd, // BINARY_OP 6 <in>
    0x44,0x35, // POP_JUMP_IF_FALSE -11
    0xb1, // LOAD_FAST 1
    0x2f,0x14, // STORE_COMP 20
    0x42,0x30, // JUMP -16
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_ds18x20_DS18X20_scan__lt_listcomp_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 27,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 21,
        .line_info = fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_ + 4,
        .opcodes = fun_data_ds18x20_DS18X20_scan__lt_listcomp_gt_ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_ds18x20_DS18X20_scan[] = {
    &raw_code_ds18x20_DS18X20_scan__lt_listcomp_gt_,
};

static const FLASHMEM mp_raw_code_t raw_code_ds18x20_DS18X20_scan = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_ds18x20_DS18X20_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 18,
    #endif
    .children = (void *)&children_ds18x20_DS18X20_scan,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_ds18x20_DS18X20_scan + 4,
        .opcodes = fun_data_ds18x20_DS18X20_scan + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_convert_temp
static const FLASHMEM byte fun_data_ds18x20_DS18X20_convert_temp[43] = {
    0x19,0x0c, // prelude
    0x09,0x19, // names: convert_temp, self
    0x80,0x13,0x29,0x2d, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0a, // LOAD_METHOD 'reset'
    0x52, // LOAD_CONST_TRUE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0b, // LOAD_METHOD 'writebyte'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x13,0x0c, // LOAD_ATTR 'SKIP_ROM'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0b, // LOAD_METHOD 'writebyte'
    0x22,0x80,0x44, // LOAD_CONST_SMALL_INT 68
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_ds18x20_DS18X20_convert_temp = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_ds18x20_DS18X20_convert_temp,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 43,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 9,
        .line_info = fun_data_ds18x20_DS18X20_convert_temp + 4,
        .opcodes = fun_data_ds18x20_DS18X20_convert_temp + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_read_scratch
static const FLASHMEM byte fun_data_ds18x20_DS18X20_read_scratch[76] = {
    0x22,0x16, // prelude
    0x0d,0x19,0x1c, // names: read_scratch, self, rom
    0x80,0x18,0x29,0x29,0x2b,0x2b,0x2c,0x27, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0a, // LOAD_METHOD 'reset'
    0x52, // LOAD_CONST_TRUE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0e, // LOAD_METHOD 'select_rom'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0b, // LOAD_METHOD 'writebyte'
    0x22,0x81,0x3e, // LOAD_CONST_SMALL_INT 190
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0f, // LOAD_METHOD 'readinto'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'buf'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x10, // LOAD_METHOD 'crc8'
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'buf'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x1d, // LOAD_GLOBAL 'Exception'
    0x10,0x11, // LOAD_CONST_STRING 'CRC error'
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x07, // LOAD_ATTR 'buf'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_ds18x20_DS18X20_read_scratch = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_ds18x20_DS18X20_read_scratch,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 76,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_ds18x20_DS18X20_read_scratch + 5,
        .opcodes = fun_data_ds18x20_DS18X20_read_scratch + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_write_scratch
static const FLASHMEM byte fun_data_ds18x20_DS18X20_write_scratch[51] = {
    0x2b,0x12, // prelude
    0x12,0x19,0x1c,0x07, // names: write_scratch, self, rom, buf
    0x80,0x21,0x29,0x29,0x2b, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0a, // LOAD_METHOD 'reset'
    0x52, // LOAD_CONST_TRUE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0e, // LOAD_METHOD 'select_rom'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x0b, // LOAD_METHOD 'writebyte'
    0x22,0x80,0x4e, // LOAD_CONST_SMALL_INT 78
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'ow'
    0x14,0x13, // LOAD_METHOD 'write'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_ds18x20_DS18X20_write_scratch = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_ds18x20_DS18X20_write_scratch,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 51,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_ds18x20_DS18X20_write_scratch + 6,
        .opcodes = fun_data_ds18x20_DS18X20_write_scratch + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of ds18x20_DS18X20
// frozen bytecode for file ds18x20.py, scope ds18x20_DS18X20_read_temp
static const FLASHMEM byte fun_data_ds18x20_DS18X20_read_temp[115] = {
    0x3a,0x1e, // prelude
    0x14,0x19,0x1c, // names: read_temp, self, rom
    0x80,0x27,0x27,0x27,0x25,0x2a,0x4c,0x26,0x51,0x2a,0x28,0x2a, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0d, // LOAD_METHOD 'read_scratch'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x90, // LOAD_CONST_SMALL_INT 16
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x72, // POP_JUMP_IF_FALSE 50
    0xb2, // LOAD_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf1, // BINARY_OP 26 __rshift__
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0xed, // BINARY_OP 22 __or__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0xd2, // UNARY_OP 2 __invert__
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf2, // BINARY_OP 27 __add__
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xef, // BINARY_OP 24 __and__
    0xd1, // UNARY_OP 1 __neg__
    0xc3, // STORE_FAST 3
    0x42,0x46, // JUMP 6
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf1, // BINARY_OP 26 __rshift__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xf3, // BINARY_OP 28 __sub__
    0xb2, // LOAD_FAST 2
    0x87, // LOAD_CONST_SMALL_INT 7
    0x55, // LOAD_SUBSCR
    0xb2, // LOAD_FAST 2
    0x86, // LOAD_CONST_SMALL_INT 6
    0x55, // LOAD_SUBSCR
    0xf3, // BINARY_OP 28 __sub__
    0xb2, // LOAD_FAST 2
    0x87, // LOAD_CONST_SMALL_INT 7
    0x55, // LOAD_SUBSCR
    0xf7, // BINARY_OP 32 __truediv__
    0xf2, // BINARY_OP 27 __add__
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x22,0x82,0x80,0x00, // LOAD_CONST_SMALL_INT 32768
    0xef, // BINARY_OP 24 __and__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0xb3, // LOAD_FAST 3
    0x22,0x83,0xff,0x7f, // LOAD_CONST_SMALL_INT 65535
    0xee, // BINARY_OP 23 __xor__
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf2, // BINARY_OP 27 __add__
    0xd1, // UNARY_OP 1 __neg__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x90, // LOAD_CONST_SMALL_INT 16
    0xf7, // BINARY_OP 32 __truediv__
    0x63, // RETURN_VALUE
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_ds18x20_DS18X20_read_temp = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_ds18x20_DS18X20_read_temp,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 115,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_ds18x20_DS18X20_read_temp + 5,
        .opcodes = fun_data_ds18x20_DS18X20_read_temp + 17,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_ds18x20_DS18X20[] = {
    &raw_code_ds18x20_DS18X20___init__,
    &raw_code_ds18x20_DS18X20_scan,
    &raw_code_ds18x20_DS18X20_convert_temp,
    &raw_code_ds18x20_DS18X20_read_scratch,
    &raw_code_ds18x20_DS18X20_write_scratch,
    &raw_code_ds18x20_DS18X20_read_temp,
};

static const FLASHMEM mp_raw_code_t raw_code_ds18x20_DS18X20 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_ds18x20_DS18X20,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 48,
    #endif
    .children = (void *)&children_ds18x20_DS18X20,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_ds18x20_DS18X20 + 3,
        .opcodes = fun_data_ds18x20_DS18X20 + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_ds18x20__lt_module_gt_[] = {
    &raw_code_ds18x20_DS18X20,
};

static const FLASHMEM mp_raw_code_t raw_code_ds18x20__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_ds18x20__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 29,
    #endif
    .children = (void *)&children_ds18x20__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_ds18x20__lt_module_gt_ + 3,
        .opcodes = fun_data_ds18x20__lt_module_gt_ + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_ds18x20[31] = {
    MP_QSTR_ds18x20_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_const,
    MP_QSTR_micropython,
    MP_QSTR_DS18X20,
    MP_QSTR___init__,
    MP_QSTR_ow,
    MP_QSTR_buf,
    MP_QSTR_scan,
    MP_QSTR_convert_temp,
    MP_QSTR_reset,
    MP_QSTR_writebyte,
    MP_QSTR_SKIP_ROM,
    MP_QSTR_read_scratch,
    MP_QSTR_select_rom,
    MP_QSTR_readinto,
    MP_QSTR_crc8,
    MP_QSTR_CRC_space_error,
    MP_QSTR_write_scratch,
    MP_QSTR_write,
    MP_QSTR_read_temp,
    MP_QSTR__lt_listcomp_gt_,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_onewire,
    MP_QSTR_bytearray,
    MP_QSTR_rom,
    MP_QSTR_Exception,
    MP_QSTR__star_,
};

// constants
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
static const mp_obj_float_t FLASHMEM const_obj_ds18x20_0 = {{&mp_type_float}, (mp_float_t)0.25};
#define const_obj_ds18x20_0_macro MP_ROM_PTR(&const_obj_ds18x20_0)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
#define const_obj_ds18x20_0_macro MP_ROM_PTR(&13822673156306894848)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
#define const_obj_ds18x20_0_macro MP_ROM_PTR(&13822673156306894848)
#endif
static const mp_rom_obj_tuple_t FLASHMEM const_obj_ds18x20_1 = {{&mp_type_tuple}, 3, {
    MP_ROM_INT(16),
    MP_ROM_INT(34),
    MP_ROM_INT(40),
}};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_ds18x20[2] = {
    const_obj_ds18x20_0_macro,
    MP_ROM_PTR(&const_obj_ds18x20_1),
};

static const FLASHMEM mp_frozen_module_t frozen_module_ds18x20 = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_ds18x20,
        .obj_table = (mp_obj_t *)&const_obj_table_data_ds18x20,
    },
    .rc = &raw_code_ds18x20__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module dht
// - original source file: build-SHAREDLIB/frozen_mpy/dht.mpy
// - frozen file name: dht.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file dht.py, scope dht__lt_module_gt_
static const FLASHMEM byte fun_data_dht__lt_module_gt_[165] = {
    0x18,0x20, // prelude
    0x01, // names: <module>
    0x60,0x46,0x2c,0x2f,0x29,0x2e,0x29,0x2e,0x29,0x4e,0x6c,0x89,0x0c,0x8b,0x08, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'sys'
    0x16,0x02, // STORE_NAME 'sys'
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x03, // LOAD_ATTR 'platform'
    0x14,0x04, // LOAD_METHOD 'startswith'
    0x10,0x05, // LOAD_CONST_STRING 'esp'
    0x36,0x01, // CALL_METHOD 1
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x06, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x05, // IMPORT_NAME 'esp'
    0x1c,0x06, // IMPORT_FROM 'dht_readinto'
    0x16,0x06, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x42,0xd1,0x80, // JUMP 81
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x03, // LOAD_ATTR 'platform'
    0x10,0x07, // LOAD_CONST_STRING 'mimxrt'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x06, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x07, // IMPORT_NAME 'mimxrt'
    0x1c,0x06, // IMPORT_FROM 'dht_readinto'
    0x16,0x06, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x42,0x7a, // JUMP 58
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x03, // LOAD_ATTR 'platform'
    0x10,0x08, // LOAD_CONST_STRING 'rp2'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x06, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x08, // IMPORT_NAME 'rp2'
    0x1c,0x06, // IMPORT_FROM 'dht_readinto'
    0x16,0x06, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x42,0x63, // JUMP 35
    0x11,0x02, // LOAD_NAME 'sys'
    0x13,0x03, // LOAD_ATTR 'platform'
    0x10,0x09, // LOAD_CONST_STRING 'pyboard'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x06, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0a, // IMPORT_NAME 'pyb'
    0x1c,0x06, // IMPORT_FROM 'dht_readinto'
    0x16,0x06, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x42,0x4c, // JUMP 12
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x06, // LOAD_CONST_STRING 'dht_readinto'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0b, // IMPORT_NAME 'machine'
    0x1c,0x06, // IMPORT_FROM 'dht_readinto'
    0x16,0x06, // STORE_NAME 'dht_readinto'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x0c, // LOAD_CONST_STRING 'DHTBase'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x0c, // STORE_NAME 'DHTBase'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x0d, // LOAD_CONST_STRING 'DHT11'
    0x11,0x0c, // LOAD_NAME 'DHTBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0d, // STORE_NAME 'DHT11'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x0e, // LOAD_CONST_STRING 'DHT22'
    0x11,0x0c, // LOAD_NAME 'DHTBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0e, // STORE_NAME 'DHT22'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht__lt_module_gt_
// frozen bytecode for file dht.py, scope dht_DHTBase
static const FLASHMEM byte fun_data_dht_DHTBase[25] = {
    0x00,0x0a, // prelude
    0x0c, // names: DHTBase
    0x88,0x12,0x64,0x20, // code info
    0x11,0x15, // LOAD_NAME '__name__'
    0x16,0x16, // STORE_NAME '__module__'
    0x10,0x0c, // LOAD_CONST_STRING 'DHTBase'
    0x16,0x17, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x0f, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x12, // STORE_NAME 'measure'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht_DHTBase
// frozen bytecode for file dht.py, scope dht_DHTBase___init__
static const FLASHMEM byte fun_data_dht_DHTBase___init__[22] = {
    0x1a,0x0c, // prelude
    0x0f,0x18,0x10, // names: __init__, self, pin
    0x80,0x13,0x24, // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x10, // STORE_ATTR 'pin'
    0x12,0x19, // LOAD_GLOBAL 'bytearray'
    0x85, // LOAD_CONST_SMALL_INT 5
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x18,0x11, // STORE_ATTR 'buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_dht_DHTBase___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_dht_DHTBase___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 22,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_dht_DHTBase___init__ + 5,
        .opcodes = fun_data_dht_DHTBase___init__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht_DHTBase
// frozen bytecode for file dht.py, scope dht_DHTBase_measure
static const FLASHMEM byte fun_data_dht_DHTBase_measure[56] = {
    0x21,0x0e, // prelude
    0x12,0x18, // names: measure, self
    0x80,0x17,0x24,0x29,0x39, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0xc1, // STORE_FAST 1
    0x12,0x06, // LOAD_GLOBAL 'dht_readinto'
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'pin'
    0xb1, // LOAD_FAST 1
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0xb1, // LOAD_FAST 1
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0xb1, // LOAD_FAST 1
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0xf2, // BINARY_OP 27 __add__
    0x22,0x81,0x7f, // LOAD_CONST_SMALL_INT 255
    0xef, // BINARY_OP 24 __and__
    0xb1, // LOAD_FAST 1
    0x84, // LOAD_CONST_SMALL_INT 4
    0x55, // LOAD_SUBSCR
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x1a, // LOAD_GLOBAL 'Exception'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_dht_DHTBase_measure = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHTBase_measure,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 56,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_dht_DHTBase_measure + 4,
        .opcodes = fun_data_dht_DHTBase_measure + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_dht_DHTBase[] = {
    &raw_code_dht_DHTBase___init__,
    &raw_code_dht_DHTBase_measure,
};

static const FLASHMEM mp_raw_code_t raw_code_dht_DHTBase = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht_DHTBase,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = (void *)&children_dht_DHTBase,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_dht_DHTBase + 3,
        .opcodes = fun_data_dht_DHTBase + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht__lt_module_gt_
// frozen bytecode for file dht.py, scope dht_DHT11
static const FLASHMEM byte fun_data_dht_DHT11[24] = {
    0x00,0x08, // prelude
    0x0d, // names: DHT11
    0x88,0x1e,0x64, // code info
    0x11,0x15, // LOAD_NAME '__name__'
    0x16,0x16, // STORE_NAME '__module__'
    0x10,0x0d, // LOAD_CONST_STRING 'DHT11'
    0x16,0x17, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x13, // STORE_NAME 'humidity'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x14, // STORE_NAME 'temperature'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht_DHT11
// frozen bytecode for file dht.py, scope dht_DHT11_humidity
static const FLASHMEM byte fun_data_dht_DHT11_humidity[12] = {
    0x11,0x08, // prelude
    0x13,0x18, // names: humidity, self
    0x80,0x1f, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_dht_DHT11_humidity = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHT11_humidity,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 12,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_dht_DHT11_humidity + 4,
        .opcodes = fun_data_dht_DHT11_humidity + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht_DHT11
// frozen bytecode for file dht.py, scope dht_DHT11_temperature
static const FLASHMEM byte fun_data_dht_DHT11_temperature[12] = {
    0x11,0x08, // prelude
    0x14,0x18, // names: temperature, self
    0x80,0x22, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_dht_DHT11_temperature = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHT11_temperature,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 12,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_dht_DHT11_temperature + 4,
        .opcodes = fun_data_dht_DHT11_temperature + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_dht_DHT11[] = {
    &raw_code_dht_DHT11_humidity,
    &raw_code_dht_DHT11_temperature,
};

static const FLASHMEM mp_raw_code_t raw_code_dht_DHT11 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht_DHT11,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = (void *)&children_dht_DHT11,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_dht_DHT11 + 3,
        .opcodes = fun_data_dht_DHT11 + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht__lt_module_gt_
// frozen bytecode for file dht.py, scope dht_DHT22
static const FLASHMEM byte fun_data_dht_DHT22[24] = {
    0x00,0x08, // prelude
    0x0e, // names: DHT22
    0x88,0x26,0x64, // code info
    0x11,0x15, // LOAD_NAME '__name__'
    0x16,0x16, // STORE_NAME '__module__'
    0x10,0x0e, // LOAD_CONST_STRING 'DHT22'
    0x16,0x17, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x13, // STORE_NAME 'humidity'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x14, // STORE_NAME 'temperature'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of dht_DHT22
// frozen bytecode for file dht.py, scope dht_DHT22_humidity
static const FLASHMEM byte fun_data_dht_DHT22_humidity[23] = {
    0x19,0x08, // prelude
    0x13,0x18, // names: humidity, self
    0x80,0x27, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xf4, // BINARY_OP 29 __mul__
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_dht_DHT22_humidity = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHT22_humidity,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 23,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_dht_DHT22_humidity + 4,
        .opcodes = fun_data_dht_DHT22_humidity + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of dht_DHT22
// frozen bytecode for file dht.py, scope dht_DHT22_temperature
static const FLASHMEM byte fun_data_dht_DHT22_temperature[46] = {
    0x21,0x0e, // prelude
    0x14,0x18, // names: temperature, self
    0x80,0x2a,0x35,0x2b,0x23, // code info
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x22,0x80,0x7f, // LOAD_CONST_SMALL_INT 127
    0xef, // BINARY_OP 24 __and__
    0x88, // LOAD_CONST_SMALL_INT 8
    0xf0, // BINARY_OP 25 __lshift__
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x55, // LOAD_SUBSCR
    0xed, // BINARY_OP 22 __or__
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xf4, // BINARY_OP 29 __mul__
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x11, // LOAD_ATTR 'buf'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x22,0x81,0x00, // LOAD_CONST_SMALL_INT 128
    0xef, // BINARY_OP 24 __and__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0xb1, // LOAD_FAST 1
    0xd1, // UNARY_OP 1 __neg__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_dht_DHT22_temperature = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_dht_DHT22_temperature,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 46,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_dht_DHT22_temperature + 4,
        .opcodes = fun_data_dht_DHT22_temperature + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_dht_DHT22[] = {
    &raw_code_dht_DHT22_humidity,
    &raw_code_dht_DHT22_temperature,
};

static const FLASHMEM mp_raw_code_t raw_code_dht_DHT22 = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht_DHT22,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = (void *)&children_dht_DHT22,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_dht_DHT22 + 3,
        .opcodes = fun_data_dht_DHT22 + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_dht__lt_module_gt_[] = {
    &raw_code_dht_DHTBase,
    &raw_code_dht_DHT11,
    &raw_code_dht_DHT22,
};

static const FLASHMEM mp_raw_code_t raw_code_dht__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_dht__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 165,
    #endif
    .children = (void *)&children_dht__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 3,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_dht__lt_module_gt_ + 3,
        .opcodes = fun_data_dht__lt_module_gt_ + 18,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_dht[27] = {
    MP_QSTR_dht_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sys,
    MP_QSTR_platform,
    MP_QSTR_startswith,
    MP_QSTR_esp,
    MP_QSTR_dht_readinto,
    MP_QSTR_mimxrt,
    MP_QSTR_rp2,
    MP_QSTR_pyboard,
    MP_QSTR_pyb,
    MP_QSTR_machine,
    MP_QSTR_DHTBase,
    MP_QSTR_DHT11,
    MP_QSTR_DHT22,
    MP_QSTR___init__,
    MP_QSTR_pin,
    MP_QSTR_buf,
    MP_QSTR_measure,
    MP_QSTR_humidity,
    MP_QSTR_temperature,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_bytearray,
    MP_QSTR_Exception,
};

// constants
#if MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_A || MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_B
static const mp_obj_float_t FLASHMEM const_obj_dht_1 = {{&mp_type_float}, (mp_float_t)0.1};
#define const_obj_dht_1_macro MP_ROM_PTR(&const_obj_dht_1)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_C
#define const_obj_dht_1_macro MP_ROM_PTR(&13816368116828576154)
#elif MICROPY_OBJ_REPR == MICROPY_OBJ_REPR_D
#define const_obj_dht_1_macro MP_ROM_PTR(&13816368116828576154)
#endif

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_dht[2] = {
    MP_ROM_QSTR(MP_QSTR_checksum_space_error),
    const_obj_dht_1_macro,
};

static const FLASHMEM mp_frozen_module_t frozen_module_dht = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_dht,
        .obj_table = (mp_obj_t *)&const_obj_table_data_dht,
    },
    .rc = &raw_code_dht__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module uasyncio___init__
// - original source file: build-SHAREDLIB/frozen_mpy/uasyncio/__init__.mpy
// - frozen file name: uasyncio/__init__.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file uasyncio/__init__.py, scope uasyncio___init____lt_module_gt_
static const FLASHMEM byte fun_data_uasyncio___init____lt_module_gt_[75] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING '*'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME 'core'
    0x69, // IMPORT_STAR
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x16,0x0e, // STORE_NAME '__version__'
    0x2c,0x0a, // BUILD_MAP 10
    0x10,0x04, // LOAD_CONST_STRING 'funcs'
    0x10,0x05, // LOAD_CONST_STRING 'wait_for'
    0x62, // STORE_MAP
    0x10,0x04, // LOAD_CONST_STRING 'funcs'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x62, // STORE_MAP
    0x10,0x04, // LOAD_CONST_STRING 'funcs'
    0x10,0x06, // LOAD_CONST_STRING 'gather'
    0x62, // STORE_MAP
    0x10,0x07, // LOAD_CONST_STRING 'event'
    0x10,0x08, // LOAD_CONST_STRING 'Event'
    0x62, // STORE_MAP
    0x10,0x07, // LOAD_CONST_STRING 'event'
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x62, // STORE_MAP
    0x10,0x09, // LOAD_CONST_STRING 'lock'
    0x10,0x0a, // LOAD_CONST_STRING 'Lock'
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x04, // LOAD_CONST_OBJ 4
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x05, // LOAD_CONST_OBJ 5
    0x62, // STORE_MAP
    0x10,0x0b, // LOAD_CONST_STRING 'stream'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0x62, // STORE_MAP
    0x16,0x0f, // STORE_NAME '_attrs'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x0c, // STORE_NAME '__getattr__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio___init____lt_module_gt_
// frozen bytecode for file uasyncio/__init__.py, scope uasyncio___init_____getattr__
static const FLASHMEM byte fun_data_uasyncio___init_____getattr__[48] = {
    0x49,0x04, // prelude
    0x0c,0x10, // names: __getattr__, attr
     // code info
    0x12,0x0f, // LOAD_GLOBAL '_attrs'
    0x14,0x0d, // LOAD_METHOD 'get'
    0xb0, // LOAD_FAST 0
    0x51, // LOAD_CONST_NONE
    0x36,0x02, // CALL_METHOD 2
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x11, // LOAD_GLOBAL 'AttributeError'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x12,0x12, // LOAD_GLOBAL 'getattr'
    0x12,0x13, // LOAD_GLOBAL '__import__'
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x52, // LOAD_CONST_TRUE
    0x81, // LOAD_CONST_SMALL_INT 1
    0x34,0x05, // CALL_FUNCTION 5
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x12,0x14, // LOAD_GLOBAL 'globals'
    0x34,0x00, // CALL_FUNCTION 0
    0xb0, // LOAD_FAST 0
    0x56, // STORE_SUBSCR
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio___init_____getattr__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio___init_____getattr__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 48,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_uasyncio___init_____getattr__ + 4,
        .opcodes = fun_data_uasyncio___init_____getattr__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio___init____lt_module_gt_[] = {
    &raw_code_uasyncio___init_____getattr__,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio___init____lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 75,
    #endif
    .children = (void *)&children_uasyncio___init____lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_uasyncio___init____lt_module_gt_ + 3,
        .opcodes = fun_data_uasyncio___init____lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_uasyncio___init__[21] = {
    MP_QSTR_uasyncio_slash___init___dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR__star_,
    MP_QSTR_core,
    MP_QSTR_funcs,
    MP_QSTR_wait_for,
    MP_QSTR_gather,
    MP_QSTR_event,
    MP_QSTR_Event,
    MP_QSTR_lock,
    MP_QSTR_Lock,
    MP_QSTR_stream,
    MP_QSTR___getattr__,
    MP_QSTR_get,
    MP_QSTR___version__,
    MP_QSTR__attrs,
    MP_QSTR_attr,
    MP_QSTR_AttributeError,
    MP_QSTR_getattr,
    MP_QSTR___import__,
    MP_QSTR_globals,
};

// constants
static const mp_rom_obj_tuple_t FLASHMEM const_obj_uasyncio___init___0 = {{&mp_type_tuple}, 3, {
    MP_ROM_INT(3),
    MP_ROM_INT(0),
    MP_ROM_INT(0),
}};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_uasyncio___init__[7] = {
    MP_ROM_PTR(&const_obj_uasyncio___init___0),
    MP_ROM_QSTR(MP_QSTR_wait_for_ms),
    MP_ROM_QSTR(MP_QSTR_ThreadSafeFlag),
    MP_ROM_QSTR(MP_QSTR_open_connection),
    MP_ROM_QSTR(MP_QSTR_start_server),
    MP_ROM_QSTR(MP_QSTR_StreamReader),
    MP_ROM_QSTR(MP_QSTR_StreamWriter),
};

static const FLASHMEM mp_frozen_module_t frozen_module_uasyncio___init__ = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_uasyncio___init__,
        .obj_table = (mp_obj_t *)&const_obj_table_data_uasyncio___init__,
    },
    .rc = &raw_code_uasyncio___init____lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module uasyncio_core
// - original source file: build-SHAREDLIB/frozen_mpy/uasyncio/core.mpy
// - frozen file name: uasyncio/core.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__lt_module_gt_
static const FLASHMEM byte fun_data_uasyncio_core__lt_module_gt_[215] = {
    0x2c,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x02, // LOAD_CONST_STRING 'ticks_ms'
    0x10,0x03, // LOAD_CONST_STRING 'ticks_diff'
    0x10,0x04, // LOAD_CONST_STRING 'ticks_add'
    0x2a,0x03, // BUILD_TUPLE 3
    0x1b,0x05, // IMPORT_NAME 'time'
    0x1c,0x02, // IMPORT_FROM 'ticks_ms'
    0x16,0x47, // STORE_NAME 'ticks'
    0x1c,0x03, // IMPORT_FROM 'ticks_diff'
    0x16,0x03, // STORE_NAME 'ticks_diff'
    0x1c,0x04, // IMPORT_FROM 'ticks_add'
    0x16,0x04, // STORE_NAME 'ticks_add'
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x06, // IMPORT_NAME 'sys'
    0x16,0x06, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x07, // IMPORT_NAME 'select'
    0x16,0x07, // STORE_NAME 'select'
    0x48,0x14, // SETUP_EXCEPT 20
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x08, // LOAD_CONST_STRING 'TaskQueue'
    0x10,0x09, // LOAD_CONST_STRING 'Task'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x0a, // IMPORT_NAME '_uasyncio'
    0x1c,0x08, // IMPORT_FROM 'TaskQueue'
    0x16,0x08, // STORE_NAME 'TaskQueue'
    0x1c,0x09, // IMPORT_FROM 'Task'
    0x16,0x09, // STORE_NAME 'Task'
    0x59, // POP_TOP
    0x4a,0x16, // POP_EXCEPT_JUMP 22
    0x59, // POP_TOP
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x08, // LOAD_CONST_STRING 'TaskQueue'
    0x10,0x09, // LOAD_CONST_STRING 'Task'
    0x2a,0x02, // BUILD_TUPLE 2
    0x1b,0x0b, // IMPORT_NAME 'task'
    0x1c,0x08, // IMPORT_FROM 'TaskQueue'
    0x16,0x08, // STORE_NAME 'TaskQueue'
    0x1c,0x09, // IMPORT_FROM 'Task'
    0x16,0x09, // STORE_NAME 'Task'
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x0c, // LOAD_CONST_STRING 'CancelledError'
    0x11,0x48, // LOAD_NAME 'BaseException'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0c, // STORE_NAME 'CancelledError'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x0d, // LOAD_CONST_STRING 'TimeoutError'
    0x11,0x49, // LOAD_NAME 'Exception'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0d, // STORE_NAME 'TimeoutError'
    0x2c,0x03, // BUILD_MAP 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x10,0x0e, // LOAD_CONST_STRING 'message'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x0f, // LOAD_CONST_STRING 'exception'
    0x62, // STORE_MAP
    0x51, // LOAD_CONST_NONE
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x62, // STORE_MAP
    0x16,0x4a, // STORE_NAME '_exc_context'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x11, // LOAD_CONST_STRING 'SingletonGenerator'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x11, // STORE_NAME 'SingletonGenerator'
    0x11,0x11, // LOAD_NAME 'SingletonGenerator'
    0x34,0x00, // CALL_FUNCTION 0
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x03, // MAKE_FUNCTION_DEFARGS 3
    0x16,0x14, // STORE_NAME 'sleep_ms'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x16, // STORE_NAME 'sleep'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x05, // MAKE_FUNCTION 5
    0x10,0x12, // LOAD_CONST_STRING 'IOQueue'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x12, // STORE_NAME 'IOQueue'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x17, // STORE_NAME '_promote_to_task'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x18, // STORE_NAME 'create_task'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x08, // MAKE_FUNCTION_DEFARGS 8
    0x16,0x1b, // STORE_NAME 'run_until_complete'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x26, // STORE_NAME 'run'
    0x32,0x0a, // MAKE_FUNCTION 10
    0x16,0x27, // STORE_NAME '_stopper'
    0x51, // LOAD_CONST_NONE
    0x17,0x4b, // STORE_GLOBAL '_stop_task'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x0b, // MAKE_FUNCTION 11
    0x10,0x13, // LOAD_CONST_STRING 'Loop'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x13, // STORE_NAME 'Loop'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x80, // LOAD_CONST_SMALL_INT 0
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x0c, // MAKE_FUNCTION_DEFARGS 12
    0x16,0x28, // STORE_NAME 'get_event_loop'
    0x32,0x0d, // MAKE_FUNCTION 13
    0x16,0x29, // STORE_NAME 'current_task'
    0x32,0x0e, // MAKE_FUNCTION 14
    0x16,0x2a, // STORE_NAME 'new_event_loop'
    0x11,0x2a, // LOAD_NAME 'new_event_loop'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_CancelledError
static const FLASHMEM byte fun_data_uasyncio_core_CancelledError[13] = {
    0x00,0x02, // prelude
    0x0c, // names: CancelledError
     // code info
    0x11,0x4c, // LOAD_NAME '__name__'
    0x16,0x4d, // STORE_NAME '__module__'
    0x10,0x0c, // LOAD_CONST_STRING 'CancelledError'
    0x16,0x4e, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_CancelledError = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_CancelledError,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 13,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_uasyncio_core_CancelledError + 3,
        .opcodes = fun_data_uasyncio_core_CancelledError + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_TimeoutError
static const FLASHMEM byte fun_data_uasyncio_core_TimeoutError[13] = {
    0x00,0x02, // prelude
    0x0d, // names: TimeoutError
     // code info
    0x11,0x4c, // LOAD_NAME '__name__'
    0x16,0x4d, // STORE_NAME '__module__'
    0x10,0x0d, // LOAD_CONST_STRING 'TimeoutError'
    0x16,0x4e, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_TimeoutError = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_TimeoutError,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 13,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_uasyncio_core_TimeoutError + 3,
        .opcodes = fun_data_uasyncio_core_TimeoutError + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_SingletonGenerator
static const FLASHMEM byte fun_data_uasyncio_core_SingletonGenerator[25] = {
    0x00,0x02, // prelude
    0x11, // names: SingletonGenerator
     // code info
    0x11,0x4c, // LOAD_NAME '__name__'
    0x16,0x4d, // STORE_NAME '__module__'
    0x10,0x11, // LOAD_CONST_STRING 'SingletonGenerator'
    0x16,0x4e, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x2b, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x2d, // STORE_NAME '__iter__'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x2e, // STORE_NAME '__next__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_core_SingletonGenerator
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_SingletonGenerator___init__
static const FLASHMEM byte fun_data_uasyncio_core_SingletonGenerator___init__[17] = {
    0x11,0x04, // prelude
    0x2b,0x60, // names: __init__, self
     // code info
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x15, // STORE_ATTR 'state'
    0x12,0x5a, // LOAD_GLOBAL 'StopIteration'
    0x34,0x00, // CALL_FUNCTION 0
    0xb0, // LOAD_FAST 0
    0x18,0x2c, // STORE_ATTR 'exc'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_SingletonGenerator___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_SingletonGenerator___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 17,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 43,
        .line_info = fun_data_uasyncio_core_SingletonGenerator___init__ + 4,
        .opcodes = fun_data_uasyncio_core_SingletonGenerator___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_SingletonGenerator
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_SingletonGenerator___iter__
static const FLASHMEM byte fun_data_uasyncio_core_SingletonGenerator___iter__[6] = {
    0x09,0x04, // prelude
    0x2d,0x60, // names: __iter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_SingletonGenerator___iter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_SingletonGenerator___iter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 45,
        .line_info = fun_data_uasyncio_core_SingletonGenerator___iter__ + 4,
        .opcodes = fun_data_uasyncio_core_SingletonGenerator___iter__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_SingletonGenerator
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_SingletonGenerator___next__
static const FLASHMEM byte fun_data_uasyncio_core_SingletonGenerator___next__[42] = {
    0x21,0x04, // prelude
    0x2e,0x60, // names: __next__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0x12,0x5c, // LOAD_GLOBAL 'cur_task'
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'state'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x15, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x13,0x2c, // LOAD_ATTR 'exc'
    0x18,0x2f, // STORE_ATTR '__traceback__'
    0xb0, // LOAD_FAST 0
    0x13,0x2c, // LOAD_ATTR 'exc'
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_SingletonGenerator___next__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_SingletonGenerator___next__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 42,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 46,
        .line_info = fun_data_uasyncio_core_SingletonGenerator___next__ + 4,
        .opcodes = fun_data_uasyncio_core_SingletonGenerator___next__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_core_SingletonGenerator[] = {
    &raw_code_uasyncio_core_SingletonGenerator___init__,
    &raw_code_uasyncio_core_SingletonGenerator___iter__,
    &raw_code_uasyncio_core_SingletonGenerator___next__,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_SingletonGenerator = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_SingletonGenerator,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = (void *)&children_uasyncio_core_SingletonGenerator,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 3,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_uasyncio_core_SingletonGenerator + 3,
        .opcodes = fun_data_uasyncio_core_SingletonGenerator + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_sleep_ms
static const FLASHMEM byte fun_data_uasyncio_core_sleep_ms[25] = {
    0xb2,0x01,0x06, // prelude
    0x14,0x4f,0x50, // names: sleep_ms, t, sgen
     // code info
    0x12,0x04, // LOAD_GLOBAL 'ticks_add'
    0x12,0x47, // LOAD_GLOBAL 'ticks'
    0x34,0x00, // CALL_FUNCTION 0
    0x12,0x51, // LOAD_GLOBAL 'max'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x34,0x02, // CALL_FUNCTION 2
    0xb1, // LOAD_FAST 1
    0x18,0x15, // STORE_ATTR 'state'
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_sleep_ms = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_sleep_ms,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_uasyncio_core_sleep_ms + 6,
        .opcodes = fun_data_uasyncio_core_sleep_ms + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_sleep
static const FLASHMEM byte fun_data_uasyncio_core_sleep[18] = {
    0x21,0x04, // prelude
    0x16,0x4f, // names: sleep, t
     // code info
    0x12,0x14, // LOAD_GLOBAL 'sleep_ms'
    0x12,0x52, // LOAD_GLOBAL 'int'
    0xb0, // LOAD_FAST 0
    0x22,0x87,0x68, // LOAD_CONST_SMALL_INT 1000
    0xf4, // BINARY_OP 29 __mul__
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_sleep = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_sleep,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 18,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_uasyncio_core_sleep + 4,
        .opcodes = fun_data_uasyncio_core_sleep + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue
static const FLASHMEM byte fun_data_uasyncio_core_IOQueue[41] = {
    0x00,0x02, // prelude
    0x12, // names: IOQueue
     // code info
    0x11,0x4c, // LOAD_NAME '__name__'
    0x16,0x4d, // STORE_NAME '__module__'
    0x10,0x12, // LOAD_CONST_STRING 'IOQueue'
    0x16,0x4e, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x2b, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x32, // STORE_NAME '_enqueue'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x37, // STORE_NAME '_dequeue'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x39, // STORE_NAME 'queue_read'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x3a, // STORE_NAME 'queue_write'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x3b, // STORE_NAME 'remove'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x1f, // STORE_NAME 'wait_io_event'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_core_IOQueue
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue___init__
static const FLASHMEM byte fun_data_uasyncio_core_IOQueue___init__[20] = {
    0x11,0x04, // prelude
    0x2b,0x60, // names: __init__, self
     // code info
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x14,0x30, // LOAD_METHOD 'poll'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x31, // STORE_ATTR 'poller'
    0x2c,0x00, // BUILD_MAP 0
    0xb0, // LOAD_FAST 0
    0x18,0x1e, // STORE_ATTR 'map'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_IOQueue___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_IOQueue___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 20,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 43,
        .line_info = fun_data_uasyncio_core_IOQueue___init__ + 4,
        .opcodes = fun_data_uasyncio_core_IOQueue___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_IOQueue
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue__enqueue
static const FLASHMEM byte fun_data_uasyncio_core_IOQueue__enqueue[105] = {
    0x4b,0x08, // prelude
    0x32,0x60,0x61,0x62, // names: _enqueue, self, s, idx
     // code info
    0x12,0x63, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0xdd, // BINARY_OP 6 <in>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x6f, // POP_JUMP_IF_FALSE 47
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xb1, // LOAD_FAST 1
    0x2b,0x03, // BUILD_LIST 3
    0xc3, // STORE_FAST 3
    0x12,0x5c, // LOAD_GLOBAL 'cur_task'
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x63, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x33, // LOAD_METHOD 'register'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0x42,0x44, // JUMP 4
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x61, // JUMP 33
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x63, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0x12,0x5c, // LOAD_GLOBAL 'cur_task'
    0xb4, // LOAD_FAST 4
    0xb2, // LOAD_FAST 2
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x36, // LOAD_METHOD 'modify'
    0xb1, // LOAD_FAST 1
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0xed, // BINARY_OP 22 __or__
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x12,0x5c, // LOAD_GLOBAL 'cur_task'
    0x18,0x21, // STORE_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_IOQueue__enqueue = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_core_IOQueue__enqueue,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 105,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 50,
        .line_info = fun_data_uasyncio_core_IOQueue__enqueue + 6,
        .opcodes = fun_data_uasyncio_core_IOQueue__enqueue + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_IOQueue
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue__dequeue
static const FLASHMEM byte fun_data_uasyncio_core_IOQueue__dequeue[27] = {
    0x22,0x06, // prelude
    0x37,0x60,0x61, // names: _dequeue, self, s
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x63, // LOAD_GLOBAL 'id'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x53, // LOAD_NULL
    0x5b, // ROT_THREE
    0x56, // STORE_SUBSCR
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x38, // LOAD_METHOD 'unregister'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_IOQueue__dequeue = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_IOQueue__dequeue,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 27,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 55,
        .line_info = fun_data_uasyncio_core_IOQueue__dequeue + 5,
        .opcodes = fun_data_uasyncio_core_IOQueue__dequeue + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_IOQueue
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue_queue_read
static const FLASHMEM byte fun_data_uasyncio_core_IOQueue_queue_read[15] = {
    0x2a,0x06, // prelude
    0x39,0x60,0x61, // names: queue_read, self, s
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x32, // LOAD_METHOD '_enqueue'
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_IOQueue_queue_read = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_IOQueue_queue_read,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 57,
        .line_info = fun_data_uasyncio_core_IOQueue_queue_read + 5,
        .opcodes = fun_data_uasyncio_core_IOQueue_queue_read + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_IOQueue
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue_queue_write
static const FLASHMEM byte fun_data_uasyncio_core_IOQueue_queue_write[15] = {
    0x2a,0x06, // prelude
    0x3a,0x60,0x61, // names: queue_write, self, s
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x32, // LOAD_METHOD '_enqueue'
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_IOQueue_queue_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_IOQueue_queue_write,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 58,
        .line_info = fun_data_uasyncio_core_IOQueue_queue_write + 5,
        .opcodes = fun_data_uasyncio_core_IOQueue_queue_write + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_IOQueue
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue_remove
static const FLASHMEM byte fun_data_uasyncio_core_IOQueue_remove[65] = {
    0x6a,0x06, // prelude
    0x3b,0x60,0x0b, // names: remove, self, task
     // code info
    0x51, // LOAD_CONST_NONE
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x5f, // GET_ITER_STACK
    0x4b,0x1f, // FOR_ITER 31
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0xb3, // LOAD_FAST 3
    0x55, // LOAD_SUBSCR
    0x30,0x03, // UNPACK_SEQUENCE 3
    0xc4, // STORE_FAST 4
    0xc5, // STORE_FAST 5
    0xc6, // STORE_FAST 6
    0xb4, // LOAD_FAST 4
    0xb1, // LOAD_FAST 1
    0xde, // BINARY_OP 7 <is>
    0x43,0x45, // POP_JUMP_IF_TRUE 5
    0xb5, // LOAD_FAST 5
    0xb1, // LOAD_FAST 1
    0xde, // BINARY_OP 7 <is>
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb6, // LOAD_FAST 6
    0xc2, // STORE_FAST 2
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x42,0x42, // JUMP 2
    0x42,0x1f, // JUMP -33
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb0, // LOAD_FAST 0
    0x14,0x37, // LOAD_METHOD '_dequeue'
    0xb6, // LOAD_FAST 6
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x42, // JUMP 2
    0x42,0x42, // JUMP 2
    0x42,0x06, // JUMP -58
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_IOQueue_remove = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_IOQueue_remove,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 65,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 59,
        .line_info = fun_data_uasyncio_core_IOQueue_remove + 5,
        .opcodes = fun_data_uasyncio_core_IOQueue_remove + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_IOQueue
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_IOQueue_wait_io_event
static const FLASHMEM byte fun_data_uasyncio_core_IOQueue_wait_io_event[156] = {
    0x62,0x06, // prelude
    0x1f,0x60,0x64, // names: wait_io_event, self, dt
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x3c, // LOAD_METHOD 'ipoll'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x5f, // GET_ITER_STACK
    0x4b,0x89,0x01, // FOR_ITER 137
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc2, // STORE_FAST 2
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'map'
    0x12,0x63, // LOAD_GLOBAL 'id'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0xd2, // UNARY_OP 2 __invert__
    0xef, // BINARY_OP 24 __and__
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x56, // STORE_SUBSCR
    0xb3, // LOAD_FAST 3
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0xd2, // UNARY_OP 2 __invert__
    0xef, // BINARY_OP 24 __and__
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x56, // STORE_SUBSCR
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0xb0, // LOAD_FAST 0
    0x14,0x37, // LOAD_METHOD '_dequeue'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x63, // JUMP 35
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x36, // LOAD_METHOD 'modify'
    0xb2, // LOAD_FAST 2
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x35, // LOAD_ATTR 'POLLOUT'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x4d, // JUMP 13
    0xb0, // LOAD_FAST 0
    0x13,0x31, // LOAD_ATTR 'poller'
    0x14,0x36, // LOAD_METHOD 'modify'
    0xb2, // LOAD_FAST 2
    0x12,0x07, // LOAD_GLOBAL 'select'
    0x13,0x34, // LOAD_ATTR 'POLLIN'
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0xf4,0x7e, // JUMP -140
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_IOQueue_wait_io_event = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_IOQueue_wait_io_event,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 156,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 31,
        .line_info = fun_data_uasyncio_core_IOQueue_wait_io_event + 5,
        .opcodes = fun_data_uasyncio_core_IOQueue_wait_io_event + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_core_IOQueue[] = {
    &raw_code_uasyncio_core_IOQueue___init__,
    &raw_code_uasyncio_core_IOQueue__enqueue,
    &raw_code_uasyncio_core_IOQueue__dequeue,
    &raw_code_uasyncio_core_IOQueue_queue_read,
    &raw_code_uasyncio_core_IOQueue_queue_write,
    &raw_code_uasyncio_core_IOQueue_remove,
    &raw_code_uasyncio_core_IOQueue_wait_io_event,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_IOQueue = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_IOQueue,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 41,
    #endif
    .children = (void *)&children_uasyncio_core_IOQueue,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 7,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_uasyncio_core_IOQueue + 3,
        .opcodes = fun_data_uasyncio_core_IOQueue + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__promote_to_task
static const FLASHMEM byte fun_data_uasyncio_core__promote_to_task[21] = {
    0x19,0x04, // prelude
    0x17,0x53, // names: _promote_to_task, aw
     // code info
    0x12,0x54, // LOAD_GLOBAL 'isinstance'
    0xb0, // LOAD_FAST 0
    0x12,0x09, // LOAD_GLOBAL 'Task'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
    0x12,0x18, // LOAD_GLOBAL 'create_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core__promote_to_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core__promote_to_task,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 23,
        .line_info = fun_data_uasyncio_core__promote_to_task + 4,
        .opcodes = fun_data_uasyncio_core__promote_to_task + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_create_task
static const FLASHMEM byte fun_data_uasyncio_core_create_task[40] = {
    0x21,0x04, // prelude
    0x18,0x22, // names: create_task, coro
     // code info
    0x12,0x55, // LOAD_GLOBAL 'hasattr'
    0xb0, // LOAD_FAST 0
    0x10,0x19, // LOAD_CONST_STRING 'send'
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x47, // POP_JUMP_IF_TRUE 7
    0x12,0x56, // LOAD_GLOBAL 'TypeError'
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x12,0x09, // LOAD_GLOBAL 'Task'
    0xb0, // LOAD_FAST 0
    0x12,0x57, // LOAD_GLOBAL 'globals'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x02, // CALL_FUNCTION 2
    0xc1, // STORE_FAST 1
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_create_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_create_task,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 40,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 24,
        .line_info = fun_data_uasyncio_core_create_task + 4,
        .opcodes = fun_data_uasyncio_core_create_task + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_run_until_complete
static const FLASHMEM byte fun_data_uasyncio_core_run_until_complete[297] = {
    0xf1,0x03,0x04, // prelude
    0x1b,0x59, // names: run_until_complete, main_task
     // code info
    0x12,0x0c, // LOAD_GLOBAL 'CancelledError'
    0x12,0x49, // LOAD_GLOBAL 'Exception'
    0x2a,0x02, // BUILD_TUPLE 2
    0xc1, // STORE_FAST 1
    0x12,0x0c, // LOAD_GLOBAL 'CancelledError'
    0x12,0x5a, // LOAD_GLOBAL 'StopIteration'
    0x2a,0x02, // BUILD_TUPLE 2
    0xc2, // STORE_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0xc3, // STORE_FAST 3
    0x42,0x6f, // JUMP 47
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xc3, // STORE_FAST 3
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1c, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0x12,0x51, // LOAD_GLOBAL 'max'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x12,0x03, // LOAD_GLOBAL 'ticks_diff'
    0xb4, // LOAD_FAST 4
    0x13,0x1d, // LOAD_ATTR 'ph_key'
    0x12,0x47, // LOAD_GLOBAL 'ticks'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x02, // CALL_FUNCTION 2
    0x34,0x02, // CALL_FUNCTION 2
    0xc3, // STORE_FAST 3
    0x42,0x48, // JUMP 8
    0x12,0x5b, // LOAD_GLOBAL '_io_queue'
    0x13,0x1e, // LOAD_ATTR 'map'
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x12,0x5b, // LOAD_GLOBAL '_io_queue'
    0x14,0x1f, // LOAD_METHOD 'wait_io_event'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd8, // BINARY_OP 1 __gt__
    0x43,0x0c, // POP_JUMP_IF_TRUE -52
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x20, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x17,0x5c, // STORE_GLOBAL 'cur_task'
    0x48,0x22, // SETUP_EXCEPT 34
    0xb4, // LOAD_FAST 4
    0x13,0x21, // LOAD_ATTR 'data'
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0xb4, // LOAD_FAST 4
    0x13,0x22, // LOAD_ATTR 'coro'
    0x14,0x19, // LOAD_METHOD 'send'
    0x51, // LOAD_CONST_NONE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x4d, // JUMP 13
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x18,0x21, // STORE_ATTR 'data'
    0xb4, // LOAD_FAST 4
    0x13,0x22, // LOAD_ATTR 'coro'
    0x14,0x23, // LOAD_METHOD 'throw'
    0xb5, // LOAD_FAST 5
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0xab,0x01, // POP_EXCEPT_JUMP 171
    0x57, // DUP_TOP
    0xb1, // LOAD_FAST 1
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0xa4,0x81, // POP_JUMP_IF_FALSE 164
    0xc6, // STORE_FAST 6
    0x49,0x99,0x01, // SETUP_FINALLY 153
    0xb4, // LOAD_FAST 4
    0xb0, // LOAD_FAST 0
    0xde, // BINARY_OP 7 <is>
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x12,0x54, // LOAD_GLOBAL 'isinstance'
    0xb6, // LOAD_FAST 6
    0x12,0x5a, // LOAD_GLOBAL 'StopIteration'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb6, // LOAD_FAST 6
    0x13,0x24, // LOAD_ATTR 'value'
    0x63, // RETURN_VALUE
    0xb6, // LOAD_FAST 6
    0x65, // RAISE_OBJ
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x44,0xe0,0x80, // POP_JUMP_IF_FALSE 96
    0x50, // LOAD_CONST_FALSE
    0xc7, // STORE_FAST 7
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x51, // LOAD_CONST_NONE
    0xb4, // LOAD_FAST 4
    0x18,0x15, // STORE_ATTR 'state'
    0x42,0x78, // JUMP 56
    0x12,0x5d, // LOAD_GLOBAL 'callable'
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x34,0x01, // CALL_FUNCTION 1
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0xb4, // LOAD_FAST 4
    0x14,0x15, // LOAD_METHOD 'state'
    0xb4, // LOAD_FAST 4
    0xb6, // LOAD_FAST 6
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0xb4, // LOAD_FAST 4
    0x18,0x15, // STORE_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0xc7, // STORE_FAST 7
    0x42,0x5f, // JUMP 31
    0x42,0x50, // JUMP 16
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x14,0x20, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x52, // LOAD_CONST_TRUE
    0xc7, // STORE_FAST 7
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x14,0x1c, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0x43,0x27, // POP_JUMP_IF_TRUE -25
    0x50, // LOAD_CONST_FALSE
    0xb4, // LOAD_FAST 4
    0x18,0x15, // STORE_ATTR 'state'
    0xb7, // LOAD_FAST 7
    0x43,0x50, // POP_JUMP_IF_TRUE 16
    0x12,0x54, // LOAD_GLOBAL 'isinstance'
    0xb6, // LOAD_FAST 6
    0xb2, // LOAD_FAST 2
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x48, // POP_JUMP_IF_TRUE 8
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0xb4, // LOAD_FAST 4
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb6, // LOAD_FAST 6
    0xb4, // LOAD_FAST 4
    0x18,0x21, // STORE_ATTR 'data'
    0x42,0x5e, // JUMP 30
    0xb4, // LOAD_FAST 4
    0x13,0x15, // LOAD_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x57, // POP_JUMP_IF_FALSE 23
    0xb5, // LOAD_FAST 5
    0x12,0x4a, // LOAD_GLOBAL '_exc_context'
    0x10,0x0f, // LOAD_CONST_STRING 'exception'
    0x56, // STORE_SUBSCR
    0xb4, // LOAD_FAST 4
    0x12,0x4a, // LOAD_GLOBAL '_exc_context'
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x56, // STORE_SUBSCR
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x14,0x25, // LOAD_METHOD 'call_exception_handler'
    0x12,0x4a, // LOAD_GLOBAL '_exc_context'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x40, // JUMP 0
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc6, // STORE_FAST 6
    0x28,0x06, // DELETE_FAST 6
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x42,0xec,0x7d, // JUMP -276
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_run_until_complete = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_run_until_complete,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 297,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 27,
        .line_info = fun_data_uasyncio_core_run_until_complete + 5,
        .opcodes = fun_data_uasyncio_core_run_until_complete + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_run
static const FLASHMEM byte fun_data_uasyncio_core_run[14] = {
    0x19,0x04, // prelude
    0x26,0x22, // names: run, coro
     // code info
    0x12,0x1b, // LOAD_GLOBAL 'run_until_complete'
    0x12,0x18, // LOAD_GLOBAL 'create_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_run = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_run,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 38,
        .line_info = fun_data_uasyncio_core_run + 4,
        .opcodes = fun_data_uasyncio_core_run + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core__stopper
static const FLASHMEM byte fun_data_uasyncio_core__stopper[6] = {
    0x80,0x40,0x02, // prelude
    0x27, // names: _stopper
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core__stopper = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__stopper,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 39,
        .line_info = fun_data_uasyncio_core__stopper + 4,
        .opcodes = fun_data_uasyncio_core__stopper + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop
static const FLASHMEM byte fun_data_uasyncio_core_Loop[52] = {
    0x00,0x02, // prelude
    0x13, // names: Loop
     // code info
    0x11,0x4c, // LOAD_NAME '__name__'
    0x16,0x4d, // STORE_NAME '__module__'
    0x10,0x13, // LOAD_CONST_STRING 'Loop'
    0x16,0x4e, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x16,0x41, // STORE_NAME '_exc_handler'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x18, // STORE_NAME 'create_task'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x3d, // STORE_NAME 'run_forever'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x1b, // STORE_NAME 'run_until_complete'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x3e, // STORE_NAME 'stop'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x3f, // STORE_NAME 'close'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x40, // STORE_NAME 'set_exception_handler'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x42, // STORE_NAME 'get_exception_handler'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x43, // STORE_NAME 'default_exception_handler'
    0x32,0x08, // MAKE_FUNCTION 8
    0x16,0x25, // STORE_NAME 'call_exception_handler'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_create_task
static const FLASHMEM byte fun_data_uasyncio_core_Loop_create_task[10] = {
    0x11,0x04, // prelude
    0x18,0x22, // names: create_task, coro
     // code info
    0x12,0x18, // LOAD_GLOBAL 'create_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_Loop_create_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_Loop_create_task,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 24,
        .line_info = fun_data_uasyncio_core_Loop_create_task + 4,
        .opcodes = fun_data_uasyncio_core_Loop_create_task + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_run_forever
static const FLASHMEM byte fun_data_uasyncio_core_Loop_run_forever[26] = {
    0x10,0x02, // prelude
    0x3d, // names: run_forever
     // code info
    0x12,0x09, // LOAD_GLOBAL 'Task'
    0x12,0x27, // LOAD_GLOBAL '_stopper'
    0x34,0x00, // CALL_FUNCTION 0
    0x12,0x57, // LOAD_GLOBAL 'globals'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x02, // CALL_FUNCTION 2
    0x17,0x4b, // STORE_GLOBAL '_stop_task'
    0x12,0x1b, // LOAD_GLOBAL 'run_until_complete'
    0x12,0x4b, // LOAD_GLOBAL '_stop_task'
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_Loop_run_forever = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_Loop_run_forever,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 26,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 61,
        .line_info = fun_data_uasyncio_core_Loop_run_forever + 3,
        .opcodes = fun_data_uasyncio_core_Loop_run_forever + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_run_until_complete
static const FLASHMEM byte fun_data_uasyncio_core_Loop_run_until_complete[14] = {
    0x19,0x04, // prelude
    0x1b,0x53, // names: run_until_complete, aw
     // code info
    0x12,0x1b, // LOAD_GLOBAL 'run_until_complete'
    0x12,0x17, // LOAD_GLOBAL '_promote_to_task'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x34,0x01, // CALL_FUNCTION 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_Loop_run_until_complete = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_Loop_run_until_complete,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 27,
        .line_info = fun_data_uasyncio_core_Loop_run_until_complete + 4,
        .opcodes = fun_data_uasyncio_core_Loop_run_until_complete + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_stop
static const FLASHMEM byte fun_data_uasyncio_core_Loop_stop[24] = {
    0x10,0x02, // prelude
    0x3e, // names: stop
     // code info
    0x12,0x4b, // LOAD_GLOBAL '_stop_task'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x12,0x58, // LOAD_GLOBAL '_task_queue'
    0x14,0x1a, // LOAD_METHOD 'push'
    0x12,0x4b, // LOAD_GLOBAL '_stop_task'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x17,0x4b, // STORE_GLOBAL '_stop_task'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_Loop_stop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_Loop_stop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 62,
        .line_info = fun_data_uasyncio_core_Loop_stop + 3,
        .opcodes = fun_data_uasyncio_core_Loop_stop + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_close
static const FLASHMEM byte fun_data_uasyncio_core_Loop_close[5] = {
    0x00,0x02, // prelude
    0x3f, // names: close
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_Loop_close = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_Loop_close,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 5,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 63,
        .line_info = fun_data_uasyncio_core_Loop_close + 3,
        .opcodes = fun_data_uasyncio_core_Loop_close + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_set_exception_handler
static const FLASHMEM byte fun_data_uasyncio_core_Loop_set_exception_handler[11] = {
    0x11,0x04, // prelude
    0x40,0x65, // names: set_exception_handler, handler
     // code info
    0xb0, // LOAD_FAST 0
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x18,0x41, // STORE_ATTR '_exc_handler'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_Loop_set_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_Loop_set_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 11,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 64,
        .line_info = fun_data_uasyncio_core_Loop_set_exception_handler + 4,
        .opcodes = fun_data_uasyncio_core_Loop_set_exception_handler + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_get_exception_handler
static const FLASHMEM byte fun_data_uasyncio_core_Loop_get_exception_handler[8] = {
    0x00,0x02, // prelude
    0x42, // names: get_exception_handler
     // code info
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x13,0x41, // LOAD_ATTR '_exc_handler'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_Loop_get_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_Loop_get_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 8,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 66,
        .line_info = fun_data_uasyncio_core_Loop_get_exception_handler + 3,
        .opcodes = fun_data_uasyncio_core_Loop_get_exception_handler + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_default_exception_handler
static const FLASHMEM byte fun_data_uasyncio_core_Loop_default_exception_handler[46] = {
    0x3a,0x06, // prelude
    0x43,0x66,0x67, // names: default_exception_handler, loop, context
     // code info
    0x12,0x68, // LOAD_GLOBAL 'print'
    0xb1, // LOAD_FAST 1
    0x10,0x0e, // LOAD_CONST_STRING 'message'
    0x55, // LOAD_SUBSCR
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x68, // LOAD_GLOBAL 'print'
    0x10,0x44, // LOAD_CONST_STRING 'future:'
    0xb1, // LOAD_FAST 1
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x55, // LOAD_SUBSCR
    0x10,0x45, // LOAD_CONST_STRING 'coro='
    0xb1, // LOAD_FAST 1
    0x10,0x10, // LOAD_CONST_STRING 'future'
    0x55, // LOAD_SUBSCR
    0x13,0x22, // LOAD_ATTR 'coro'
    0x34,0x04, // CALL_FUNCTION 4
    0x59, // POP_TOP
    0x12,0x06, // LOAD_GLOBAL 'sys'
    0x14,0x46, // LOAD_METHOD 'print_exception'
    0xb1, // LOAD_FAST 1
    0x10,0x0f, // LOAD_CONST_STRING 'exception'
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_Loop_default_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_Loop_default_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 46,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 67,
        .line_info = fun_data_uasyncio_core_Loop_default_exception_handler + 5,
        .opcodes = fun_data_uasyncio_core_Loop_default_exception_handler + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core_Loop
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_Loop_call_exception_handler
static const FLASHMEM byte fun_data_uasyncio_core_Loop_call_exception_handler[22] = {
    0x19,0x04, // prelude
    0x25,0x67, // names: call_exception_handler, context
     // code info
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x13,0x41, // LOAD_ATTR '_exc_handler'
    0x45,0x04, // JUMP_IF_TRUE_OR_POP 4
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x13,0x43, // LOAD_ATTR 'default_exception_handler'
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_Loop_call_exception_handler = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_core_Loop_call_exception_handler,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 22,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 37,
        .line_info = fun_data_uasyncio_core_Loop_call_exception_handler + 4,
        .opcodes = fun_data_uasyncio_core_Loop_call_exception_handler + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_core_Loop[] = {
    &raw_code_uasyncio_core_Loop_create_task,
    &raw_code_uasyncio_core_Loop_run_forever,
    &raw_code_uasyncio_core_Loop_run_until_complete,
    &raw_code_uasyncio_core_Loop_stop,
    &raw_code_uasyncio_core_Loop_close,
    &raw_code_uasyncio_core_Loop_set_exception_handler,
    &raw_code_uasyncio_core_Loop_get_exception_handler,
    &raw_code_uasyncio_core_Loop_default_exception_handler,
    &raw_code_uasyncio_core_Loop_call_exception_handler,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_Loop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_Loop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 52,
    #endif
    .children = (void *)&children_uasyncio_core_Loop,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 9,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_uasyncio_core_Loop + 3,
        .opcodes = fun_data_uasyncio_core_Loop + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_get_event_loop
static const FLASHMEM byte fun_data_uasyncio_core_get_event_loop[10] = {
    0x92,0x80,0x01,0x06, // prelude
    0x28,0x5e,0x5f, // names: get_event_loop, runq_len, waitq_len
     // code info
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_get_event_loop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_core_get_event_loop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 40,
        .line_info = fun_data_uasyncio_core_get_event_loop + 7,
        .opcodes = fun_data_uasyncio_core_get_event_loop + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_current_task
static const FLASHMEM byte fun_data_uasyncio_core_current_task[6] = {
    0x00,0x02, // prelude
    0x29, // names: current_task
     // code info
    0x12,0x5c, // LOAD_GLOBAL 'cur_task'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_current_task = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_current_task,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_uasyncio_core_current_task + 3,
        .opcodes = fun_data_uasyncio_core_current_task + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_core__lt_module_gt_
// frozen bytecode for file uasyncio/core.py, scope uasyncio_core_new_event_loop
static const FLASHMEM byte fun_data_uasyncio_core_new_event_loop[18] = {
    0x00,0x02, // prelude
    0x2a, // names: new_event_loop
     // code info
    0x12,0x08, // LOAD_GLOBAL 'TaskQueue'
    0x34,0x00, // CALL_FUNCTION 0
    0x17,0x58, // STORE_GLOBAL '_task_queue'
    0x12,0x12, // LOAD_GLOBAL 'IOQueue'
    0x34,0x00, // CALL_FUNCTION 0
    0x17,0x5b, // STORE_GLOBAL '_io_queue'
    0x12,0x13, // LOAD_GLOBAL 'Loop'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core_new_event_loop = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core_new_event_loop,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 18,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 42,
        .line_info = fun_data_uasyncio_core_new_event_loop + 3,
        .opcodes = fun_data_uasyncio_core_new_event_loop + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_core__lt_module_gt_[] = {
    &raw_code_uasyncio_core_CancelledError,
    &raw_code_uasyncio_core_TimeoutError,
    &raw_code_uasyncio_core_SingletonGenerator,
    &raw_code_uasyncio_core_sleep_ms,
    &raw_code_uasyncio_core_sleep,
    &raw_code_uasyncio_core_IOQueue,
    &raw_code_uasyncio_core__promote_to_task,
    &raw_code_uasyncio_core_create_task,
    &raw_code_uasyncio_core_run_until_complete,
    &raw_code_uasyncio_core_run,
    &raw_code_uasyncio_core__stopper,
    &raw_code_uasyncio_core_Loop,
    &raw_code_uasyncio_core_get_event_loop,
    &raw_code_uasyncio_core_current_task,
    &raw_code_uasyncio_core_new_event_loop,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_core__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_core__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 215,
    #endif
    .children = (void *)&children_uasyncio_core__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 15,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_uasyncio_core__lt_module_gt_ + 3,
        .opcodes = fun_data_uasyncio_core__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_uasyncio_core[105] = {
    MP_QSTR_uasyncio_slash_core_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_ticks_ms,
    MP_QSTR_ticks_diff,
    MP_QSTR_ticks_add,
    MP_QSTR_time,
    MP_QSTR_sys,
    MP_QSTR_select,
    MP_QSTR_TaskQueue,
    MP_QSTR_Task,
    MP_QSTR__uasyncio,
    MP_QSTR_task,
    MP_QSTR_CancelledError,
    MP_QSTR_TimeoutError,
    MP_QSTR_message,
    MP_QSTR_exception,
    MP_QSTR_future,
    MP_QSTR_SingletonGenerator,
    MP_QSTR_IOQueue,
    MP_QSTR_Loop,
    MP_QSTR_sleep_ms,
    MP_QSTR_state,
    MP_QSTR_sleep,
    MP_QSTR__promote_to_task,
    MP_QSTR_create_task,
    MP_QSTR_send,
    MP_QSTR_push,
    MP_QSTR_run_until_complete,
    MP_QSTR_peek,
    MP_QSTR_ph_key,
    MP_QSTR_map,
    MP_QSTR_wait_io_event,
    MP_QSTR_pop,
    MP_QSTR_data,
    MP_QSTR_coro,
    MP_QSTR_throw,
    MP_QSTR_value,
    MP_QSTR_call_exception_handler,
    MP_QSTR_run,
    MP_QSTR__stopper,
    MP_QSTR_get_event_loop,
    MP_QSTR_current_task,
    MP_QSTR_new_event_loop,
    MP_QSTR___init__,
    MP_QSTR_exc,
    MP_QSTR___iter__,
    MP_QSTR___next__,
    MP_QSTR___traceback__,
    MP_QSTR_poll,
    MP_QSTR_poller,
    MP_QSTR__enqueue,
    MP_QSTR_register,
    MP_QSTR_POLLIN,
    MP_QSTR_POLLOUT,
    MP_QSTR_modify,
    MP_QSTR__dequeue,
    MP_QSTR_unregister,
    MP_QSTR_queue_read,
    MP_QSTR_queue_write,
    MP_QSTR_remove,
    MP_QSTR_ipoll,
    MP_QSTR_run_forever,
    MP_QSTR_stop,
    MP_QSTR_close,
    MP_QSTR_set_exception_handler,
    MP_QSTR__exc_handler,
    MP_QSTR_get_exception_handler,
    MP_QSTR_default_exception_handler,
    MP_QSTR_future_colon_,
    MP_QSTR_coro_equals_,
    MP_QSTR_print_exception,
    MP_QSTR_ticks,
    MP_QSTR_BaseException,
    MP_QSTR_Exception,
    MP_QSTR__exc_context,
    MP_QSTR__stop_task,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_t,
    MP_QSTR_sgen,
    MP_QSTR_max,
    MP_QSTR_int,
    MP_QSTR_aw,
    MP_QSTR_isinstance,
    MP_QSTR_hasattr,
    MP_QSTR_TypeError,
    MP_QSTR_globals,
    MP_QSTR__task_queue,
    MP_QSTR_main_task,
    MP_QSTR_StopIteration,
    MP_QSTR__io_queue,
    MP_QSTR_cur_task,
    MP_QSTR_callable,
    MP_QSTR_runq_len,
    MP_QSTR_waitq_len,
    MP_QSTR_self,
    MP_QSTR_s,
    MP_QSTR_idx,
    MP_QSTR_id,
    MP_QSTR_dt,
    MP_QSTR_handler,
    MP_QSTR_loop,
    MP_QSTR_context,
    MP_QSTR_print,
};

// constants
static const FLASHMEM mp_obj_str_t const_obj_uasyncio_core_0 = {{&mp_type_str}, 64973, 31, (const byte*)"\x54\x61\x73\x6b\x20\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x20\x77\x61\x73\x6e\x27\x74\x20\x72\x65\x74\x72\x69\x65\x76\x65\x64"};

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_uasyncio_core[2] = {
    MP_ROM_PTR(&const_obj_uasyncio_core_0),
    MP_ROM_QSTR(MP_QSTR_coroutine_space_expected),
};

static const FLASHMEM mp_frozen_module_t frozen_module_uasyncio_core = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_uasyncio_core,
        .obj_table = (mp_obj_t *)&const_obj_table_data_uasyncio_core,
    },
    .rc = &raw_code_uasyncio_core__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module uasyncio_event
// - original source file: build-SHAREDLIB/frozen_mpy/uasyncio/event.mpy
// - frozen file name: uasyncio/event.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file uasyncio/event.py, scope uasyncio_event__lt_module_gt_
static const FLASHMEM byte fun_data_uasyncio_event__lt_module_gt_[59] = {
    0x2c,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'Event'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'Event'
    0x48,0x15, // SETUP_EXCEPT 21
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x05, // IMPORT_NAME 'uio'
    0x16,0x05, // STORE_NAME 'uio'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x06, // LOAD_CONST_STRING 'ThreadSafeFlag'
    0x11,0x05, // LOAD_NAME 'uio'
    0x13,0x07, // LOAD_ATTR 'IOBase'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x06, // STORE_NAME 'ThreadSafeFlag'
    0x4a,0x0a, // POP_EXCEPT_JUMP 10
    0x57, // DUP_TOP
    0x11,0x19, // LOAD_NAME 'ImportError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_event__lt_module_gt_
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_Event
static const FLASHMEM byte fun_data_uasyncio_event_Event[33] = {
    0x00,0x02, // prelude
    0x04, // names: Event
     // code info
    0x11,0x1a, // LOAD_NAME '__name__'
    0x16,0x1b, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'Event'
    0x16,0x1c, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x08, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0c, // STORE_NAME 'is_set'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0d, // STORE_NAME 'set'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x12, // STORE_NAME 'clear'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x13, // STORE_NAME 'wait'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_event_Event
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_Event___init__
static const FLASHMEM byte fun_data_uasyncio_event_Event___init__[19] = {
    0x11,0x04, // prelude
    0x08,0x1d, // names: __init__, self
     // code info
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0a, // LOAD_METHOD 'TaskQueue'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x0b, // STORE_ATTR 'waiting'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_event_Event___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_Event___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_uasyncio_event_Event___init__ + 4,
        .opcodes = fun_data_uasyncio_event_Event___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_Event
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_Event_is_set
static const FLASHMEM byte fun_data_uasyncio_event_Event_is_set[8] = {
    0x09,0x04, // prelude
    0x0c,0x1d, // names: is_set, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_event_Event_is_set = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_Event_is_set,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 8,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_uasyncio_event_Event_is_set + 4,
        .opcodes = fun_data_uasyncio_event_Event_is_set + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_Event
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_Event_set
static const FLASHMEM byte fun_data_uasyncio_event_Event_set[37] = {
    0x21,0x04, // prelude
    0x0d,0x1d, // names: set, self
     // code info
    0x42,0x50, // JUMP 16
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0e, // LOAD_ATTR '_task_queue'
    0x14,0x0f, // LOAD_METHOD 'push'
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x14,0x10, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x14,0x11, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0x43,0x27, // POP_JUMP_IF_TRUE -25
    0x52, // LOAD_CONST_TRUE
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_event_Event_set = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_Event_set,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 37,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_uasyncio_event_Event_set + 4,
        .opcodes = fun_data_uasyncio_event_Event_set + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_Event
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_Event_clear
static const FLASHMEM byte fun_data_uasyncio_event_Event_clear[10] = {
    0x11,0x04, // prelude
    0x12,0x1d, // names: clear, self
     // code info
    0x50, // LOAD_CONST_FALSE
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_event_Event_clear = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_Event_clear,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_uasyncio_event_Event_clear + 4,
        .opcodes = fun_data_uasyncio_event_Event_clear + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_Event
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_Event_wait
static const FLASHMEM byte fun_data_uasyncio_event_Event_wait[36] = {
    0x99,0x40,0x04, // prelude
    0x13,0x1d, // names: wait, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0x43,0x58, // POP_JUMP_IF_TRUE 24
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x14,0x0f, // LOAD_METHOD 'push'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR 'cur_task'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0b, // LOAD_ATTR 'waiting'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR 'cur_task'
    0x18,0x15, // STORE_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_event_Event_wait = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_Event_wait,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 36,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_uasyncio_event_Event_wait + 5,
        .opcodes = fun_data_uasyncio_event_Event_wait + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_event_Event[] = {
    &raw_code_uasyncio_event_Event___init__,
    &raw_code_uasyncio_event_Event_is_set,
    &raw_code_uasyncio_event_Event_set,
    &raw_code_uasyncio_event_Event_clear,
    &raw_code_uasyncio_event_Event_wait,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_event_Event = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_event_Event,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 33,
    #endif
    .children = (void *)&children_uasyncio_event_Event,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_uasyncio_event_Event + 3,
        .opcodes = fun_data_uasyncio_event_Event + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event__lt_module_gt_
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_ThreadSafeFlag
static const FLASHMEM byte fun_data_uasyncio_event_ThreadSafeFlag[33] = {
    0x00,0x02, // prelude
    0x06, // names: ThreadSafeFlag
     // code info
    0x11,0x1a, // LOAD_NAME '__name__'
    0x16,0x1b, // STORE_NAME '__module__'
    0x10,0x06, // LOAD_CONST_STRING 'ThreadSafeFlag'
    0x16,0x1c, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x08, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x16, // STORE_NAME 'ioctl'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0d, // STORE_NAME 'set'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x12, // STORE_NAME 'clear'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x13, // STORE_NAME 'wait'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_event_ThreadSafeFlag
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_ThreadSafeFlag___init__
static const FLASHMEM byte fun_data_uasyncio_event_ThreadSafeFlag___init__[10] = {
    0x11,0x04, // prelude
    0x08,0x1d, // names: __init__, self
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_event_ThreadSafeFlag___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_ThreadSafeFlag___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 8,
        .line_info = fun_data_uasyncio_event_ThreadSafeFlag___init__ + 4,
        .opcodes = fun_data_uasyncio_event_ThreadSafeFlag___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_ThreadSafeFlag
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_ThreadSafeFlag_ioctl
static const FLASHMEM byte fun_data_uasyncio_event_ThreadSafeFlag_ioctl[19] = {
    0x23,0x08, // prelude
    0x16,0x1d,0x1e,0x1f, // names: ioctl, self, req, flags
     // code info
    0xb1, // LOAD_FAST 1
    0x83, // LOAD_CONST_SMALL_INT 3
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0xb2, // LOAD_FAST 2
    0xf4, // BINARY_OP 29 __mul__
    0x63, // RETURN_VALUE
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_event_ThreadSafeFlag_ioctl = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_event_ThreadSafeFlag_ioctl,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_uasyncio_event_ThreadSafeFlag_ioctl + 6,
        .opcodes = fun_data_uasyncio_event_ThreadSafeFlag_ioctl + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_ThreadSafeFlag
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_ThreadSafeFlag_set
static const FLASHMEM byte fun_data_uasyncio_event_ThreadSafeFlag_set[10] = {
    0x11,0x04, // prelude
    0x0d,0x1d, // names: set, self
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_event_ThreadSafeFlag_set = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_ThreadSafeFlag_set,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_uasyncio_event_ThreadSafeFlag_set + 4,
        .opcodes = fun_data_uasyncio_event_ThreadSafeFlag_set + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_ThreadSafeFlag
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_ThreadSafeFlag_clear
static const FLASHMEM byte fun_data_uasyncio_event_ThreadSafeFlag_clear[10] = {
    0x11,0x04, // prelude
    0x12,0x1d, // names: clear, self
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_event_ThreadSafeFlag_clear = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_ThreadSafeFlag_clear,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_uasyncio_event_ThreadSafeFlag_clear + 4,
        .opcodes = fun_data_uasyncio_event_ThreadSafeFlag_clear + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_event_ThreadSafeFlag
// frozen bytecode for file uasyncio/event.py, scope uasyncio_event_ThreadSafeFlag_wait
static const FLASHMEM byte fun_data_uasyncio_event_ThreadSafeFlag_wait[27] = {
    0x99,0x40,0x04, // prelude
    0x13,0x1d, // names: wait, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x09, // LOAD_ATTR 'state'
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x17, // LOAD_ATTR '_io_queue'
    0x14,0x18, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x09, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_event_ThreadSafeFlag_wait = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_event_ThreadSafeFlag_wait,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 27,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_uasyncio_event_ThreadSafeFlag_wait + 5,
        .opcodes = fun_data_uasyncio_event_ThreadSafeFlag_wait + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_event_ThreadSafeFlag[] = {
    &raw_code_uasyncio_event_ThreadSafeFlag___init__,
    &raw_code_uasyncio_event_ThreadSafeFlag_ioctl,
    &raw_code_uasyncio_event_ThreadSafeFlag_set,
    &raw_code_uasyncio_event_ThreadSafeFlag_clear,
    &raw_code_uasyncio_event_ThreadSafeFlag_wait,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_event_ThreadSafeFlag = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_event_ThreadSafeFlag,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 33,
    #endif
    .children = (void *)&children_uasyncio_event_ThreadSafeFlag,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_uasyncio_event_ThreadSafeFlag + 3,
        .opcodes = fun_data_uasyncio_event_ThreadSafeFlag + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_event__lt_module_gt_[] = {
    &raw_code_uasyncio_event_Event,
    &raw_code_uasyncio_event_ThreadSafeFlag,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_event__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_event__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 59,
    #endif
    .children = (void *)&children_uasyncio_event__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_uasyncio_event__lt_module_gt_ + 3,
        .opcodes = fun_data_uasyncio_event__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_uasyncio_event[32] = {
    MP_QSTR_uasyncio_slash_event_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_Event,
    MP_QSTR_uio,
    MP_QSTR_ThreadSafeFlag,
    MP_QSTR_IOBase,
    MP_QSTR___init__,
    MP_QSTR_state,
    MP_QSTR_TaskQueue,
    MP_QSTR_waiting,
    MP_QSTR_is_set,
    MP_QSTR_set,
    MP_QSTR__task_queue,
    MP_QSTR_push,
    MP_QSTR_pop,
    MP_QSTR_peek,
    MP_QSTR_clear,
    MP_QSTR_wait,
    MP_QSTR_cur_task,
    MP_QSTR_data,
    MP_QSTR_ioctl,
    MP_QSTR__io_queue,
    MP_QSTR_queue_read,
    MP_QSTR_ImportError,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_req,
    MP_QSTR_flags,
};

static const FLASHMEM mp_frozen_module_t frozen_module_uasyncio_event = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_uasyncio_event,
        .obj_table = NULL,
    },
    .rc = &raw_code_uasyncio_event__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module uasyncio_funcs
// - original source file: build-SHAREDLIB/frozen_mpy/uasyncio/funcs.mpy
// - frozen file name: uasyncio/funcs.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs__lt_module_gt_
static const FLASHMEM byte fun_data_uasyncio_funcs__lt_module_gt_[56] = {
    0x18,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x07, // STORE_NAME '_run'
    0x11,0x02, // LOAD_NAME 'core'
    0x13,0x04, // LOAD_ATTR 'sleep'
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x0b, // STORE_NAME 'wait_for'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x12, // STORE_NAME 'wait_for_ms'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x03, // MAKE_FUNCTION 3
    0x10,0x05, // LOAD_CONST_STRING '_Remove'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x05, // STORE_NAME '_Remove'
    0x53, // LOAD_NULL
    0x2c,0x00, // BUILD_MAP 0
    0x50, // LOAD_CONST_FALSE
    0x10,0x06, // LOAD_CONST_STRING 'return_exceptions'
    0x62, // STORE_MAP
    0x33,0x04, // MAKE_FUNCTION_DEFARGS 4
    0x16,0x14, // STORE_NAME 'gather'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_funcs__lt_module_gt_
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs__run
static const FLASHMEM byte fun_data_uasyncio_funcs__run[66] = {
    0xd2,0x42,0x06, // prelude
    0x07,0x1b,0x1c, // names: _run, waiter, aw
     // code info
    0x48,0x09, // SETUP_EXCEPT 9
    0xb1, // LOAD_FAST 1
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0xc2, // STORE_FAST 2
    0x52, // LOAD_CONST_TRUE
    0xc3, // STORE_FAST 3
    0x4a,0x16, // POP_EXCEPT_JUMP 22
    0x57, // DUP_TOP
    0x12,0x1d, // LOAD_GLOBAL 'BaseException'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0xc4, // STORE_FAST 4
    0x49,0x05, // SETUP_FINALLY 5
    0x51, // LOAD_CONST_NONE
    0xc2, // STORE_FAST 2
    0xb4, // LOAD_FAST 4
    0xc3, // STORE_FAST 3
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc4, // STORE_FAST 4
    0x28,0x04, // DELETE_FAST 4
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0xb0, // LOAD_FAST 0
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x4b, // POP_JUMP_IF_FALSE 11
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0a, // LOAD_METHOD 'CancelledError'
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0xb0, // LOAD_FAST 0
    0x18,0x08, // STORE_ATTR 'data'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_funcs__run = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_funcs__run,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 66,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 7,
        .line_info = fun_data_uasyncio_funcs__run + 6,
        .opcodes = fun_data_uasyncio_funcs__run + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_funcs__lt_module_gt_
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs_wait_for
static const FLASHMEM byte fun_data_uasyncio_funcs_wait_for[119] = {
    0xdb,0x43,0x08, // prelude
    0x0b,0x1c,0x1e,0x04, // names: wait_for, aw, timeout, sleep
     // code info
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0c, // LOAD_METHOD '_promote_to_task'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0xc0, // STORE_FAST 0
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0xb0, // LOAD_FAST 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x63, // RETURN_VALUE
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0d, // LOAD_METHOD 'create_task'
    0x12,0x07, // LOAD_GLOBAL '_run'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0e, // LOAD_ATTR 'cur_task'
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0x48,0x0a, // SETUP_EXCEPT 10
    0xb2, // LOAD_FAST 2
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x4a,0x32, // POP_EXCEPT_JUMP 50
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0a, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x69, // POP_JUMP_IF_FALSE 41
    0xc4, // STORE_FAST 4
    0x49,0x1f, // SETUP_FINALLY 31
    0xb4, // LOAD_FAST 4
    0x13,0x0f, // LOAD_ATTR 'value'
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb3, // LOAD_FAST 3
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb4, // LOAD_FAST 4
    0x65, // RAISE_OBJ
    0xb5, // LOAD_FAST 5
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb4, // LOAD_FAST 4
    0x13,0x10, // LOAD_ATTR 'args'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
    0xb5, // LOAD_FAST 5
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc4, // STORE_FAST 4
    0x28,0x04, // DELETE_FAST 4
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb3, // LOAD_FAST 3
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb3, // LOAD_FAST 3
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x11, // LOAD_ATTR 'TimeoutError'
    0x65, // RAISE_OBJ
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_funcs_wait_for = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_funcs_wait_for,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 119,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_uasyncio_funcs_wait_for + 7,
        .opcodes = fun_data_uasyncio_funcs_wait_for + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_funcs__lt_module_gt_
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs_wait_for_ms
static const FLASHMEM byte fun_data_uasyncio_funcs_wait_for_ms[16] = {
    0x2a,0x06, // prelude
    0x12,0x1c,0x1e, // names: wait_for_ms, aw, timeout
     // code info
    0x12,0x0b, // LOAD_GLOBAL 'wait_for'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x13, // LOAD_ATTR 'sleep_ms'
    0x34,0x03, // CALL_FUNCTION 3
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_funcs_wait_for_ms = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_funcs_wait_for_ms,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_uasyncio_funcs_wait_for_ms + 5,
        .opcodes = fun_data_uasyncio_funcs_wait_for_ms + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_funcs__lt_module_gt_
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs__Remove
static const FLASHMEM byte fun_data_uasyncio_funcs__Remove[21] = {
    0x08,0x02, // prelude
    0x05, // names: _Remove
     // code info
    0x11,0x1f, // LOAD_NAME '__name__'
    0x16,0x20, // STORE_NAME '__module__'
    0x10,0x05, // LOAD_CONST_STRING '_Remove'
    0x16,0x21, // STORE_NAME '__qualname__'
    0x11,0x22, // LOAD_NAME 'staticmethod'
    0x32,0x00, // MAKE_FUNCTION 0
    0x34,0x01, // CALL_FUNCTION 1
    0x16,0x16, // STORE_NAME 'remove'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_funcs__Remove
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs__Remove_remove
static const FLASHMEM byte fun_data_uasyncio_funcs__Remove_remove[6] = {
    0x09,0x04, // prelude
    0x16,0x27, // names: remove, t
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_funcs__Remove_remove = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_funcs__Remove_remove,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_uasyncio_funcs__Remove_remove + 4,
        .opcodes = fun_data_uasyncio_funcs__Remove_remove + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_funcs__Remove[] = {
    &raw_code_uasyncio_funcs__Remove_remove,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_funcs__Remove = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_funcs__Remove,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 21,
    #endif
    .children = (void *)&children_uasyncio_funcs__Remove,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_uasyncio_funcs__Remove + 3,
        .opcodes = fun_data_uasyncio_funcs__Remove + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_funcs__lt_module_gt_
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs_gather
static const FLASHMEM byte fun_data_uasyncio_funcs_gather[220] = {
    0xf0,0xca,0x80,0xc0,0x40,0x85,0x01, // prelude
    0x14,0x06, // names: gather, return_exceptions
    0x00,0x07,0x08, // code info
    0xb1, // LOAD_FAST 1
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x2b,0x00, // BUILD_LIST 0
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0xb7, // LOAD_FAST 7
    0xb8, // LOAD_FAST 8
    0x20,0x00,0x03, // MAKE_CLOSURE 0
    0xc2, // STORE_FAST 2
    0x32,0x01, // MAKE_FUNCTION 1
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0x12,0x23, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0x5b, // JUMP 27
    0x57, // DUP_TOP
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x15, // LOAD_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x24, // LOAD_GLOBAL 'RuntimeError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x18,0x15, // STORE_ATTR 'state'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x20, // POP_JUMP_IF_TRUE -32
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0e, // LOAD_ATTR 'cur_task'
    0x27,0x07, // STORE_DEREF 7
    0x12,0x23, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x27,0x08, // STORE_DEREF 8
    0x50, // LOAD_CONST_FALSE
    0xc5, // STORE_FAST 5
    0x12,0x05, // LOAD_GLOBAL '_Remove'
    0x25,0x07, // LOAD_DEREF 7
    0x18,0x08, // STORE_ATTR 'data'
    0x48,0x05, // SETUP_EXCEPT 5
    0x51, // LOAD_CONST_NONE
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x4a,0x19, // POP_EXCEPT_JUMP 25
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0a, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0xc6, // STORE_FAST 6
    0x49,0x06, // SETUP_FINALLY 6
    0x52, // LOAD_CONST_TRUE
    0xc5, // STORE_FAST 5
    0xb6, // LOAD_FAST 6
    0x27,0x08, // STORE_DEREF 8
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc6, // STORE_FAST 6
    0x28,0x06, // DELETE_FAST 6
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x12,0x23, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x42,0xc1,0x80, // JUMP 65
    0x57, // DUP_TOP
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x15, // LOAD_ATTR 'state'
    0xb2, // LOAD_FAST 2
    0xde, // BINARY_OP 7 <is>
    0x44,0x53, // POP_JUMP_IF_FALSE 19
    0x52, // LOAD_CONST_TRUE
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x18,0x15, // STORE_ATTR 'state'
    0xb5, // LOAD_FAST 5
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x14,0x09, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x42,0x61, // JUMP 33
    0x12,0x25, // LOAD_GLOBAL 'isinstance'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0x12,0x26, // LOAD_GLOBAL 'StopIteration'
    0x34,0x02, // CALL_FUNCTION 2
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0x13,0x0f, // LOAD_ATTR 'value'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x56, // STORE_SUBSCR
    0x42,0x48, // JUMP 8
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0x13,0x08, // LOAD_ATTR 'data'
    0xb3, // LOAD_FAST 3
    0xb4, // LOAD_FAST 4
    0x56, // STORE_SUBSCR
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0x58, // DUP_TOP_TWO
    0x5a, // ROT_TWO
    0xd7, // BINARY_OP 0 __lt__
    0x43,0xb9,0x7f, // POP_JUMP_IF_TRUE -71
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x25,0x08, // LOAD_DEREF 8
    0x80, // LOAD_CONST_SMALL_INT 0
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x25,0x08, // LOAD_DEREF 8
    0x65, // RAISE_OBJ
    0xb3, // LOAD_FAST 3
    0x63, // RETURN_VALUE
};
// child of uasyncio_funcs_gather
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs_gather_done
static const FLASHMEM byte fun_data_uasyncio_funcs_gather_done[64] = {
    0xb9,0x04,0x0c, // prelude
    0x17,0x28,0x28,0x28,0x27,0x29, // names: done, *, *, *, t, er
     // code info
    0x25,0x01, // LOAD_DEREF 1
    0x13,0x08, // LOAD_ATTR 'data'
    0x12,0x05, // LOAD_GLOBAL '_Remove'
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x25,0x00, // LOAD_DEREF 0
    0x43,0x4e, // POP_JUMP_IF_TRUE 14
    0x12,0x25, // LOAD_GLOBAL 'isinstance'
    0xb4, // LOAD_FAST 4
    0x12,0x26, // LOAD_GLOBAL 'StopIteration'
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x45, // POP_JUMP_IF_TRUE 5
    0xb4, // LOAD_FAST 4
    0x27,0x02, // STORE_DEREF 2
    0x42,0x4c, // JUMP 12
    0x25,0x02, // LOAD_DEREF 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe6, // BINARY_OP 15 __isub__
    0x27,0x02, // STORE_DEREF 2
    0x25,0x02, // LOAD_DEREF 2
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x18, // LOAD_ATTR '_task_queue'
    0x14,0x19, // LOAD_METHOD 'push'
    0x25,0x01, // LOAD_DEREF 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_funcs_gather_done = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 5,
    .fun_data = fun_data_uasyncio_funcs_gather_done,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 64,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 5,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 23,
        .line_info = fun_data_uasyncio_funcs_gather_done + 9,
        .opcodes = fun_data_uasyncio_funcs_gather_done + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_funcs_gather
// frozen bytecode for file uasyncio/funcs.py, scope uasyncio_funcs_gather__lt_listcomp_gt_
static const FLASHMEM byte fun_data_uasyncio_funcs_gather__lt_listcomp_gt_[23] = {
    0x49,0x04, // prelude
    0x1a,0x28, // names: <listcomp>, *
     // code info
    0x2b,0x00, // BUILD_LIST 0
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0x0c, // FOR_ITER 12
    0xc1, // STORE_FAST 1
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x0c, // LOAD_METHOD '_promote_to_task'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x2f,0x14, // STORE_COMP 20
    0x42,0x32, // JUMP -14
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_funcs_gather__lt_listcomp_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_funcs_gather__lt_listcomp_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 23,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 26,
        .line_info = fun_data_uasyncio_funcs_gather__lt_listcomp_gt_ + 4,
        .opcodes = fun_data_uasyncio_funcs_gather__lt_listcomp_gt_ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_funcs_gather[] = {
    &raw_code_uasyncio_funcs_gather_done,
    &raw_code_uasyncio_funcs_gather__lt_listcomp_gt_,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_funcs_gather = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x0d,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_funcs_gather,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 220,
    #endif
    .children = (void *)&children_uasyncio_funcs_gather,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 2,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 15,
        .n_exc_stack = 2,
        .scope_flags = 13,
        .n_pos_args = 0,
        .n_kwonly_args = 1,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_uasyncio_funcs_gather + 9,
        .opcodes = fun_data_uasyncio_funcs_gather + 12,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_funcs__lt_module_gt_[] = {
    &raw_code_uasyncio_funcs__run,
    &raw_code_uasyncio_funcs_wait_for,
    &raw_code_uasyncio_funcs_wait_for_ms,
    &raw_code_uasyncio_funcs__Remove,
    &raw_code_uasyncio_funcs_gather,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_funcs__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_funcs__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 56,
    #endif
    .children = (void *)&children_uasyncio_funcs__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_uasyncio_funcs__lt_module_gt_ + 3,
        .opcodes = fun_data_uasyncio_funcs__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_uasyncio_funcs[42] = {
    MP_QSTR_uasyncio_slash_funcs_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_sleep,
    MP_QSTR__Remove,
    MP_QSTR_return_exceptions,
    MP_QSTR__run,
    MP_QSTR_data,
    MP_QSTR_cancel,
    MP_QSTR_CancelledError,
    MP_QSTR_wait_for,
    MP_QSTR__promote_to_task,
    MP_QSTR_create_task,
    MP_QSTR_cur_task,
    MP_QSTR_value,
    MP_QSTR_args,
    MP_QSTR_TimeoutError,
    MP_QSTR_wait_for_ms,
    MP_QSTR_sleep_ms,
    MP_QSTR_gather,
    MP_QSTR_state,
    MP_QSTR_remove,
    MP_QSTR_done,
    MP_QSTR__task_queue,
    MP_QSTR_push,
    MP_QSTR__lt_listcomp_gt_,
    MP_QSTR_waiter,
    MP_QSTR_aw,
    MP_QSTR_BaseException,
    MP_QSTR_timeout,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_staticmethod,
    MP_QSTR_len,
    MP_QSTR_RuntimeError,
    MP_QSTR_isinstance,
    MP_QSTR_StopIteration,
    MP_QSTR_t,
    MP_QSTR__star_,
    MP_QSTR_er,
};

// constants

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_uasyncio_funcs[1] = {
    MP_ROM_QSTR(MP_QSTR_can_squot_t_space_gather),
};

static const FLASHMEM mp_frozen_module_t frozen_module_uasyncio_funcs = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_uasyncio_funcs,
        .obj_table = (mp_obj_t *)&const_obj_table_data_uasyncio_funcs,
    },
    .rc = &raw_code_uasyncio_funcs__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module uasyncio_lock
// - original source file: build-SHAREDLIB/frozen_mpy/uasyncio/lock.mpy
// - frozen file name: uasyncio/lock.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock__lt_module_gt_
static const FLASHMEM byte fun_data_uasyncio_lock__lt_module_gt_[26] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'Lock'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'Lock'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_lock__lt_module_gt_
// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_Lock
static const FLASHMEM byte fun_data_uasyncio_lock_Lock[37] = {
    0x00,0x02, // prelude
    0x04, // names: Lock
     // code info
    0x11,0x15, // LOAD_NAME '__name__'
    0x16,0x16, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'Lock'
    0x16,0x17, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x05, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x09, // STORE_NAME 'locked'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x0a, // STORE_NAME 'release'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x0f, // STORE_NAME 'acquire'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x13, // STORE_NAME '__aenter__'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x14, // STORE_NAME '__aexit__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_lock_Lock
// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_Lock___init__
static const FLASHMEM byte fun_data_uasyncio_lock_Lock___init__[19] = {
    0x11,0x04, // prelude
    0x05,0x18, // names: __init__, self
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x07, // LOAD_METHOD 'TaskQueue'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x08, // STORE_ATTR 'waiting'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_lock_Lock___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock_Lock___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_uasyncio_lock_Lock___init__ + 4,
        .opcodes = fun_data_uasyncio_lock_Lock___init__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_lock_Lock
// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_Lock_locked
static const FLASHMEM byte fun_data_uasyncio_lock_Lock_locked[10] = {
    0x11,0x04, // prelude
    0x09,0x18, // names: locked, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xd9, // BINARY_OP 2 __eq__
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_lock_Lock_locked = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock_Lock_locked,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 10,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 9,
        .line_info = fun_data_uasyncio_lock_Lock_locked + 4,
        .opcodes = fun_data_uasyncio_lock_Lock_locked + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_lock_Lock
// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_Lock_release
static const FLASHMEM byte fun_data_uasyncio_lock_Lock_release[57] = {
    0x19,0x04, // prelude
    0x0a,0x18, // names: release, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x81, // LOAD_CONST_SMALL_INT 1
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x19, // LOAD_GLOBAL 'RuntimeError'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x14,0x0b, // LOAD_METHOD 'peek'
    0x36,0x00, // CALL_METHOD 0
    0x44,0x58, // POP_JUMP_IF_FALSE 24
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x14,0x0c, // LOAD_METHOD 'pop'
    0x36,0x00, // CALL_METHOD 0
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x0d, // LOAD_ATTR '_task_queue'
    0x14,0x0e, // LOAD_METHOD 'push'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x44, // JUMP 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_lock_Lock_release = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock_Lock_release,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 57,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_uasyncio_lock_Lock_release + 4,
        .opcodes = fun_data_uasyncio_lock_Lock_release + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_lock_Lock
// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_Lock_acquire
static const FLASHMEM byte fun_data_uasyncio_lock_Lock_acquire[88] = {
    0xb9,0x42,0x04, // prelude
    0x0f,0x18, // names: acquire, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0x44,0xc5,0x80, // POP_JUMP_IF_FALSE 69
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x14,0x0e, // LOAD_METHOD 'push'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x10, // LOAD_ATTR 'cur_task'
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x08, // LOAD_ATTR 'waiting'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x10, // LOAD_ATTR 'cur_task'
    0x18,0x11, // STORE_ATTR 'data'
    0x48,0x05, // SETUP_EXCEPT 5
    0x51, // LOAD_CONST_NONE
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x4a,0x29, // POP_EXCEPT_JUMP 41
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x12, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x60, // POP_JUMP_IF_FALSE 32
    0xc1, // STORE_FAST 1
    0x49,0x16, // SETUP_FINALLY 22
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'state'
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x10, // LOAD_ATTR 'cur_task'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0xb0, // LOAD_FAST 0
    0x14,0x0a, // LOAD_METHOD 'release'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0xc1, // STORE_FAST 1
    0x28,0x01, // DELETE_FAST 1
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x81, // LOAD_CONST_SMALL_INT 1
    0xb0, // LOAD_FAST 0
    0x18,0x06, // STORE_ATTR 'state'
    0x52, // LOAD_CONST_TRUE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_lock_Lock_acquire = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock_Lock_acquire,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 88,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 15,
        .line_info = fun_data_uasyncio_lock_Lock_acquire + 5,
        .opcodes = fun_data_uasyncio_lock_Lock_acquire + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_lock_Lock
// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_Lock___aenter__
static const FLASHMEM byte fun_data_uasyncio_lock_Lock___aenter__[14] = {
    0x91,0x40,0x04, // prelude
    0x13,0x18, // names: __aenter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0f, // LOAD_METHOD 'acquire'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_lock_Lock___aenter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_lock_Lock___aenter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_uasyncio_lock_Lock___aenter__ + 5,
        .opcodes = fun_data_uasyncio_lock_Lock___aenter__ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_lock_Lock
// frozen bytecode for file uasyncio/lock.py, scope uasyncio_lock_Lock___aexit__
static const FLASHMEM byte fun_data_uasyncio_lock_Lock___aexit__[14] = {
    0xa8,0x44,0x0a, // prelude
    0x14,0x18,0x1a,0x1b,0x1c, // names: __aexit__, self, exc_type, exc, tb
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x0a, // LOAD_METHOD 'release'
    0x36,0x00, // CALL_METHOD 0
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_lock_Lock___aexit__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_lock_Lock___aexit__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_uasyncio_lock_Lock___aexit__ + 8,
        .opcodes = fun_data_uasyncio_lock_Lock___aexit__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_lock_Lock[] = {
    &raw_code_uasyncio_lock_Lock___init__,
    &raw_code_uasyncio_lock_Lock_locked,
    &raw_code_uasyncio_lock_Lock_release,
    &raw_code_uasyncio_lock_Lock_acquire,
    &raw_code_uasyncio_lock_Lock___aenter__,
    &raw_code_uasyncio_lock_Lock___aexit__,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_lock_Lock = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_lock_Lock,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 37,
    #endif
    .children = (void *)&children_uasyncio_lock_Lock,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 6,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_uasyncio_lock_Lock + 3,
        .opcodes = fun_data_uasyncio_lock_Lock + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_lock__lt_module_gt_[] = {
    &raw_code_uasyncio_lock_Lock,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_lock__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_lock__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 26,
    #endif
    .children = (void *)&children_uasyncio_lock__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_uasyncio_lock__lt_module_gt_ + 3,
        .opcodes = fun_data_uasyncio_lock__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_uasyncio_lock[29] = {
    MP_QSTR_uasyncio_slash_lock_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_Lock,
    MP_QSTR___init__,
    MP_QSTR_state,
    MP_QSTR_TaskQueue,
    MP_QSTR_waiting,
    MP_QSTR_locked,
    MP_QSTR_release,
    MP_QSTR_peek,
    MP_QSTR_pop,
    MP_QSTR__task_queue,
    MP_QSTR_push,
    MP_QSTR_acquire,
    MP_QSTR_cur_task,
    MP_QSTR_data,
    MP_QSTR_CancelledError,
    MP_QSTR___aenter__,
    MP_QSTR___aexit__,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_RuntimeError,
    MP_QSTR_exc_type,
    MP_QSTR_exc,
    MP_QSTR_tb,
};

// constants

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_uasyncio_lock[1] = {
    MP_ROM_QSTR(MP_QSTR_Lock_space_not_space_acquired),
};

static const FLASHMEM mp_frozen_module_t frozen_module_uasyncio_lock = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_uasyncio_lock,
        .obj_table = (mp_obj_t *)&const_obj_table_data_uasyncio_lock,
    },
    .rc = &raw_code_uasyncio_lock__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module uasyncio_stream
// - original source file: build-SHAREDLIB/frozen_mpy/uasyncio/stream.mpy
// - frozen file name: uasyncio/stream.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream__lt_module_gt_
static const FLASHMEM byte fun_data_uasyncio_stream__lt_module_gt_[84] = {
    0x10,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x81, // LOAD_CONST_SMALL_INT 1
    0x10,0x02, // LOAD_CONST_STRING 'core'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x03, // IMPORT_NAME ''
    0x1c,0x02, // IMPORT_FROM 'core'
    0x16,0x02, // STORE_NAME 'core'
    0x59, // POP_TOP
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x04, // LOAD_CONST_STRING 'Stream'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x04, // STORE_NAME 'Stream'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x16,0x34, // STORE_NAME 'StreamReader'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x16,0x35, // STORE_NAME 'StreamWriter'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0a, // STORE_NAME 'open_connection'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x05, // LOAD_CONST_STRING 'Server'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x05, // STORE_NAME 'Server'
    0x85, // LOAD_CONST_SMALL_INT 5
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x03, // MAKE_FUNCTION_DEFARGS 3
    0x16,0x16, // STORE_NAME 'start_server'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x04, // MAKE_FUNCTION_DEFARGS 4
    0x16,0x1f, // STORE_NAME 'stream_awrite'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x13,0x06, // LOAD_ATTR 'wait_closed'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x18,0x07, // STORE_ATTR 'aclose'
    0x11,0x1f, // LOAD_NAME 'stream_awrite'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x18,0x08, // STORE_ATTR 'awrite'
    0x11,0x1f, // LOAD_NAME 'stream_awrite'
    0x11,0x04, // LOAD_NAME 'Stream'
    0x18,0x09, // STORE_ATTR 'awritestr'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_stream__lt_module_gt_
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream
static const FLASHMEM byte fun_data_uasyncio_stream_Stream[70] = {
    0x08,0x02, // prelude
    0x04, // names: Stream
     // code info
    0x11,0x36, // LOAD_NAME '__name__'
    0x16,0x37, // STORE_NAME '__module__'
    0x10,0x04, // LOAD_CONST_STRING 'Stream'
    0x16,0x38, // STORE_NAME '__qualname__'
    0x2c,0x00, // BUILD_MAP 0
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x22, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x26, // STORE_NAME 'get_extra_info'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x27, // STORE_NAME '__aenter__'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x28, // STORE_NAME '__aexit__'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x29, // STORE_NAME 'close'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x06, // STORE_NAME 'wait_closed'
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x06, // MAKE_FUNCTION_DEFARGS 6
    0x16,0x2a, // STORE_NAME 'read'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x2c, // STORE_NAME 'readinto'
    0x32,0x08, // MAKE_FUNCTION 8
    0x16,0x2d, // STORE_NAME 'readexactly'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x2e, // STORE_NAME 'readline'
    0x32,0x0a, // MAKE_FUNCTION 10
    0x16,0x20, // STORE_NAME 'write'
    0x32,0x0b, // MAKE_FUNCTION 11
    0x16,0x21, // STORE_NAME 'drain'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream___init__
static const FLASHMEM byte fun_data_uasyncio_stream_Stream___init__[22] = {
    0xa3,0x01,0x08, // prelude
    0x22,0x3e,0x23,0x24, // names: __init__, self, s, e
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x23, // STORE_ATTR 's'
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x18,0x24, // STORE_ATTR 'e'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xb0, // LOAD_FAST 0
    0x18,0x25, // STORE_ATTR 'out_buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Stream___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_stream_Stream___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 22,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 34,
        .line_info = fun_data_uasyncio_stream_Stream___init__ + 7,
        .opcodes = fun_data_uasyncio_stream_Stream___init__ + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_get_extra_info
static const FLASHMEM byte fun_data_uasyncio_stream_Stream_get_extra_info[11] = {
    0x1a,0x06, // prelude
    0x26,0x3e,0x44, // names: get_extra_info, self, v
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x24, // LOAD_ATTR 'e'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Stream_get_extra_info = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream_Stream_get_extra_info,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 11,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 38,
        .line_info = fun_data_uasyncio_stream_Stream_get_extra_info + 5,
        .opcodes = fun_data_uasyncio_stream_Stream_get_extra_info + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream___aenter__
static const FLASHMEM byte fun_data_uasyncio_stream_Stream___aenter__[7] = {
    0x89,0x40,0x04, // prelude
    0x27,0x3e, // names: __aenter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Stream___aenter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Stream___aenter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 7,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 39,
        .line_info = fun_data_uasyncio_stream_Stream___aenter__ + 5,
        .opcodes = fun_data_uasyncio_stream_Stream___aenter__ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream___aexit__
static const FLASHMEM byte fun_data_uasyncio_stream_Stream___aexit__[19] = {
    0xa8,0x44,0x0a, // prelude
    0x28,0x3e,0x45,0x46,0x47, // names: __aexit__, self, exc_type, exc, tb
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x29, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Stream___aexit__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_stream_Stream___aexit__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 40,
        .line_info = fun_data_uasyncio_stream_Stream___aexit__ + 8,
        .opcodes = fun_data_uasyncio_stream_Stream___aexit__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_close
static const FLASHMEM byte fun_data_uasyncio_stream_Stream_close[6] = {
    0x09,0x04, // prelude
    0x29,0x3e, // names: close, self
     // code info
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Stream_close = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Stream_close,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_uasyncio_stream_Stream_close + 4,
        .opcodes = fun_data_uasyncio_stream_Stream_close + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_wait_closed
static const FLASHMEM byte fun_data_uasyncio_stream_Stream_wait_closed[15] = {
    0x91,0x40,0x04, // prelude
    0x06,0x3e, // names: wait_closed, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x14,0x29, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Stream_wait_closed = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Stream_wait_closed,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_uasyncio_stream_Stream_wait_closed + 5,
        .opcodes = fun_data_uasyncio_stream_Stream_wait_closed + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_read
static const FLASHMEM byte fun_data_uasyncio_stream_Stream_read[61] = {
    0xb2,0x41,0x06, // prelude
    0x2a,0x3e,0x48, // names: read, self, n
     // code info
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xc2, // STORE_FAST 2
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR '_io_queue'
    0x14,0x2b, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x14,0x2a, // LOAD_METHOD 'read'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdb, // BINARY_OP 4 __ge__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb3, // LOAD_FAST 3
    0x63, // RETURN_VALUE
    0x12,0x43, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xe5, // BINARY_OP 14 __iadd__
    0xc2, // STORE_FAST 2
    0x42,0x0e, // JUMP -50
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Stream_read = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream_Stream_read,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 61,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 42,
        .line_info = fun_data_uasyncio_stream_Stream_read + 6,
        .opcodes = fun_data_uasyncio_stream_Stream_read + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_readinto
static const FLASHMEM byte fun_data_uasyncio_stream_Stream_readinto[28] = {
    0xa2,0x40,0x06, // prelude
    0x2c,0x3e,0x3f, // names: readinto, self, buf
     // code info
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR '_io_queue'
    0x14,0x2b, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x14,0x2c, // LOAD_METHOD 'readinto'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Stream_readinto = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream_Stream_readinto,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 28,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 44,
        .line_info = fun_data_uasyncio_stream_Stream_readinto + 6,
        .opcodes = fun_data_uasyncio_stream_Stream_readinto + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_readexactly
static const FLASHMEM byte fun_data_uasyncio_stream_Stream_readexactly[66] = {
    0xb2,0x40,0x06, // prelude
    0x2d,0x3e,0x48, // names: readexactly, self, n
     // code info
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xc2, // STORE_FAST 2
    0x42,0x72, // JUMP 50
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR '_io_queue'
    0x14,0x2b, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x14,0x2a, // LOAD_METHOD 'read'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x56, // POP_JUMP_IF_FALSE 22
    0x12,0x43, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x49, // LOAD_GLOBAL 'EOFError'
    0x65, // RAISE_OBJ
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xe5, // BINARY_OP 14 __iadd__
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x12,0x43, // LOAD_GLOBAL 'len'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0xe6, // BINARY_OP 15 __isub__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x43,0x0b, // POP_JUMP_IF_TRUE -53
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Stream_readexactly = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream_Stream_readexactly,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 66,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 45,
        .line_info = fun_data_uasyncio_stream_Stream_readexactly + 6,
        .opcodes = fun_data_uasyncio_stream_Stream_readexactly + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_readline
static const FLASHMEM byte fun_data_uasyncio_stream_Stream_readline[49] = {
    0xa9,0x40,0x04, // prelude
    0x2e,0x3e, // names: readline, self
     // code info
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xc1, // STORE_FAST 1
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR '_io_queue'
    0x14,0x2b, // LOAD_METHOD 'queue_read'
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x14,0x2e, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xe5, // BINARY_OP 14 __iadd__
    0xc1, // STORE_FAST 1
    0xb2, // LOAD_FAST 2
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0xb1, // LOAD_FAST 1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x8a, // LOAD_CONST_SMALL_INT 10
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
    0x42,0x19, // JUMP -39
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Stream_readline = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Stream_readline,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 49,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 46,
        .line_info = fun_data_uasyncio_stream_Stream_readline + 5,
        .opcodes = fun_data_uasyncio_stream_Stream_readline + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_write
static const FLASHMEM byte fun_data_uasyncio_stream_Stream_write[54] = {
    0x2a,0x06, // prelude
    0x20,0x3e,0x3f, // names: write, self, buf
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x25, // LOAD_ATTR 'out_buf'
    0x43,0x61, // POP_JUMP_IF_TRUE 33
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x14,0x20, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x12,0x43, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x25, // LOAD_ATTR 'out_buf'
    0xb1, // LOAD_FAST 1
    0xe5, // BINARY_OP 14 __iadd__
    0x5a, // ROT_TWO
    0x18,0x25, // STORE_ATTR 'out_buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Stream_write = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream_Stream_write,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 54,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 32,
        .line_info = fun_data_uasyncio_stream_Stream_write + 5,
        .opcodes = fun_data_uasyncio_stream_Stream_write + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Stream
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Stream_drain
static const FLASHMEM byte fun_data_uasyncio_stream_Stream_drain[86] = {
    0xc1,0x40,0x04, // prelude
    0x21,0x3e, // names: drain, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x25, // LOAD_ATTR 'out_buf'
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x2f, // LOAD_METHOD 'sleep_ms'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x63, // RETURN_VALUE
    0x12,0x42, // LOAD_GLOBAL 'memoryview'
    0xb0, // LOAD_FAST 0
    0x13,0x25, // LOAD_ATTR 'out_buf'
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xc2, // STORE_FAST 2
    0x42,0x65, // JUMP 37
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR '_io_queue'
    0x14,0x15, // LOAD_METHOD 'queue_write'
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x23, // LOAD_ATTR 's'
    0x14,0x20, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0xd3, // UNARY_OP 3 <not>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xe5, // BINARY_OP 14 __iadd__
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x12,0x43, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x12, // POP_JUMP_IF_TRUE -46
    0x23,0x00, // LOAD_CONST_OBJ 0
    0xb0, // LOAD_FAST 0
    0x18,0x25, // STORE_ATTR 'out_buf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Stream_drain = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Stream_drain,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 86,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 9,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 33,
        .line_info = fun_data_uasyncio_stream_Stream_drain + 5,
        .opcodes = fun_data_uasyncio_stream_Stream_drain + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_stream_Stream[] = {
    &raw_code_uasyncio_stream_Stream___init__,
    &raw_code_uasyncio_stream_Stream_get_extra_info,
    &raw_code_uasyncio_stream_Stream___aenter__,
    &raw_code_uasyncio_stream_Stream___aexit__,
    &raw_code_uasyncio_stream_Stream_close,
    &raw_code_uasyncio_stream_Stream_wait_closed,
    &raw_code_uasyncio_stream_Stream_read,
    &raw_code_uasyncio_stream_Stream_readinto,
    &raw_code_uasyncio_stream_Stream_readexactly,
    &raw_code_uasyncio_stream_Stream_readline,
    &raw_code_uasyncio_stream_Stream_write,
    &raw_code_uasyncio_stream_Stream_drain,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Stream = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_stream_Stream,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 70,
    #endif
    .children = (void *)&children_uasyncio_stream_Stream,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 12,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 4,
        .line_info = fun_data_uasyncio_stream_Stream + 3,
        .opcodes = fun_data_uasyncio_stream_Stream + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream__lt_module_gt_
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_open_connection
static const FLASHMEM byte fun_data_uasyncio_stream_open_connection[120] = {
    0xea,0x42,0x06, // prelude
    0x0a,0x39,0x3a, // names: open_connection, host, port
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x10,0x0b, // LOAD_CONST_STRING 'EINPROGRESS'
    0x2a,0x01, // BUILD_TUPLE 1
    0x1b,0x0c, // IMPORT_NAME 'uerrno'
    0x1c,0x0b, // IMPORT_FROM 'EINPROGRESS'
    0xc2, // STORE_FAST 2
    0x59, // POP_TOP
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0d, // IMPORT_NAME 'usocket'
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x14,0x0e, // LOAD_METHOD 'getaddrinfo'
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0xb3, // LOAD_FAST 3
    0x13,0x0f, // LOAD_ATTR 'SOCK_STREAM'
    0x36,0x04, // CALL_METHOD 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0x14,0x10, // LOAD_METHOD 'socket'
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xb4, // LOAD_FAST 4
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xb4, // LOAD_FAST 4
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x36,0x03, // CALL_METHOD 3
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x14,0x11, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Stream'
    0xb5, // LOAD_FAST 5
    0x34,0x01, // CALL_FUNCTION 1
    0xc6, // STORE_FAST 6
    0x48,0x0b, // SETUP_EXCEPT 11
    0xb5, // LOAD_FAST 5
    0x14,0x12, // LOAD_METHOD 'connect'
    0xb4, // LOAD_FAST 4
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0x1b, // POP_EXCEPT_JUMP 27
    0x57, // DUP_TOP
    0x12,0x3b, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x54, // POP_JUMP_IF_FALSE 20
    0xc7, // STORE_FAST 7
    0x49,0x0a, // SETUP_FINALLY 10
    0xb7, // LOAD_FAST 7
    0x13,0x13, // LOAD_ATTR 'errno'
    0xb2, // LOAD_FAST 2
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb7, // LOAD_FAST 7
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc7, // STORE_FAST 7
    0x28,0x07, // DELETE_FAST 7
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR '_io_queue'
    0x14,0x15, // LOAD_METHOD 'queue_write'
    0xb5, // LOAD_FAST 5
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0xb6, // LOAD_FAST 6
    0xb6, // LOAD_FAST 6
    0x2a,0x02, // BUILD_TUPLE 2
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_open_connection = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 2,
    .fun_data = fun_data_uasyncio_stream_open_connection,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 120,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 14,
        .n_exc_stack = 2,
        .scope_flags = 1,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_uasyncio_stream_open_connection + 6,
        .opcodes = fun_data_uasyncio_stream_open_connection + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream__lt_module_gt_
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Server
static const FLASHMEM byte fun_data_uasyncio_stream_Server[33] = {
    0x00,0x02, // prelude
    0x05, // names: Server
     // code info
    0x11,0x36, // LOAD_NAME '__name__'
    0x16,0x37, // STORE_NAME '__module__'
    0x10,0x05, // LOAD_CONST_STRING 'Server'
    0x16,0x38, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x27, // STORE_NAME '__aenter__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x28, // STORE_NAME '__aexit__'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x29, // STORE_NAME 'close'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x06, // STORE_NAME 'wait_closed'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x1d, // STORE_NAME '_serve'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of uasyncio_stream_Server
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Server___aenter__
static const FLASHMEM byte fun_data_uasyncio_stream_Server___aenter__[7] = {
    0x89,0x40,0x04, // prelude
    0x27,0x3e, // names: __aenter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Server___aenter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Server___aenter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 7,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 39,
        .line_info = fun_data_uasyncio_stream_Server___aenter__ + 5,
        .opcodes = fun_data_uasyncio_stream_Server___aenter__ + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Server
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Server___aexit__
static const FLASHMEM byte fun_data_uasyncio_stream_Server___aexit__[25] = {
    0xa8,0x44,0x0a, // prelude
    0x28,0x3e,0x45,0x46,0x47, // names: __aexit__, self, exc_type, exc, tb
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x29, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x06, // LOAD_METHOD 'wait_closed'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Server___aexit__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_stream_Server___aexit__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 25,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 40,
        .line_info = fun_data_uasyncio_stream_Server___aexit__ + 8,
        .opcodes = fun_data_uasyncio_stream_Server___aexit__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Server
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Server_close
static const FLASHMEM byte fun_data_uasyncio_stream_Server_close[14] = {
    0x11,0x04, // prelude
    0x29,0x3e, // names: close, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'task'
    0x14,0x30, // LOAD_METHOD 'cancel'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Server_close = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Server_close,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_uasyncio_stream_Server_close + 4,
        .opcodes = fun_data_uasyncio_stream_Server_close + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Server
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Server_wait_closed
static const FLASHMEM byte fun_data_uasyncio_stream_Server_wait_closed[14] = {
    0x91,0x40,0x04, // prelude
    0x06,0x3e, // names: wait_closed, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x1e, // LOAD_ATTR 'task'
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Server_wait_closed = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 1,
    .fun_data = fun_data_uasyncio_stream_Server_wait_closed,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 14,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 6,
        .line_info = fun_data_uasyncio_stream_Server_wait_closed + 5,
        .opcodes = fun_data_uasyncio_stream_Server_wait_closed + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream_Server
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_Server__serve
static const FLASHMEM byte fun_data_uasyncio_stream_Server__serve[94] = {
    0xdf,0x40,0x08, // prelude
    0x1d,0x3e,0x23,0x3c, // names: _serve, self, s, cb
     // code info
    0x48,0x0d, // SETUP_EXCEPT 13
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x14, // LOAD_ATTR '_io_queue'
    0x14,0x2b, // LOAD_METHOD 'queue_read'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x67, // YIELD_VALUE
    0x59, // POP_TOP
    0x4a,0x12, // POP_EXCEPT_JUMP 18
    0x57, // DUP_TOP
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x13,0x31, // LOAD_ATTR 'CancelledError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x14,0x29, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x5d, // END_FINALLY
    0x48,0x0b, // SETUP_EXCEPT 11
    0xb1, // LOAD_FAST 1
    0x14,0x32, // LOAD_METHOD 'accept'
    0x36,0x00, // CALL_METHOD 0
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc3, // STORE_FAST 3
    0xc4, // STORE_FAST 4
    0x4a,0x05, // POP_EXCEPT_JUMP 5
    0x59, // POP_TOP
    0x40,0x61,0x01, // UNWIND_JUMP 33
    0x5d, // END_FINALLY
    0xb3, // LOAD_FAST 3
    0x14,0x11, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x04, // LOAD_GLOBAL 'Stream'
    0xb3, // LOAD_FAST 3
    0x2c,0x01, // BUILD_MAP 1
    0xb4, // LOAD_FAST 4
    0x10,0x33, // LOAD_CONST_STRING 'peername'
    0x62, // STORE_MAP
    0x34,0x02, // CALL_FUNCTION 2
    0xc5, // STORE_FAST 5
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x1c, // LOAD_METHOD 'create_task'
    0xb2, // LOAD_FAST 2
    0xb5, // LOAD_FAST 5
    0xb5, // LOAD_FAST 5
    0x34,0x02, // CALL_FUNCTION 2
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0xab,0x7f, // JUMP -85
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Server__serve = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 3,
    .fun_data = fun_data_uasyncio_stream_Server__serve,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 94,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 1,
        .scope_flags = 1,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 29,
        .line_info = fun_data_uasyncio_stream_Server__serve + 7,
        .opcodes = fun_data_uasyncio_stream_Server__serve + 7,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_stream_Server[] = {
    &raw_code_uasyncio_stream_Server___aenter__,
    &raw_code_uasyncio_stream_Server___aexit__,
    &raw_code_uasyncio_stream_Server_close,
    &raw_code_uasyncio_stream_Server_wait_closed,
    &raw_code_uasyncio_stream_Server__serve,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_Server = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_stream_Server,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 33,
    #endif
    .children = (void *)&children_uasyncio_stream_Server,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 5,
        .line_info = fun_data_uasyncio_stream_Server + 3,
        .opcodes = fun_data_uasyncio_stream_Server + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream__lt_module_gt_
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_start_server
static const FLASHMEM byte fun_data_uasyncio_stream_start_server[88] = {
    0xe0,0x45,0x0a, // prelude
    0x16,0x3c,0x39,0x3a,0x3d, // names: start_server, cb, host, port, backlog
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0d, // IMPORT_NAME 'usocket'
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x14,0x0e, // LOAD_METHOD 'getaddrinfo'
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0x36,0x02, // CALL_METHOD 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc1, // STORE_FAST 1
    0xb4, // LOAD_FAST 4
    0x14,0x10, // LOAD_METHOD 'socket'
    0x36,0x00, // CALL_METHOD 0
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x14,0x11, // LOAD_METHOD 'setblocking'
    0x50, // LOAD_CONST_FALSE
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb5, // LOAD_FAST 5
    0x14,0x17, // LOAD_METHOD 'setsockopt'
    0xb4, // LOAD_FAST 4
    0x13,0x18, // LOAD_ATTR 'SOL_SOCKET'
    0xb4, // LOAD_FAST 4
    0x13,0x19, // LOAD_ATTR 'SO_REUSEADDR'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x03, // CALL_METHOD 3
    0x59, // POP_TOP
    0xb5, // LOAD_FAST 5
    0x14,0x1a, // LOAD_METHOD 'bind'
    0xb1, // LOAD_FAST 1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb5, // LOAD_FAST 5
    0x14,0x1b, // LOAD_METHOD 'listen'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x05, // LOAD_GLOBAL 'Server'
    0x34,0x00, // CALL_FUNCTION 0
    0xc6, // STORE_FAST 6
    0x12,0x02, // LOAD_GLOBAL 'core'
    0x14,0x1c, // LOAD_METHOD 'create_task'
    0xb6, // LOAD_FAST 6
    0x14,0x1d, // LOAD_METHOD '_serve'
    0xb5, // LOAD_FAST 5
    0xb0, // LOAD_FAST 0
    0x36,0x02, // CALL_METHOD 2
    0x36,0x01, // CALL_METHOD 1
    0xb6, // LOAD_FAST 6
    0x18,0x1e, // STORE_ATTR 'task'
    0xb6, // LOAD_FAST 6
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_start_server = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_stream_start_server,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 88,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 22,
        .line_info = fun_data_uasyncio_stream_start_server + 8,
        .opcodes = fun_data_uasyncio_stream_start_server + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of uasyncio_stream__lt_module_gt_
// frozen bytecode for file uasyncio/stream.py, scope uasyncio_stream_stream_awrite
static const FLASHMEM byte fun_data_uasyncio_stream_stream_awrite[63] = {
    0xb8,0xc4,0x01,0x0a, // prelude
    0x1f,0x3e,0x3f,0x40,0x41, // names: stream_awrite, self, buf, off, sz
     // code info
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0xdc, // BINARY_OP 5 __ne__
    0x43,0x45, // POP_JUMP_IF_TRUE 5
    0xb3, // LOAD_FAST 3
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x5a, // POP_JUMP_IF_FALSE 26
    0x12,0x42, // LOAD_GLOBAL 'memoryview'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0xb3, // LOAD_FAST 3
    0x7f, // LOAD_CONST_SMALL_INT -1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x43, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0xb1, // LOAD_FAST 1
    0xb2, // LOAD_FAST 2
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0xf2, // BINARY_OP 27 __add__
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x20, // LOAD_METHOD 'write'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x21, // LOAD_METHOD 'drain'
    0x36,0x00, // CALL_METHOD 0
    0x5e, // GET_ITER
    0x51, // LOAD_CONST_NONE
    0x68, // YIELD_FROM
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream_stream_awrite = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x01,
    .n_pos_args = 4,
    .fun_data = fun_data_uasyncio_stream_stream_awrite,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 63,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 1,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 31,
        .line_info = fun_data_uasyncio_stream_stream_awrite + 9,
        .opcodes = fun_data_uasyncio_stream_stream_awrite + 9,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const FLASHMEM mp_raw_code_t *const children_uasyncio_stream__lt_module_gt_[] = {
    &raw_code_uasyncio_stream_Stream,
    &raw_code_uasyncio_stream_open_connection,
    &raw_code_uasyncio_stream_Server,
    &raw_code_uasyncio_stream_start_server,
    &raw_code_uasyncio_stream_stream_awrite,
};

static const FLASHMEM mp_raw_code_t raw_code_uasyncio_stream__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_uasyncio_stream__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 84,
    #endif
    .children = (void *)&children_uasyncio_stream__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_uasyncio_stream__lt_module_gt_ + 3,
        .opcodes = fun_data_uasyncio_stream__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t FLASHMEM const_qstr_table_data_uasyncio_stream[74] = {
    MP_QSTR_uasyncio_slash_stream_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_core,
    MP_QSTR_,
    MP_QSTR_Stream,
    MP_QSTR_Server,
    MP_QSTR_wait_closed,
    MP_QSTR_aclose,
    MP_QSTR_awrite,
    MP_QSTR_awritestr,
    MP_QSTR_open_connection,
    MP_QSTR_EINPROGRESS,
    MP_QSTR_uerrno,
    MP_QSTR_usocket,
    MP_QSTR_getaddrinfo,
    MP_QSTR_SOCK_STREAM,
    MP_QSTR_socket,
    MP_QSTR_setblocking,
    MP_QSTR_connect,
    MP_QSTR_errno,
    MP_QSTR__io_queue,
    MP_QSTR_queue_write,
    MP_QSTR_start_server,
    MP_QSTR_setsockopt,
    MP_QSTR_SOL_SOCKET,
    MP_QSTR_SO_REUSEADDR,
    MP_QSTR_bind,
    MP_QSTR_listen,
    MP_QSTR_create_task,
    MP_QSTR__serve,
    MP_QSTR_task,
    MP_QSTR_stream_awrite,
    MP_QSTR_write,
    MP_QSTR_drain,
    MP_QSTR___init__,
    MP_QSTR_s,
    MP_QSTR_e,
    MP_QSTR_out_buf,
    MP_QSTR_get_extra_info,
    MP_QSTR___aenter__,
    MP_QSTR___aexit__,
    MP_QSTR_close,
    MP_QSTR_read,
    MP_QSTR_queue_read,
    MP_QSTR_readinto,
    MP_QSTR_readexactly,
    MP_QSTR_readline,
    MP_QSTR_sleep_ms,
    MP_QSTR_cancel,
    MP_QSTR_CancelledError,
    MP_QSTR_accept,
    MP_QSTR_peername,
    MP_QSTR_StreamReader,
    MP_QSTR_StreamWriter,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_host,
    MP_QSTR_port,
    MP_QSTR_OSError,
    MP_QSTR_cb,
    MP_QSTR_backlog,
    MP_QSTR_self,
    MP_QSTR_buf,
    MP_QSTR_off,
    MP_QSTR_sz,
    MP_QSTR_memoryview,
    MP_QSTR_len,
    MP_QSTR_v,
    MP_QSTR_exc_type,
    MP_QSTR_exc,
    MP_QSTR_tb,
    MP_QSTR_n,
    MP_QSTR_EOFError,
};

// constants

// constant table
static const mp_rom_obj_t FLASHMEM const_obj_table_data_uasyncio_stream[1] = {
    MP_ROM_PTR(&mp_const_empty_bytes_obj),
};

static const FLASHMEM mp_frozen_module_t frozen_module_uasyncio_stream = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_uasyncio_stream,
        .obj_table = (mp_obj_t *)&const_obj_table_data_uasyncio_stream,
    },
    .rc = &raw_code_uasyncio_stream__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// collection of all frozen modules

const FLASHMEM char mp_frozen_names[] = {
    #ifdef MP_FROZEN_STR_NAMES
    MP_FROZEN_STR_NAMES
    #endif
    "digitalio.py\0"
    "usb_hid.py\0"
    "board.py\0"
    "micropython.py\0"
    "neopixel_write.py\0"
    "__version__.py\0"
    "keypad.py\0"
    "pwmio.py\0"
    "rainbowio.py\0"
    "_boot.py\0"
    "bitbangio.py\0"
    "analogio.py\0"
    "pulseio.py\0"
    "onewireio.py\0"
    "certifi/__init__.py\0"
    "certifi/core.py\0"
    "certifi/__main__.py\0"
    "certifi/tests/__init__.py\0"
    "certifi/tests/test_certify.py\0"
    "onewire.py\0"
    "ds18x20.py\0"
    "dht.py\0"
    "uasyncio/__init__.py\0"
    "uasyncio/core.py\0"
    "uasyncio/event.py\0"
    "uasyncio/funcs.py\0"
    "uasyncio/lock.py\0"
    "uasyncio/stream.py\0"
    "\0"
};

const FLASHMEM mp_frozen_module_t *const mp_frozen_mpy_content[] = {
    &frozen_module_digitalio,
    &frozen_module_usb_hid,
    &frozen_module_board,
    &frozen_module_micropython,
    &frozen_module_neopixel_write,
    &frozen_module___version__,
    &frozen_module_keypad,
    &frozen_module_pwmio,
    &frozen_module_rainbowio,
    &frozen_module__boot,
    &frozen_module_bitbangio,
    &frozen_module_analogio,
    &frozen_module_pulseio,
    &frozen_module_onewireio,
    &frozen_module_certifi___init__,
    &frozen_module_certifi_core,
    &frozen_module_certifi___main__,
    &frozen_module_certifi_tests___init__,
    &frozen_module_certifi_tests_test_certify,
    &frozen_module_onewire,
    &frozen_module_ds18x20,
    &frozen_module_dht,
    &frozen_module_uasyncio___init__,
    &frozen_module_uasyncio_core,
    &frozen_module_uasyncio_event,
    &frozen_module_uasyncio_funcs,
    &frozen_module_uasyncio_lock,
    &frozen_module_uasyncio_stream,
};

#ifdef MICROPY_FROZEN_LIST_ITEM
MICROPY_FROZEN_LIST_ITEM("digitalio", "digitalio.py")
MICROPY_FROZEN_LIST_ITEM("usb_hid", "usb_hid.py")
MICROPY_FROZEN_LIST_ITEM("board", "board.py")
MICROPY_FROZEN_LIST_ITEM("micropython", "micropython.py")
MICROPY_FROZEN_LIST_ITEM("neopixel_write", "neopixel_write.py")
MICROPY_FROZEN_LIST_ITEM("__version__", "__version__.py")
MICROPY_FROZEN_LIST_ITEM("keypad", "keypad.py")
MICROPY_FROZEN_LIST_ITEM("pwmio", "pwmio.py")
MICROPY_FROZEN_LIST_ITEM("rainbowio", "rainbowio.py")
MICROPY_FROZEN_LIST_ITEM("_boot", "_boot.py")
MICROPY_FROZEN_LIST_ITEM("bitbangio", "bitbangio.py")
MICROPY_FROZEN_LIST_ITEM("analogio", "analogio.py")
MICROPY_FROZEN_LIST_ITEM("pulseio", "pulseio.py")
MICROPY_FROZEN_LIST_ITEM("onewireio", "onewireio.py")
MICROPY_FROZEN_LIST_ITEM("certifi", "certifi/__init__.py")
MICROPY_FROZEN_LIST_ITEM("certifi/core", "certifi/core.py")
MICROPY_FROZEN_LIST_ITEM("certifi/__main__", "certifi/__main__.py")
MICROPY_FROZEN_LIST_ITEM("certifi/tests", "certifi/tests/__init__.py")
MICROPY_FROZEN_LIST_ITEM("certifi/tests/test_certify", "certifi/tests/test_certify.py")
MICROPY_FROZEN_LIST_ITEM("onewire", "onewire.py")
MICROPY_FROZEN_LIST_ITEM("ds18x20", "ds18x20.py")
MICROPY_FROZEN_LIST_ITEM("dht", "dht.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio", "uasyncio/__init__.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/core", "uasyncio/core.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/event", "uasyncio/event.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/funcs", "uasyncio/funcs.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/lock", "uasyncio/lock.py")
MICROPY_FROZEN_LIST_ITEM("uasyncio/stream", "uasyncio/stream.py")
#endif

/*
byte sizes:
qstr content: 726 unique, 14693 bytes
bc content: 16708
const FLASHMEM str content: 740
const FLASHMEM int content: 0
const FLASHMEM obj content: 276
const FLASHMEM table qstr content: 0 entries, 0 bytes
const FLASHMEM table ptr content: 77 entries, 308 bytes
raw code content: 251 * 4 = 4016
mp_frozen_mpy_names_content: 423
mp_frozen_mpy_content_size: 112
total: 37276
*/
#ifdef __cplusplus
}
#endif
