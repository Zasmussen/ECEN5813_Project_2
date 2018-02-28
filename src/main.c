/**
 * @file main.c
 * @brief Main project file set for project1 currently
 *
 * Main file which will currently run project1() function
 * and eventually other functions
 *
 * @author Zachary Asmussen
 * @date January 30th, 2018
 *
 */
#include "project1.h"
#include "GPIO.h"
int main(void)
{
  uint32_t i;
  #ifdef PROJECT1
    project1();
  #endif

  #ifdef PROJECT2
    GPIO_Configure();
  #endif
  GPIO_Configure();
  while(1)
  {
    Toggle_Red_LED();
    for(i=0;i<1000000;i++);
  }
}
