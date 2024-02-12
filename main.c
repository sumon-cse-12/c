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
 */
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
    return 0;
}
