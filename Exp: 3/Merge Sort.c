#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
int h=left,i=left,j=mid+1;
	int temp[15];

	while(h<=mid && j<=right){
		if(arr[h]<=arr[j]){
			temp[i]=arr[h];
			h++;
		}else{
			temp[i]=arr[j];
			j++;
		}
		i++;
	}
	while(j<=right){
		temp[i]=arr[j];
		j++;
		i++;
	}
	while(h<=mid){
		temp[i]=arr[h];
		h++;
		i++;
	}
	
	for(i=left;i<=right;i++){
		arr[i]=temp[i];
	}
}

void mergeSort(int arr[], int left, int right) {
	int mid;
  if(left<right){
	  mid=(left+right)/2;
	  mergeSort(arr,left,mid);
	  mergeSort(arr,mid+1,right);
	  merge(arr,left,mid,right);
  }
  
  
   
}

void printArray(int arr[], int size) {
int i;
	for(i=0;i<size;i++){
	printf("%d ", arr[i]);
}
	printf("\n");
}

int main() {
    int n;
    
    printf("");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("");
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);
    
    printf("");
    printArray(arr, n);

    return 0;
}
