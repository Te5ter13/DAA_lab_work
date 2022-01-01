#include<stdio.h>
#include<stdlib.h>

// Min_Max Finding using iterative method of approach.
int main(){
  int i,n;
  int *arr;
  printf("Total inputs\n");
  scanf("%d",&n);
  arr=(int*)malloc(n*sizeof(int));
  printf("Enter %d numbers\n",n);
  for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  int max=arr[0];
  int min=arr[0];
  for(i=1; i<n; i++){
    if(arr[i] > max){
      max = arr[i];
    }
    if (arr[i] < min){
      min = arr[i];
    }
  }
  printf("Min is: %d and max is:%d",min,max);
  printf("\n");
  return 0;
}
