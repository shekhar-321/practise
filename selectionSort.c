#include<stdio.h>
#include<string.h>

//** selection sort idea is to select the minimum index and swap with current index **//


#define MAX 5
void selectionSort(int *a);
void printArray(int *a);
int main() {

//** array[MAX]  **//
int array[MAX]={10,22,3,333,43};

//** call to printArray(int *a) **//
printArray(array);

//** call to selection sort function **// 
selectionSort(array);

return 0;

}

void printArray(int *a){
int i=0;
for (i=0;i<MAX;i++){
printf("array[%d] is = %d\n",i,a[i]);
}

}

void  selectionSort(int *a)
{
int i=0;
int j=0;
int min=0;
int temp,temp1;
for (i=0;i<MAX;i++){
min=a[i];
for (j=i;j<MAX;j++){
//** find minimum  in array and replace with minimum varaible ** // 
if (min >  a[j]) {
min = a[j];
temp = j;
}
}

temp1 = a[i];
a[i] = min;
a[temp] = temp1;
}
printArray(a);

}
