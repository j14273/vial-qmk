# MCU name
MCU = RP2040
# Bootloader selection
BOOTLOADER = rp2040
# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = yes         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
ENCODER_ENABLE = yes
RGB_MATRIX_ENABLE = no
RGB_MATRIX_DRIVER = WS2812
WS2812_DRIVER = vendor
OLED_ENABLE = no
OLED_DRIVER = custom
# Project specific files
SRC += lib/ssd1306_sh1106.c
QUANTUM_LIB_SRC += spi_master.c
LTO_ENABLE = yes
