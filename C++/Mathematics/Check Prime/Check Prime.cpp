/* To check for Prime*/

/*Idea: a number is prime if it is divisible by 1 and itself.*/

#include<iostream>
using namespace std;


bool isPrime(int n){
	if(n==1){				/* 1 is neither prime nor composite.*/
		return false;
	}
	
	for(int i=2; i<n; i++){      /*This checks if a number is divisible by any other number or not. If it is divisible by any another number apart from 1 and itself it returns 0(false).*/
		if(n%i==0){
			return false;
		}
		return true;
	}
}


int main(){
	int n;
	cin>>n;
	cout<< isPrime(n)<<endl;
	return 0;
}
