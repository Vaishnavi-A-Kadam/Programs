/* C program to print all perfect numbers between 1 to n */

#include<stdio.h>
int main()
{
    int i, j, n, sum;
    printf("Enter the upper limit: ");
    scanf("%d",&n);
    printf("All perfect numbers between 1 to %d:\n",n);

    for(i=1; i<=n; i++)
    {
        sum=0;
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum +=j;
            }
        }

        if(sum == i)
        {
            printf("%d, ",i);
        }
    }

    return 0;
}

/* Output : 
Enter ther upper limit: 12000
All perfect numbers between 1 to 12000:
6, 28, 496, 8128,
*/