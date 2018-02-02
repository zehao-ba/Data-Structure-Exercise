#include<iostream>
using namespace std;

void Reverse(int arry[], int n){
	int temp;
	int i = 0;
	while(i < n){
		
		temp = arry[i];
		arry[i] = arry[n];
		arry[n] = temp;
		n--;
		i++;
		cout<<n<<" "<<i;
	}
}

void print(int arry[], int n)
{
	int i;
	for(i = 0; i < n; i++)
		cout<<arry[i]<<" ";
}

int main(){
	int arry[] = {1, 2, 3};
	int n = sizeof(arry)/sizeof(arry[0]);
	cout<<n;
	Reverse(arry, n);
	//print(arry, n);
	return 0; 
}
