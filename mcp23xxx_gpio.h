/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MCP23XXX_GPIO_H__
#define __MCP23XXX_GPIO_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "gpio_api.h"
#include "mcp23xxx.h"

class mcp23xxx_gpio : public gpio_api
{
    mcp23xxx *port;
public:
    mcp23xxx_gpio(mcp23xxx *port);

    void pinMode(int pin, bool mode) override;

    void digitalWrite(int pin, bool state) override;
};

#ifdef __cplusplus
}
#endif

#endif /* __STM32_GPIO_H__ */