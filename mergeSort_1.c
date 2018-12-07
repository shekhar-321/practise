#include<stdio.h>
//** for merge sort idea is divide the subusequent array into sub divided array and then redivide  until  it **
//** is in units of 2 and then merge the O(nlogn) **//
//** example is 23 444 32 2 5 66  **//
//**   ||23 444   ||32 2  ||5 66|| **//
//**     / \        /\         /\
//**    /   \      /  \       /  \ // sort in pair of two 
//**   /     \    /    \     /    \
//** || 23 ||444 ||32 || 2 ||5 ||  66 **// 

void printArray(int *a);
void divideRecursively(int *a,int left,int right);
void mergeArray(int *a,int left,int mid,int right);
#define swap(a,b) {int temp; temp=a;a=b;b=temp;}
#define MAX 5
int *l;
int *r;
void main(int argc,char **argv)
{
int array[MAX] = {23,444,32,66,3};
printArray(array);
divideRecursively(array,0,MAX-1);
printArray(array);
}

void mergeArray(int *a,int left,int mid,int right){
//make two arrays a[left,mid] a[mid+1,right]
int left_count = (mid - left)+1;
int right_count = right - (mid); 
int i=0,j=0,k=0;
int left_array[left_count];
int right_array[right_count];
i=0;
while(i < left_count){
left_array[i]=a[left+i];
i++;
}
k=0;
j=mid+1;
while(j<=right){
right_array[k]=a[j];
j++;
k++;
}

k=left;
i=0;
int r=0,l=0;
//append the item from left_array and right array
while(l<left_count && r<right_count){
if (left_array[l] > right_array[r])
{a[k]=right_array[r];r++;}
else
{a[k]=left_array[l];l++;}
k++;
}
while(l<left_count){
a[k]=left_array[l];
k++;
l++;
}
while(r<right_count ){
a[k]=right_array[r];
r++;
k++;
}

}
void printArray(int *a)
{
int i;
for (i=0;i<MAX;i++){
printf("a[%d] is= %d\n",i,a[i]);
}
}

void divideRecursively(int *a,int left,int right)
{
 
  //** this is recursive part for which recursion should happen **
  if (right > left){
    int mid;
    //** get the mid portion   **//
    mid = (left + right )/2 ;
    divideRecursively(a,left,mid);
    divideRecursively(a,mid+1,right);
    mergeArray(a,left,mid,right);
  }

}
