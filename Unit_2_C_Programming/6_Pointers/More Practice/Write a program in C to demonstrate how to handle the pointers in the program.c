/*
 * main.c
 *
 * Created on : Jun 8, 2023
 *     Author : Mahmoud Gamal
 *      
 * Description:
 */

#include <stdio.h>

int main()
{
	int m =29;
	int *ab = &m;

	printf("Address of pointer ab : %p \n", ab);
	printf("Value of pointer ab : %d \n", *ab);

	m = 34;

	printf("Address of pointer ab : %p \n", ab);
	printf("Value of pointer ab : %d \n", *ab);

	*ab = 7;

	printf("Address of pointer ab : %p \n", ab);
	printf("Value of pointer ab : %d \n", *ab);

	return 0;
}
