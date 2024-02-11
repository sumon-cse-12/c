#include <stdio.h>
#include <stdlib.h>

int main()
{
 int row,col,value;
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

    return 0;
}
