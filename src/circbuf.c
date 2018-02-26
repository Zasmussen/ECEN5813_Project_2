/**
 * @file circbuf.c
 * @brief Circular buffer function implementations
 *
 * This file contains a complete circular buffer implementation
 * implementing all functions defined in circbuf.h
 *
 * @author Zachary Asmussen
 * @date February 21st, 2018
 *
 */
#include <stdint.h>
#include <stdlib.h>
#include "circbuf.h"

CB_e CB_init(uint8_t * buffPtr, uint32_t length)
{
  CB_e error = SUCCESS;
  return error;
}


CB_e CB_destroy(uint8_t * buffPtr)
{
  CB_e error = SUCCESS;
  return error;
}


CB_e CB_buffer_add_item(uint8_t * buffPtr, uint8_t data)
{
  CB_e error = SUCCESS;
  return error;
}


CB_e CB_buffer_remove_item(uint8_t * buffPtr, uint8_t * value)
{
  CB_e error = SUCCESS;
  return error;
}


__attribute__((always_inline))inline CB_e CB_is_full(uint8_t * buffPtr)
{
  CB_e error = SUCCESS;
  return error;
}

__attribute__((always_inline))inline CB_e CB_is_empty(uint8_t * buffPtr)
{
  CB_e error = SUCCESS;
  return error;
}
