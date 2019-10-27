#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B;
  cin>>A;
  cin>>B;

  if(A>9||B>9){
    printf("-1\n");
    return 0;
  }
  printf("%d\n",A*B);
}
