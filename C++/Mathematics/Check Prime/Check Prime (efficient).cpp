/*  Check for Prime numbers*/


/*Idea: Divisors always appear in pairs. so if (x,y) is a pair
   x*y=n;
   and if x<=y.
   so  x*x<=n.
   x<= sqrt(n). */

#include<iostream>
using namespace std;

bool isPrime(int n){
	if(n==1){
		return false;
	}
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			return false;
		}
		return true;
	}
}

int main(){
	int n;
	cin>>n;
	cout<< isPrime(n) << endl;
}
