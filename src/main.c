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
#include "circbuf.h"
#include <stdio.h>
int main(void)
{
  uint32_t i = 0;
  #ifdef PROJECT1
    project1();
  #endif

  #ifdef PROJECT2
    //GPIO_Configure();
  #endif
  //GPIO_Configure();
  CB_t * buffer = NULL;
  CB_init(&buffer,10);
  CB_buffer_add_item(buffer,1);
  CB_buffer_add_item(buffer,2);
  CB_buffer_add_item(buffer,3);
  CB_buffer_add_item(buffer,4);
  CB_buffer_add_item(buffer,5);
  CB_buffer_add_item(buffer,6);
  CB_buffer_add_item(buffer,7);
  CB_buffer_add_item(buffer,8);
  CB_buffer_add_item(buffer,9);
  CB_buffer_add_item(buffer,10);
  uint8_t x;
  CB_buffer_remove_item(buffer,&x);
  CB_buffer_remove_item(buffer,&x);
  CB_buffer_remove_item(buffer,&x);
  CB_buffer_remove_item(buffer,&x);
  CB_buffer_remove_item(buffer,&x);
  printf("Num: %d\n",x);
//  printf("%d\n",*(buffer->tail+1));
  while(*(buffer->tail+i))
  {
    printf("%d\n",*(buffer->tail+i));
    i++;
  }



  while(1)
  {
    //Toggle_Red_LED();
    for(i=0;i<1000000;i++);
  }
}
