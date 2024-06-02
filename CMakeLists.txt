# configure minimum cmake version
cmake_minimum_required(VERSION 3.12)

# set PICO SDK PATH
set(PICO_SDK_PATH "~/pico/pico-sdk")
set(PICO_PLATFORM "rp2040")
set(PICO_BOARD pico)
set(PICO_COMPILER pico_arm_gcc)

# Pull in SDK (must be before project)
include(${PICO_SDK_PATH}/external/pico_sdk_import.cmake)

# configure project name and language
project(rp2040 C CXX ASM)

# initialie project
pico_sdk_init()

# add executable file
add_executable(blink blink/blink.c)

# link pico sdk into blink exectutable file
target_link_libraries(blink pico_stdlib)

pico_enable_stdio_usb(blink 1)

# set executable file name
pico_add_extra_outputs(blink)
