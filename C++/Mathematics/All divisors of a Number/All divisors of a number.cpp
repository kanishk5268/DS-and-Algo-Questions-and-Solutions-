/*All Divisors of a Number*/

#include<iostream>
using namespace std;

int printDivisors(int n){
	for(int i=1; i<n; i++){
		if(n%i==0){
			cout<<i<<endl;
		}
	}
}

int main(){
	int n;
	cin>>n;
	cout<<printDivisors(n)<<endl;
	return 0;
}
