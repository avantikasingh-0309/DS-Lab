#include<stdio.h>
void main() {
	int a[20], i, n, j, large, index;
	printf("Enter value of n : ");
	scanf("%d", &n);

		printf("Enter element for a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	
	printf("Before sorting the elements in the array are\n");
	for(i=0;i<n;i++){
		printf("Value of a[%d] = %d\n", i,a[i]);
	}
	
	for(i=0;i<n-1;i++){
		large = a[i];
		index = i;
		for(j=i+1;j<n;j++){
			if(a[j]<large){
			large = a[j];
			index = j;
		}
		}
			a[index]=a[i];
			a[i]=large;
	}

	printf("After sorting the elements in the array are\n");
	for(i=0;i<n;i++){
		printf("Value of a[%d] = %d\n", i,a[i]);
	}
	
	
}
