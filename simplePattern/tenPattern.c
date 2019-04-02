#include<stdio.h>
int main(){
  int i=1,j=1,count=0,n;
  for(i=-2;i<=2;i++){
    n=i;
    if (n<0)
      n=-n;
    for(j=0;j<=i+count-1;j++){
      //if (n>j)
      printf(" %d",j+1);
      //else
      //printf(" ");
    }
    printf("\n");
    count++;
  }
}
