/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32_GPIO_H__
#define __STM32_GPIO_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "gpio_api.h"
#include "stm32f4xx_hal.h"

class gpio : public gpio_api
{
    GPIO_TypeDef *port;
public:
    gpio(GPIO_TypeDef *port);

    void pinMode(int pin, bool mode) override;

    void digitalWrite(int pin, bool state) override;
};

#ifdef __cplusplus
}
#endif

#endif /* __STM32_GPIO_H__ */