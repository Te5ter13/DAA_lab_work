#include<stdio.h>
#include<stdlib.h>

void read(int *a, int n){
  int i;
  printf("Enter %d values \n", n);
  for(i=0; i<n; i++){
    scanf("%d",&a[i]);
  }
}
void sort(int *arr, int n){
  int i , j, key;
  for (i=1; i<n; i++){
    j=i - 1;
    key=arr[i];
    while(j >= 0 && arr[j] > key){
      arr[j+1] = arr[j];
      j = j - 1;
    }
    arr[j+1] = key;
  }

}
void printing(int *arr, int n){
  int i;
  printf("Sorting Order\n");
  for(i=0; i<n; i++){
    printf("%d\n", arr[i]);
  }
}

int main(){
  int n;
  int *arr;
  printf("Total Numbers\n");
  scanf("%d",&n);
  arr = (int*)malloc(n*sizeof(int));

  read(arr, n);
  sort(arr, n);
  printing(arr, n);
  return 0;
}
