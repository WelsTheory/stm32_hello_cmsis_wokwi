#include "main.h"
#include "GPIO.h"

int main(void)
{
  // Enable GPIOA, GPIOB, GPIOC and GPIOD and configure PA5 as an output pin
  RCC->IOPENR |= (1UL << 3 | 1UL<<2 | 1UL<<1 | 1UL<<0);
  GPIOA->MODER &= ~(3UL<<10);
  GPIOA->MODER |= (1UL<<10);
  //configure PD1 as an output pin
  GPIOD->MODER &= ~(3UL<<2);
  GPIOD->MODER |= (1UL<<2);
  //Configure PC13 Input
  GPIOC->MODER &= ~(3UL << 26);
  //Configure Pull-UP PC13
  GPIOC->PUPDR &= ~(3UL << 26);
  GPIOC->PUPDR |= (1UL << 26);
  while (1)
  {
    // Turn OFF LED1 PA5 is the button is pressed
    GPIO_Write(GPIO_Read());
    // Toggle the state of PD2
    GPIO_Toggle();
    for(uint32_t i = 0; i < 60000; i++);
    // call a delay using for

  }
  return 0;
}
