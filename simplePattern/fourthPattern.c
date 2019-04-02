//  * * *
//   * *
//    *
//   * *
//  * * *


#include<stdio.h>
int main(){
int i=1,j=1,n=1;
for (i=-2;i<=2;i++){
n=i;
if (n<0)
n=-n;
for(j=2;j>=0;j--){
if (n>j)
printf("**");
else{
if (n==j)
printf("*");
else
printf(" ");
}
}
printf("\n");
}



}
