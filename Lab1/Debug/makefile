################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := F:/ti/ccs1200/ccs/tools/compiler/ti-cgt-arm_20.2.6.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./startup_msp432p401r_ccs.obj" \
"./system_msp432p401r.obj" \
"./driverlib/MSP432P4xx/adc14.obj" \
"./driverlib/MSP432P4xx/aes256.obj" \
"./driverlib/MSP432P4xx/comp_e.obj" \
"./driverlib/MSP432P4xx/cpu.obj" \
"./driverlib/MSP432P4xx/crc32.obj" \
"./driverlib/MSP432P4xx/cs.obj" \
"./driverlib/MSP432P4xx/dma.obj" \
"./driverlib/MSP432P4xx/flash.obj" \
"./driverlib/MSP432P4xx/fpu.obj" \
"./driverlib/MSP432P4xx/gpio.obj" \
"./driverlib/MSP432P4xx/i2c.obj" \
"./driverlib/MSP432P4xx/interrupt.obj" \
"./driverlib/MSP432P4xx/mpu.obj" \
"./driverlib/MSP432P4xx/pcm.obj" \
"./driverlib/MSP432P4xx/pmap.obj" \
"./driverlib/MSP432P4xx/pss.obj" \
"./driverlib/MSP432P4xx/ref_a.obj" \
"./driverlib/MSP432P4xx/reset.obj" \
"./driverlib/MSP432P4xx/rtc_c.obj" \
"./driverlib/MSP432P4xx/spi.obj" \
"./driverlib/MSP432P4xx/sysctl.obj" \
"./driverlib/MSP432P4xx/systick.obj" \
"./driverlib/MSP432P4xx/timer32.obj" \
"./driverlib/MSP432P4xx/timer_a.obj" \
"./driverlib/MSP432P4xx/uart.obj" \
"./driverlib/MSP432P4xx/wdt_a.obj" \
"../msp432p401r.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include driverlib/MSP432P4xx/subdir_vars.mk
-include subdir_rules.mk
-include driverlib/MSP432P4xx/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
Lab1.out \

EXE_OUTPUTS__QUOTED += \
"Lab1.out" \

BIN_OUTPUTS += \
Lab1.hex \

BIN_OUTPUTS__QUOTED += \
"Lab1.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "Lab1.out"

# Tool invocations
Lab1.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: Arm Linker'
	"F:/ti/ccs1200/ccs/tools/compiler/ti-cgt-arm_20.2.6.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --advice:power=all --define=__MSP432P401R__ --define=ccs -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi -z -m"Lab1.map" --heap_size=1024 --stack_size=512 -i"F:/ti/ccs1200/ccs/ccs_base/arm/include" -i"F:/ti/ccs1200/ccs/tools/compiler/ti-cgt-arm_20.2.6.LTS/lib" -i"F:/ti/ccs1200/ccs/tools/compiler/ti-cgt-arm_20.2.6.LTS/include" --reread_libs --diag_wrap=off --display_error_number --warn_sections --xml_link_info="Lab1_linkInfo.xml" --rom_model -o "Lab1.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

Lab1.hex: $(EXE_OUTPUTS)
	@echo 'Building secondary target: "$@"'
	@echo 'Invoking: Arm Hex Utility'
	"F:/ti/ccs1200/ccs/tools/compiler/ti-cgt-arm_20.2.6.LTS/bin/armhex" --memwidth=8 --romwidth=8 --diag_wrap=off -o "Lab1.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building secondary target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "startup_msp432p401r_ccs.obj" "system_msp432p401r.obj" "driverlib\MSP432P4xx\adc14.obj" "driverlib\MSP432P4xx\aes256.obj" "driverlib\MSP432P4xx\comp_e.obj" "driverlib\MSP432P4xx\cpu.obj" "driverlib\MSP432P4xx\crc32.obj" "driverlib\MSP432P4xx\cs.obj" "driverlib\MSP432P4xx\dma.obj" "driverlib\MSP432P4xx\flash.obj" "driverlib\MSP432P4xx\fpu.obj" "driverlib\MSP432P4xx\gpio.obj" "driverlib\MSP432P4xx\i2c.obj" "driverlib\MSP432P4xx\interrupt.obj" "driverlib\MSP432P4xx\mpu.obj" "driverlib\MSP432P4xx\pcm.obj" "driverlib\MSP432P4xx\pmap.obj" "driverlib\MSP432P4xx\pss.obj" "driverlib\MSP432P4xx\ref_a.obj" "driverlib\MSP432P4xx\reset.obj" "driverlib\MSP432P4xx\rtc_c.obj" "driverlib\MSP432P4xx\spi.obj" "driverlib\MSP432P4xx\sysctl.obj" "driverlib\MSP432P4xx\systick.obj" "driverlib\MSP432P4xx\timer32.obj" "driverlib\MSP432P4xx\timer_a.obj" "driverlib\MSP432P4xx\uart.obj" "driverlib\MSP432P4xx\wdt_a.obj" 
	-$(RM) "main.d" "startup_msp432p401r_ccs.d" "system_msp432p401r.d" "driverlib\MSP432P4xx\adc14.d" "driverlib\MSP432P4xx\aes256.d" "driverlib\MSP432P4xx\comp_e.d" "driverlib\MSP432P4xx\cpu.d" "driverlib\MSP432P4xx\crc32.d" "driverlib\MSP432P4xx\cs.d" "driverlib\MSP432P4xx\dma.d" "driverlib\MSP432P4xx\flash.d" "driverlib\MSP432P4xx\fpu.d" "driverlib\MSP432P4xx\gpio.d" "driverlib\MSP432P4xx\i2c.d" "driverlib\MSP432P4xx\interrupt.d" "driverlib\MSP432P4xx\mpu.d" "driverlib\MSP432P4xx\pcm.d" "driverlib\MSP432P4xx\pmap.d" "driverlib\MSP432P4xx\pss.d" "driverlib\MSP432P4xx\ref_a.d" "driverlib\MSP432P4xx\reset.d" "driverlib\MSP432P4xx\rtc_c.d" "driverlib\MSP432P4xx\spi.d" "driverlib\MSP432P4xx\sysctl.d" "driverlib\MSP432P4xx\systick.d" "driverlib\MSP432P4xx\timer32.d" "driverlib\MSP432P4xx\timer_a.d" "driverlib\MSP432P4xx\uart.d" "driverlib\MSP432P4xx\wdt_a.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

