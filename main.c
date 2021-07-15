/*
 * C program to accept numbers as an input from user
 * and to sort them in ascending order.
 *and also not allow repetition of numbers.
 *Void is a function that prints information for the user to read.
 */
#include <stdio.h>

void sort_numbers_ascending(int number[], int count)
{
      //Declaration of arrays
   int temp, i, j, k;
   for (j = 0; j < count; ++j)
   {
      for (k = j + 1; k < count; ++k)
      {
         if (number[j] > number[k])
         {
            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
         }
      }
      //
   }
   //Code for Arranging in ascending order
   printf("Numbers in ascending order:\n");
   for (i = 0; i < count; ++i)
      printf("%d\n", number[i]);



}

//C do not repeat code
//Code be;ow will execute the written numbers, checking whether there are no repetition of numbers or not
//If there are any repeated numbers, the code will not run



void main()
{
   int i, count, number[10];
   //First question that asks you how many numbers are you going to enter
   printf("How many numbers you are going enter:");
   scanf("%d", &count);
   //The numbers that have to be arranged by the program
   printf("\nEnter the numbers:");

   for (i = 0; i < count; ++i)
      scanf("%d", &number[i]);

   sort_numbers_ascending(number, count);
}

