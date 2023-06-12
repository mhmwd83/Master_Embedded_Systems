/*
 ======================================================================================================================
 Name        : EX6_C_Program_to_Calculate_Sum_of_Natural_Numbers.c
 * Created on : Jun 8, 2023
 *     Author : Mahmoud Gamal
 Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX6 C Program to calculate sum of natural numbers
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>

int main() 
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) 
    {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}