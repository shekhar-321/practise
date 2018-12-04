#include<stdio.h>
void printArray(int *a);
void divideRecursively(int *a,int left,int right);
void mergeArray(int *a,int left,int right);
#define MAX 6

void main(int argc,char **argv)
{
int array = {23,444,32,2,5,66};
printArray(array);
}

void printArray(int *a)
{
int i;
for (i=0;i<MAX;i++){
printf("a[%d] = %d is",i,a[i]);
}
}

void divideRecursively()
