#include<stdio.h>
int main()
{
int rows,cols;
printf("enter no. of rows ");
scanf("%d",&rows);
printf("enter no. of cols ");
scanf("%d",&cols);
for(int i=1;i<=rows;i++)
{
for(int j=1;j<=cols;j++)
{
printf("(%d,%d)\t",i,j);
}
printf("\n");
}
return 0;
}
