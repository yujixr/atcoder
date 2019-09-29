#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d",&n);
  if(n<10){
      printf("%d",n);
  }else if(n<100){
      printf("9");
  }else if (n<1000){
      printf("%d",n-90);
  }else if(n<10000){
      printf("909");
  }else if(n<100000){
      printf("%d", n-9090);
  }else{
      printf("90909");
  }
}