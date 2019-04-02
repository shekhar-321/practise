//  1
//  2*2
//  3*3*3
//  2*2
//  1


#include<stdio.h>
int main(){
int i=1,j=1,n=1,count=1;
for (i=-2;i<=2;i++){
n=i;
if (n<0)
n=-n;
for(j=2;j>=0;j--){
if (n<j)
printf("%d*",count);
if (n==j)
printf("%d",count);
}
printf("\n");
if (i<0)
count++;
else
count--;
}



}
