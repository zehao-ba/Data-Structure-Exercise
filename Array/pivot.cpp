#include<iostream>
using namespace std;

int main(){
	int array[7] = {1,7,3,6,0,5,6};
	int length = sizeof(array)/sizeof(array[0]);
	//cout<<length<<endl;
	int left = 0;
	int right = 0;
	//cout<<array[0]<<endl;
	//cout<<array[length-1]<<endl;
	for(int i = 0; i < length; i++){
		//cout<<i<<endl;
		left = array[i] + left;
		//cout<<"left is "<<left<<endl;
		right = array[length-1-i] + right;
		//cout<<"right is "<<right<<endl;	
		if(right == left){
			//cout<<i<<endl;
			cout<<"The pivot num is "<<i<<endl;
			break;
		}
		else{
			continue;
		}
	}
	
}


