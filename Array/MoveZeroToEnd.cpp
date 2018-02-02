#include<iostream>
using namespace std;

void MoveZeroToEnd(int arry[], int n){
	int a = 0;	
	for(int i = 0; i < n; i++)
		if(arry[i]!=0)
			arry[a++] = arry[i];
			
	
	while(a<n)
		arry[a++] = 0;
}

int main(){
	int arry[] = {1, 9, 8, 9, 0, 7 ,6 ,0, 5};
	int n = sizeof(arry)/sizeof(arry[0]);
	cout<<n<<endl;
	MoveZeroToEnd(arry, n);
	cout<<"Array after pushing all zeros to end is ";
	for(int i = 0; i < n; i++){
		cout<<arry[i]<<" ";
	}	
	return 0; 
	
}
