/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   float sub1, sub2, avg; //variables
	
	printf("input subject 1 marks -:"); //prompt
	scanf("%f", &sub1);
	printf("input subject 2 marks -:");
	scanf("%f", &sub2);
	puts("");
	
   //calculation
	avg = (sub1 + sub2)/2;
	
	printf("Average of the two marks is %.1f", avg);
  
  return 0;
}

