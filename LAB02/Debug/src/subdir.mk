################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Lab02.cpp \
../src/Lab02_Simple_Menu_Clarke_Lauria.cpp \
../src/asdfasdf.cpp 

OBJS += \
./src/Lab02.o \
./src/Lab02_Simple_Menu_Clarke_Lauria.o \
./src/asdfasdf.o 

CPP_DEPS += \
./src/Lab02.d \
./src/Lab02_Simple_Menu_Clarke_Lauria.d \
./src/asdfasdf.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


