/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GPIO_API_H__
#define __GPIO_API_H__

#ifdef __cplusplus
extern "C"
{
#endif

// define modes
#define OUTPUT 0
#define INPUT 1

// define states
#define LOW 0
#define HIGH 1

struct gpio_api
{
    virtual void pinMode(int pin, bool mode) = 0;

    virtual void digitalWrite(int pin, bool state) = 0;
};

#ifdef __cplusplus
}
#endif

#endif /* __GPIO_API_H__ */