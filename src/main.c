/**
 * @file main.c
 * @brief Main project file set for project control
 *
 * Main file which will currently run project1() function
 * and project2() function
 *
 * @author Zachary Asmussen
 * @date January 30th, 2018
 *
 */
#include "project1.h"
#include "project2.h"
#include <stdio.h>
#include "MKL25Z4.h"
#include "project2.h"
int main(void)
{
  uint32_t i;
  #ifdef PROJECT1
    project1();
  #endif

  #ifdef PROJECT2
    project2();
  #endif
  //GPIO_Configure();
//  CB_t * buffer = NULL;
//  CB_init(&buffer,10);
//  CB_buffer_add_item(buffer,1);
//  CB_buffer_add_item(buffer,2);
//  CB_buffer_add_item(buffer,3);
//  CB_buffer_add_item(buffer,4);
//  CB_buffer_add_item(buffer,5);
//  CB_buffer_add_item(buffer,6);
//  CB_buffer_add_item(buffer,7);
//  CB_buffer_add_item(buffer,8);
//  CB_buffer_add_item(buffer,9);
//  CB_buffer_add_item(buffer,10);
//  uint8_t x;
//  CB_buffer_remove_item(buffer,&x);
//  CB_buffer_remove_item(buffer,&x);
//  CB_buffer_remove_item(buffer,&x);
//  CB_buffer_remove_item(buffer,&x);
//  CB_buffer_remove_item(buffer,&x);
  //printf("Num: %d\n",x);
//  printf("%d\n",*(buffer->tail+1));
//  while(*(buffer->tail+i))
//  {
//    printf("%d\n",*(buffer->tail+i));
//    i++;
//  }
//


  while(1)
  {
    i++;
  }
}

//void USB0_IRQHandler()
//{
//	int x = 0;
//	printf("%d\n",x);
//
//}
//
//void UART2_IRQHandler()
//{
//	int x = 0;
//	printf("%d\n",x);
//
//}
//
//void UART1_IRQHandler()
//{
//	int x = 0;
//	printf("%d\n",x);
//
//}
//
//void UART0_IRQHandler()
//{
//	int x = 0;
//	printf("%d\n",x);
//
//}
