#include "mcp23xxx_gpio.h"

mcp23xxx_gpio::mcp23xxx_gpio(mcp23xxx *port) : port(port) {}

void mcp23xxx_gpio::pinMode(int pin, bool mode) {
    port->pinMode(pin, mode);
}

void mcp23xxx_gpio::digitalWrite(int pin, bool state) {
    port->writePin(pin, state);
}