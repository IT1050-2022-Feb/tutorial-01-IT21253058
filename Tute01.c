/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int num1, num2;
  float avg;
  
  printf("Enter marks of two subjects : ");
  scanf("%d %d", &num1, &num2);

  avg = (num1 + num2) / 2.0;

  printf("Average of the two marks : %.2f\n", avg);
  
  return 0;
}

