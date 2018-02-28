
/**
 * @file UART.h
 * @brief Circular buffer implementation file
 *
 * This file contains a complete circular buffer implementation
 * from creation to deleting a uint8_t type circular buffer
 *
 * @author Zachary Asmussen
 * @date February 21st, 2018
 *
 */
#ifndef __UART_H__
#define __UART_H__
#include <stdint.h>
#include <stdlib.h>

#define BAUD_RATE

/**
 * @brief Configures UART settings
 *
 * This function
 *
 * @param buffPtr is the pointer to the circular buffer
 * @param length is the length of the buffer
 * @return is of enumeration type CB_e for certain error codes
 */
 UART_configure();


/**
 * @brief Destroys a circular buffer
 *
 * This function frees all of the memory allocated at the circular buffer
 * initialization and sets any necessary pointers to NULL
 *
 * @param buffPtr is the pointer to the circular buffer
 * @return is of enumeration type CB_e for certain error codes
 */
CB_e UART_send();


/**
 * @brief Adds an item to a circular buffer
 *
 * This function adds an item to our circular buffer from a pointer to that
 * buffer and data to be added
 *
 * @param buffPtr is the pointer to the circular buffer
 * @param data holds the value to be added into the buffer
 * @return is of enumeration type CB_e for certain error codes
 */
CB_e UART_send_n();


/**
 * @brief Removes an item from a circular buffer
 *
 * This function removes an item from our circular buffer and saves this
 * value into a variable put into the function
 *
 * @param buffPtr is the pointer to the circular buffer
 * @param value is where we store the variable that we removed
 * @return is of enumeration type CB_e for certain error codes
 */
CB_e UART_receive();


/**
 * @brief Checks if a buffer is full
 *
 * This function takes in a circular buffer and checks whether or not
 * the buffer is full
 *
 * @param buffPtr is the pointer to the circular buffer
 * @return is of enumeration type CB_e for certain error codes
 */
 UART_receive_n();

/**
 * @brief Checks if a buffer is empty
 *
 * This function takes in a circular buffer and checks whether or not
 * the buffer is empty
 *
 * @param buffPtr is the pointer to the circular buffer
 * @return is of enumeration type CB_e for certain error codes
 */
void UART0_IRQHandler();

#endif
