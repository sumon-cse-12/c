#include <stdio.h>
#include <stdlib.h>

int main()
{
 /*int row,col,value;
 scanf("%d",&row);
 scanf("%d",&col);
 int arr[row][col];
 for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
    scanf("%d", &arr[i][j]);
   }
 }

 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
 }

 int A[3][4],B[3][4];
 printf("For A Matrix : \n");
 for(int i=0;i<3;i++){
   for(int j=0;j<4;j++){
        printf("A[%d][%d] : ",i,j);
    scanf("%d", &A[i][j]);
   }
 }
    printf("A = : ");
  for(int i=0;i<3;i++){
            printf("\t");
    for(int j=0;j<4;j++){
        printf("%d ",A[i][j]);
    }
    printf("\n");
 }
  printf("For B Matrix : \n");
   for(int i=0;i<3;i++){
   for(int j=0;j<4;j++){
        printf("B[%d][%d] : ",i,j);
    scanf("%d", &B[i][j]);
   }
 }
   printf("B = : ");
  for(int i=0;i<3;i++){
        printf("\t");
    for(int j=0;j<4;j++){
        printf("%d ",B[i][j]);
    }
    printf("\n");
 }
  */
  int row,col;
   printf("For Example Number Of Row : \n");
 scanf("%d",&row);
  printf("For Example Number Of Column : \n");
 scanf("%d",&col);
 int arr[row][col];
 int arr_Two[row][col];
 int sum[row][col];
  printf("For Example A Matrix : \n");
 for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
          printf("Example One [%d][%d] : ",i,j);
    scanf("%d", &arr[i][j]);
   }
 }
 printf("For Example A Matrix = : ");
 for(int i=0;i<row;i++){
          printf("\t");
    for(int j=0;j<col;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
 }

   printf("For Example B Matrix : \n");
 for(int i=0;i<row;i++){
   for(int j=0;j<col;j++){
          printf("Example Two [%d][%d] : ",i,j);
    scanf("%d", &arr_Two[i][j]);
   }
 }
 printf("For Example Two B Matrix = : ");
 for(int i=0;i<row;i++){
          printf("\t");
    for(int j=0;j<col;j++){
        printf("%d ",arr_Two[i][j]);
    }
    printf("\n");
 }

 printf("Sum Of Two Matrix \n");
  for(int i=0;i<row;i++){
          printf("\t");
    for(int j=0;j<col;j++){
       sum[i][j] = arr[i][j] + arr_Two[i][j];
    }
    printf("\n");
 }
  printf("Sum Of Those Matrix = : ");
 for(int i=0;i<row;i++){
          printf("\t");
    for(int j=0;j<col;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");
 }
    return 0;
}
