#include<stdio.h>
#define MAX 5
void printArray(int *a);
void insertionSort(int *a);

void main(int argc,char **argv)
{
int array[MAX]={22,4,55,13,1};
printArray(array);
insertionSort(array);
printArray(array);
}

void printArray(int *a){
int i;
for (i=0;i<MAX;i++){
printf("a[%d] = %d\n",i,a[i]);
}
}

void insertionSort(int *a)
{
int startpos,nextpos,temp;
for(startpos=1;startpos<MAX;startpos++)
{
nextpos=startpos;
// 22 4 55 13 44
//    nextpos decrementing the position, idea is to insert the space between sta//rtpos and nextpos so that 0 pos will have minimum value just like sorting pack//of card   
while(nextpos >0)
{
//swap
if (a[nextpos]<a[nextpos-1])
{temp=a[nextpos];
a[nextpos]=a[nextpos-1];
a[nextpos-1]=temp;
} 
nextpos--;
}
}
//printArray(a);
}
