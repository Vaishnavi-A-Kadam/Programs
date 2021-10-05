/* Total occurance of each digits(0-9) */

#include <stdio.h>
int main()
{
    int a[10] ={0}, num, rem, i;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num)
    {
        rem = num % 10;
        a[rem] = a[rem] + 1;
        num = num / 10;
    }
    printf("\n");
    
    for(i=0;i<10;i++)
    {
        if(a[i]!=0)
        printf("%d has appeared %d times.\n", i, a[i]);
    }

    return 0;
}

/*output:
Enter the number: 1455466451
1 has appeared 2 times.
4 has appeared 3 times.
5 has appeared 3 times.
6 has appeared 2 times.
*/