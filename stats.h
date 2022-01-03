/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <Header file for the assignment 1 >
 *
 * @author Ganesh KM
 * @date 03/01/2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Given an array of data, returns the mean
 *
 * @param <ptr> <Test array>

 *
 * @return <mean
 */
float find_mean(unsigned char *ptr);

/**
 * @brief < function that prints the statistics of an array including minimum, maximum, mean, and median
 *
 * @param <ptr> <Test array>

 *
 * @return None
 */

int print_statistics(unsigned char *ptr);

/**
 * @brief Function to print the sorted array
 *
 * @param <ptr> <Test array>

 *
 * @return NONE
 */
void sort_array(unsigned char *ptr) ;

/**
 * @brief Descending Sort
 *
 * @param <ptr> <Test array>
 *
 * @return none
 */
void sort(unsigned char *ptr);

/**
 * @brief Function to print the given array 
 *
 * @param <ptr> <Test array>

 *
 * @return none
 */
void print_array(unsigned char *ptr) ;

/**
 * @brief Function to return the maximum element in an array 
 *
 * @param <ptr> <Test array>

 *
 * @return maximum
 */
int find_maximum(unsigned char *ptr);

/**
 * @brief Function to return the minimum element in an array 
 *
 * @param <ptr> <Test array>

 *
 * @return minimum
 */
int find_minimum(unsigned char *ptr) ;

/**
 * @brief Function to return the median in the given array 
 *
 * @param <ptr> <Test array>

 *
 * @return median
 */
float find_median(unsigned char *ptr);

#endif /* __STATS_H__ */
