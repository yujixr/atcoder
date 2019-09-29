#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){
  int arr[2000],n,m;
  scanf("%d", &n);
  scanf("%d", &m);
  for(int i=0;i<n+m;i++){
    scanf("%d", &arr[i]);
  }
  qsort(arr, n+m, sizeof(int), compare_int);
  for(int i=0;i<n+m;i++){
    printf("%d\n",arr[i]);
  }
}