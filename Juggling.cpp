#include <iostream>
using namespace std;

void print(int arr[], int size);
int gcd(int a, int b);

void leftRotate(int arr[], int d, int n){
	int i,j,k,temp;
	for(i = 0; i < gcd(d,n); i++){
		temp = arr[i];
		j = i;
		while(1){
			k = j+d;
			if(k >= n)
				k = k - n;
			if(k == i)
				break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}
}

void print(int arr[], int size){
	int i;
	for(i = 0; i < size; i++){
		cout<<arr[i];
	}
}

int gcd(int a, int b){
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main(){
	int arr[]  = {1,2,3,4,5,6,7};
	leftRotate(arr, 2, 7);
	print(arr, 7);
	return 0;
}
