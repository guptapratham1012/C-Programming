#include<stdio.h>
int main()
{
    int x;
    printf("Enter your number between 1-5:   ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("Food: Burger\nPrice: Rs129");
        break;
    case 2:
        printf("Food: French Fries\nPrice: Rs99");
        break;
    case 3:
        printf("Food: Pasta\nPrice: Rs179");
        break;
    case 4:
        printf("Food: Pizza\nPrice: Rs239");
        break;
    case 5:
        printf("Food: Sandwich\nPrice: Rs149");
        break;
    default:
        printf(":'( Sorry we cannot provide you with an output.Choose between 1 to 5!");
        break;
    }
    return 0;
}
