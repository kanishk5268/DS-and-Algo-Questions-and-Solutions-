/* Efficient solution for finding out prime factors*/

#include<iostream>
using namespace std;

int primeFactors(int n){
	if(n<=1)return 0;
	for(int i=2; i*i<=n; i++){
		while(n%i==0){
			cout<<i<<endl;
			n=n/i;
			}
		}
		if(n>1)
			cout<< n <<endl;
}

int main(){
	int n;
	cin>>n;
	cout<<primeFactors(n)<<endl;
	return 0;
}
