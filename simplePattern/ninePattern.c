#include<stdio.h>
int main(){
  int i=1,j=1,count=1,n=0;
  for(i=-3;i<=0;i++){
    n=i;
    if (n<0)
      n=-n;
      count = 1;
    for(j=0;j<=3;j++){
      if (n>j)
        printf(" ");
      else{
        if (n==j)
          printf("%d",count);
        else{
          count=count+1;
          printf(" %d",count);
          count++;
          printf(" %d",count);
        }  
      }  
    }
    printf("\n");
  }
}
