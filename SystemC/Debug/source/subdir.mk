################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../fsm.cpp \
../hardware.cpp \
../software.cpp 

OBJS += \
./source/fsm.o \
./source/hardware.o \
./source/software.o 

CPP_DEPS += \
./source/fsm.d \
./source/hardware.d \
./source/software.d 


# Each subdirectory must supply rules for building sources it contributes
source/fsm.o: H:/Jorge/UPM/master/2oCuatri/HLS/Proyectos/Proyectos/SystemC/fsm.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -IC:/Xilinx/Vivado/2018.3/include -IC:/Xilinx/Vivado/2018.3/win64/tools/auto_cc/include -IH:/Jorge/UPM/master/2oCuatri/HLS/Proyectos/Proyectos -IC:/Xilinx/Vivado/2018.3/include/ap_sysc -IC:/Xilinx/Vivado/2018.3/win64/tools/systemc/include -IC:/Xilinx/Vivado/2018.3/include/etc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

source/hardware.o: H:/Jorge/UPM/master/2oCuatri/HLS/Proyectos/Proyectos/SystemC/hardware.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -IC:/Xilinx/Vivado/2018.3/include -IC:/Xilinx/Vivado/2018.3/win64/tools/auto_cc/include -IH:/Jorge/UPM/master/2oCuatri/HLS/Proyectos/Proyectos -IC:/Xilinx/Vivado/2018.3/include/ap_sysc -IC:/Xilinx/Vivado/2018.3/win64/tools/systemc/include -IC:/Xilinx/Vivado/2018.3/include/etc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

source/software.o: H:/Jorge/UPM/master/2oCuatri/HLS/Proyectos/Proyectos/SystemC/software.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -IC:/Xilinx/Vivado/2018.3/include -IC:/Xilinx/Vivado/2018.3/win64/tools/auto_cc/include -IH:/Jorge/UPM/master/2oCuatri/HLS/Proyectos/Proyectos -IC:/Xilinx/Vivado/2018.3/include/ap_sysc -IC:/Xilinx/Vivado/2018.3/win64/tools/systemc/include -IC:/Xilinx/Vivado/2018.3/include/etc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


