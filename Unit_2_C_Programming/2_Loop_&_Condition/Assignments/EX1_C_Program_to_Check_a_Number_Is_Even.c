/*
 ======================================================================================================================
 Name        : EX1_C_Program_to_Check_a_Number_Is_Even.c
 * Created on : Jun 8, 2023
 *     Author : Mahmoud Gamal
 Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX1 C Program to check a number is even
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}