###############################################################################
# REGISTRY
#

LIBRARIES_TO_BUILD += renesas_mculib


renesas_mculib_FILES = \
    $(MCU_CORE_PATH)\src\Mcu.c \
    $(MCU_CORE_PATH)\src\Mcu_Ram.c \
    $(MCU_CORE_PATH)\src\Mcu_Irq.c \
    $(MCU_CORE_PATH)\src\Mcu_Version.c

CC_FILES_TO_BUILD += \
    $(MCU_CORE_PATH)\src\Mcu.c \
    $(MCU_CORE_PATH)\src\Mcu_Ram.c \
    $(MCU_CORE_PATH)\src\Mcu_Irq.c \
    $(MCU_CORE_PATH)\src\Mcu_Version.c


OBJECTS_LINK_ONLY +=

ifeq ($(MCU_DBASE_REQ),yes)
GENERATED_SOURCE_FILES += \
     $(MCU_PROJECT_PATH)\src\Mcu_PBcfg.c
endif
MAKE_CLEAN_RULES += mcu_clean_generated_files
MAKE_DEBUG_RULES += debug_mcu_makefile
MAKE_CONFIG_RULES += generate_mcu_config

mcu_clean_generated_files:
	@del $(MCU_CONFIG_PATH)\src\*.c
	@del $(MCU_CONFIG_PATH)\include\*.h

###############################################################################
# Command to print debug information                                          #
###############################################################################
debug_mcu_makefile:
	@echo MCU_PROJECT_PATH = $(MCU_PROJECT_PATH)
	@echo MCU_CORE_PATH = $(MCU_CORE_PATH)
	@echo MCU_TOOL_PATH = $(MCU_TOOL_PATH)
	@echo MCU_CONFIG_PATH = $(MCU_CONFIG_PATH)
	@echo MCU_CONFIG_FILE = $(MCU_CONFIG_FILE)
	@echo MCU_DBASE_REQ = $(MCU_DBASE_REQ)

  
 DEM_CONFIG_FILE = $(STUBS_PATH)\Dem\xml\Dem_Mcu.arxml
###############################################################################
# Command to trigger the tool and generate configuration files                #
###############################################################################
generate_mcu_config:

 ifeq ($(AUTOSAR_VERSION), 4.0.3)
	"$(PROJECT_ROOT)\tools\RUCG\RUCG.exe" "$(MCU_TOOL_PATH)\$(MODULE_NAME)_$(MICRO_VARIANT).dll" -o "$(MCU_CONFIG_PATH)" "$(MCU_CONFIG_FILE)" "$(TRXML_CONFIG_FILE)" "$(DEM_CONFIG_FILE)" "$(MCU_BSWMDT_CONFIG_FILE)"
 endif


###############################################################################
