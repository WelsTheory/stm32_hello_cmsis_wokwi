
#ifndef GPIO_H
#define GPIO_H

#include "main.h"

typedef enum{
  LOW,
  HIGH
}gpio_state_t;

void GPIO_Write(gpio_state_t state);

gpio_state_t GPIO_Read(void);

void GPIO_Toggle(void);

#endif /* INC_GPIO_H_ */