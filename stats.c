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
 * @file <stats.c> 
 * @brief <For Coursera assignment 1>>
 *
 * @author <Ganesh KM>
 * @date <03/01/2022>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/* The main entry point of program */
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

 print_array(test);
 print_statistics(test);
 sort_array(test);
}

/* Given an array of data, returns the mean */

float find_mean(unsigned char *ptr)
{
   int sum=0;
   for(int i=0;i<SIZE;i++)
   {
   
   sum = sum+ptr[i];
   
   }
return (float)sum/SIZE;
}

/* A function that prints the statistics of an array including minimum, maximum, mean, and median. */

int print_statistics(unsigned char *ptr)
{
printf(" \n---- Array Statistics ---- \n");
printf(" Mean of the given array is %f \n", find_mean(ptr));
printf(" Median of the given array is %f \n", find_median(ptr));
printf(" Maximum element of the given array is %d \n", find_maximum(ptr));
printf(" Minimum element of the given array is %d \n", find_minimum(ptr));


}

/* Descending sort function */
void sort(unsigned char *ptr)
{
unsigned char temp;
for(int i=0;i<SIZE;i++)
{
 for (int j=i+1;j<SIZE;j++)
 {
   if(ptr[j]>ptr[i])
   {
   	temp = ptr[j];
   	ptr[j]=ptr[i];
   	ptr[i]=temp;
   }
  }
}
}

/* Function to print the sorted array */
void sort_array(unsigned char *ptr) 
{ 
 sort(ptr);
printf("\n The Sorted array is \n");
for(int i=0;i<SIZE;i++)
{
printf("%d ",ptr[i]);
}
printf("\n");
}

/* Function to print the given array */
void print_array(unsigned char *ptr) 
{
printf("The unsorted array is \n");
 for(int i=0;i<SIZE;i++)
 {
 printf("%d ",ptr[i]);
 }
}
/* Function to return the maximum element in an array */
int find_maximum(unsigned char *ptr)
{
  sort(ptr);
  return ptr[0];
}
/* Function to return the mininum element in an array */
int find_minimum(unsigned char *ptr) 
{
  sort(ptr);
  return ptr[SIZE-1];
}

/* Function to return the median in the given array */
float find_median(unsigned char *ptr)
{
  sort(ptr);
  if(SIZE % 2 !=0)
  return (float)ptr[SIZE/2];
  else
  return (float)(ptr[(SIZE-1)/2] + ptr[SIZE/2])/2.0;
}
