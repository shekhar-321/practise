#include<stdio.h>
#define MAX 7
void printArray(int *a);
void quickSort(int *a,int left,int right);
void swap(int *a,int x,int y){

int temp;
temp = a[x];
a[x] = a[y];
a[y] = temp;
 
}
int main(int argc,char **argv){

int array[MAX]={2121,88,223,23,5,33,2222};
printArray(array);
quickSort(array,0,MAX-1);
printArray(array);
}

void printArray(int *a){
int i=0;

for(i=0;i<MAX;i++){
printf("a[%d] = %d\n",i,a[i]);
}
}

void quickSort(int *a,int left,int right){


if (right > left){

int green,yellow;
green=right;

for(yellow=left+1;green>=yellow;){

if (a[yellow] >= a[left] && a[green] <=a[left]){
swap(a,yellow,green);
green--;
//because of this yellow++ there is -2 in recursive call 
yellow++;
}
else{
if (a[yellow]<=a[left])
yellow++;
if (a[green] >=a[left])
green--;
}
}
swap(a,left,green);
//either use yellow-2 or yellow-1 but -2 will give minumum time
quickSort(a,left,yellow-2);
quickSort(a,yellow,right);

}
}

