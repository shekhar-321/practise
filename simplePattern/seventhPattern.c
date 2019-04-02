//1
//2 4
//1 3 5 
#include<stdio.h>
int main(){
  int i=1,j=1;
  int even=2,odd=1;
  for (i=1;i<=5;i++){
    even=2;
    odd=1;
    for (j=1;j<=i;j++){
      if ((i%2)==0){
        printf("%d ",even);
        even +=2;
      }
      else{
        printf("%d ",odd);
        odd +=2;
      }  
    }
  printf("\n");  
  }


}
