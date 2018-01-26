#include<iostream>
using namespace std;

void RotateByone(int arry[], int n){
	int temp, i;
	temp = arry[0];
	for(i = 0; i<n-1; i++ )
		arry[i] = arry[i+1];
	arry[i] = temp;
}

void RotateLeft(int arry[], int n, int d){
	int i;
	for (i = 0; i<d; i++)
		RotateByone(arry,n);
}

void print(int arry[], int size){
	int i;
	for (i = 0; i<size; i++)
		cout<<arry[i];
}

int main(){
	int arry[] = {1,2,3,4,5,6,7};
	RotateLeft(arry,7,2);
	print(arry, 7);
}
