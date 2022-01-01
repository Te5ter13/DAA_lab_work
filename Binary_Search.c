#include<stdio.h>
#include<stdlib.h>

int main(){
  int left, right, middle, key, i, n;
  int *arr;
  printf("Total number of inputs\n");
  scanf("%d", &n);
  arr=(int*)malloc(n*sizeof(int));
  printf("Enter %d numbers in sorted order\n", n);
  for (i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the num to search\n");
  scanf("%d", &key);
  left = 0;
  right = n-1;
  middle = (left + right)/2;
  while(left <= right){
    if(arr[middle] < key){
      left = middle + 1;
    }
    else if(arr[middle] == key){
      printf("Searched Value is %d and located in %d position", arr[middle], left+1);
    break;
    }

    else{
      right = middle - 1;
    }
    middle = (left+right)/2;
    }
  if(left > right){
    printf("Invalid Searched Number");
  }
  printf("\n");
    return 0;
}
