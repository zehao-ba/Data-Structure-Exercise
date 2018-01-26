#include <iostream>
using namespace std;
void print(int arry[], int size);
void rotate(int arry[], int d, int n);

void Reverse(int arry[], int start, int end){
	int temp;
	while(start < end){
		temp = arry[start];
		arry[start] = arry[end];
		arry[end] = temp;
		start++;
		end--;
	}
}

void print(int arry[], int size){
	for (int i = 0;  i< size; i++){
		cout<<arry[i];
	}
}

void rotate(int arry[], int d, int n){
	Reverse(arry, 0, d-1);
	Reverse(arry, d, n-1);
	Reverse(arry, 0, n-1);
}

int main(){
	int arry[] = {1,2,3,4,5,6,7};
	rotate(arry, 2, 7);
	print(arry, 7);	
}
