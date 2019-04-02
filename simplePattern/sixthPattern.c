//1
//10
//101 
#include<stdio.h>
int main(){
  int i=1,j=1;
  for (i=1;i<=3;i++){
    for (j=1;j<=i;j++){
      if ((j%2)==0){
        printf("0");
      }
      else
        printf("1");
    }
  printf("\n");  
  }


}
