################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
horI2CtinyUSB.lss \

FLASH_IMAGE += \
horI2CtinyUSB.hex \

EEPROM_IMAGE += \
horI2CtinyUSB.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: horI2CtinyUSB.elf secondary-outputs

# Tool invocations
horI2CtinyUSB.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,horI2CtinyUSB.map -mmcu=attiny45 -o "horI2CtinyUSB.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

horI2CtinyUSB.lss: horI2CtinyUSB.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S horI2CtinyUSB.elf  >"horI2CtinyUSB.lss"
	@echo 'Finished building: $@'
	@echo ' '

horI2CtinyUSB.hex: horI2CtinyUSB.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex horI2CtinyUSB.elf  "horI2CtinyUSB.hex"
	@echo 'Finished building: $@'
	@echo ' '

horI2CtinyUSB.eep: horI2CtinyUSB.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex horI2CtinyUSB.elf  "horI2CtinyUSB.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: horI2CtinyUSB.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=attiny45 horI2CtinyUSB.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) horI2CtinyUSB.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
