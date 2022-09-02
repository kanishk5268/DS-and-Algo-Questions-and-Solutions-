/* Factorial of a number Recursive Solution*/

#include<iostream>
using namespace std;

int fact(long long  int n){
	if(n==0){
		return 1;
	}
	return n*fact(n-1);
}


int main(){
	int n;
	cout<< "Enter a number to find the factorial" <<endl;
	cin>>n;
	cout<< fact(n)<< endl;
	return 0;
}

