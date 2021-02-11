#include <stdio.h>
void main()
{
  int arr[3][3],i,j,sum=0;
       printf("------------------------------------------------------\n");
       printf("Input elements in the matrix :\n");
       printf("------------------------------------------------------\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr[i][j]);
      }
  }
  printf("------------------------------------------------------\n");
  printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
      {
          printf("%d\t",arr[i][j]);
      }
      printf("\n");
  }
  for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("------------------------------------------------------\n");
    printf("Sum of diagonal elements of a square matrix = %d\n",sum);
    printf("------------------------------------------------------\n");
}
