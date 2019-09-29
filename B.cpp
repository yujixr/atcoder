#include <stdio.h>

int main(){
  char str[100];
  int n,result=0;
  scanf("%d", &n);
  scanf("%s", str);
  for(int i=0;i<n;i++){
    if(str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o'){
      result++;
    }
  }
  printf("%d\n",result);
}