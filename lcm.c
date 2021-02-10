#include <stdio.h>
int main()
{
    int a,b,result;
    printf("Input first number: ");
    scanf("%d",&a);
    printf("Input second number: ");
    scanf("%d",&b);
    result=lcm(a, b);
    printf("LCM of %d and %d is %d\n",a,b,result);
    return 0;
}
int lcm(int a, int b)
{
    static int c=1;
    if (c%a==0&&c%b==0)
    {
        return c;
    }
    c++;
    lcm(a, b);
    return c;
}
