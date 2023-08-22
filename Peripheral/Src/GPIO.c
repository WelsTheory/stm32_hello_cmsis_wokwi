
#include "GPIO.h"

void GPIO_Write(gpio_state_t state)
{
  if(state)
  {
    GPIOA->ODR |= (1UL<<5);
  }
  else
  {
    GPIOA->ODR &= ~(1UL<<5);
  }
}

gpio_state_t GPIO_Read(void)
{
  if(GPIOC->IDR & 1UL<<13)
	{
		return HIGH;
	}
	else
	{
		return LOW;
	}
}

void GPIO_Toggle(void)
{
    GPIOD->ODR ^= (1UL<<1);
}