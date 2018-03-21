#include<stdio.h>

int printUnion(int arr1[], int arr2[], int m, int n){
	int i = 0, j = 0;
	while(i<m&&j<n){
		if(arr1[i] < arr2[j])
			printf("%d", arr1[i++]);
		else if(arr2[j] < arr1[i])
			printf("%d", arr2[j++]);
		else{
			printf("%d", arr2[j++]); //when arr1[i] = arr2[j]
			i++;
		}
	}
	while(i < m)
		printf("%d", arr1[i++]);
	while(j < n)
		printf("%d", arr2[j++]);
}

int main(){
	int arr1[] = {1,2,4,5,6};
	int arr2[] = {3,4,7};
	int m = sizeof(arr1)/sizeof(arr1[0]);
	int n = sizeof(arr2)/sizeof(arr2[0]);
	printUnion(arr1, arr2, m, n);
	getchar();
	return 0;
}
