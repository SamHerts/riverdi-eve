cmake_minimum_required(VERSION 3.0)
project(riverdi-demo)

# List all C defines here
add_compile_definitions(
        LINUX_PLATFORM
        BUFFER_OPTIMIZATION
        EVE_4
        IPS_43
)

# Define optimization level here
set(OPT "")

# List of source files
set(SRC
        riverdi-demo.c
        host_layer/linux/platform.c
        eve_layer/Gpu_Hal.c
        eve_layer/CoPro_Cmds.c
        eve_layer/Hal_Utils.c
        app_layer/App_Common.c
        )

# List all include directories here
include_directories(
        .
        host_layer/linux
        eve_layer
        app_layer
        riverdi_modules
)

# List the user directory to look for the libraries here
link_directories()

# List all user libraries here
set(LIBS "")

# Flags
set(COMMONFLAGS "")
set(ASFLAGS ${COMMONFLAGS})
set(CPFLAGS ${COMMONFLAGS})
set(LDFLAGS ${COMMONFLAGS})

add_executable(${PROJECT} ${SRC})
#target_compile_options(${PROJECT} PRIVATE ${CPFLAGS})
#target_link_libraries(${PROJECT} ${LIBS})
