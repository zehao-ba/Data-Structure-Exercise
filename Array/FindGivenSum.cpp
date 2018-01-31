#include <iostream>
using namespace std;

bool pairInSortedRotated(int arry[], int n, int x){
	int i;
	for(i = 0; i<n+1; i++)
		if(arry[i]<arry[i+1])
			break;
	int l = (i+1)%n;
	int h = i;


	while (l!=h){
		if(arry[l] + arry[h] == x)
			return true;
		if(arry[l] + arry[h] < x)
			l = (l+1)%n;
		else
			h = (n+h-1)%n;

	}
	return false;
}

int main(){
	int arry[] = {11,15,5,8,9,10};
	int sum = 16;
	int n = sizeof(arry)/sizeof(arry[0]);
	if(pairInSortedRotated(arry, n, sum))
		cout<<"array has two elements with sum 16";
	else
		cout<<"array does not have two elements with sum 16";
	return 0;
}
