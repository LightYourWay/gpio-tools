#include "stm32_gpio.h"

gpio::gpio(GPIO_TypeDef *port) : port(port) {}

void gpio::pinMode(int pin, bool mode) {
    // Setting Pin Mode is not yet supported for stm32 platforms
}

void gpio::digitalWrite(int pin, bool state) {
    HAL_GPIO_WritePin(port, pin, (GPIO_PinState)state);
}