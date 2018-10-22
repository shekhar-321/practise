#include<stdio.h>

//This program is meant to practise bubble sort
#define MAX 5
void bubbleSort(int *a);
void printArray(int *a);
void main() {

//this array of integers to store the numbers to be sorted
int test[MAX]={22,2,34,99,0};
printArray(test);
bubbleSort(test);
}

void bubbleSort(int *a) {
   int i;
   int j;
   int temp;
   for (i=0;i<MAX;i++)
       for(j=0;j<MAX-i;j++) {
          if(j+1 < MAX-i)
          //if  smaller then swap
             if(a[j] > a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                //swap(&a[j],&a[j+1])
             }

       }
    printArray(a); 
}

void printArray(int *a) { 

   int i;
   for(i=0;i<MAX;i++) {
      printf("a[%d]=%d\n",i,a[i]);
   }   

}
