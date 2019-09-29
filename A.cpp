#include <stdio.h>

int main(){
 int n;
  for(int i=0;i<3;i++){
    int temp;
    scanf("%d",&temp);
    n += (temp==1);
  }
  if(n>1){
    printf("1\n");
  }else{
    printf("2\n");
  }
}