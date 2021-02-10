#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    for(i=1; i<=6; i++){
        for(j=1; j<=i; j++){
            if(j%2==1)
            {
                printf("01");
            }
            else{
                printf("01");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
