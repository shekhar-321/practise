//1
//2 6
//3 7 10
//4 8 11 13
#include<stdio.h>
int main(){
  int i=1,j=1;
  int add=4,copyOfI=1;
  for (i=1;i<=5;i++){
    add=4;
    copyOfI=i;
    for (j=1;add,j<=i;j++,add--){
        printf("%d ",copyOfI);
        copyOfI +=add;
    }
  printf("\n");  
  }


}
