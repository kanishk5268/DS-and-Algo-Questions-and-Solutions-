/* Check for Prime (more efficient) */


/*Idea: most of the numbers are divisible by 2 and 3 so if we check this condition most of the numbers will be handled.
and the next condition we check will be number divisible by any other number.*/

#include<iostream>
using namespace std;

bool isPrime(int n){
	if(n==1){                               // 1 is neither prime nor composite.
		return false;
	}
	else if(n==2 || n==3){                  // 2 and 3 are prime numbers
		return true;
	} 
	else if(n%2==0 || n%3==0){             // checking whether a number is divisible by 2 or 3. if yes then the number is not prime.
		return false;
	}
	for(int i=5; i*i<=n; i=i+6){
		if(n%i == 0 || n%(i+2)==0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	cin>>n;
	cout<< isPrime(n)<< endl;
	return 0;
}
