#include <stdio.h>
int main()
{
    int num, a;
    printf("Enter a number: ");
    scanf("%d", &num);
    a = pno(num,num/2);
    if (a == 1)
    {
        printf("\n%d is a prime number\n", num);
    }
    else
    {
        printf("\n%d is not a prime number\n", num);
    }
    return 0;
}
int pno(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return pno(num, i - 1);
       }
    }
}
