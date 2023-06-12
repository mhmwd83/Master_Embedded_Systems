#include<stdio.h>
#include<string.h>
int main()
{
    char data[100][100],search[50];
    int i,n,c=0;
    printf("/How Many Names You Want \nto Add in 2-D Array/\n\nEnter Limit: ");
    scanf("%d",&n);
    printf("------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("Enter Name-%d = ",i+1);
        scanf("%s",data[i]);
    }
    printf("\nElement Present in 2-D Array are:\n");
    printf("------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("\t%s\n",data[i]);
    }
    printf("\nEnter Name to be Searched: ");
    scanf("%s",search);
    for(i=0;i<n;i++)
    {
        if(strcmp(data[i],search)==0)
        {
            c=1;
            break;
        }
    }
    if(c==1)
        printf("\n%s Found at Position '%d'",data[i],i+1);
    else
        printf("\n%s NOT Present in Above Array",data[i]);
    return 0;
}