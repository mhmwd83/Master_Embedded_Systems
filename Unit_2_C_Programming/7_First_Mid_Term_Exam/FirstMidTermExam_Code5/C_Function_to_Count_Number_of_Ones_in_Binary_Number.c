/*
 * C_Function_to_Count_Number_of_Ones_in_Binary_Number.c
 *
 * Created on : Jun 8, 2023
 *     Author : Mahmoud Gamal
 *      
 * Description:
 */

unsigned int countSetBits(unsigned int n);


#include <stdio.h>

int main()
{
    int i;

    printf("Enter any number: ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &i);

    printf("%d", countSetBits(i));
    return 0;
}

unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;
	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return count;
}
