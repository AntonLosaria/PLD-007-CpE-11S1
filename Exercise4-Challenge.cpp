#include<iostream>
using namespace std;

int main(){
	
	int i=4;
	int j=10;
	int k=3;
	
	while (i<j && !(i<=k)){
		cout << i << " is less than " << j << " but not less than " << k << endl;
		i++;
	}
	return 0;
	
}
