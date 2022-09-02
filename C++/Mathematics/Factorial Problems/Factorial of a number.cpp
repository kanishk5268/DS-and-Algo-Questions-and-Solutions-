/*Factorial of a number*/

#include <iostream>
using namespace std;

int fact( int n ){
	int res=1;                               /* This particular line of code handles two situations when n=0 and n=1. Factorial of 0 is 1 and factorial of 1 is 1*/
	for(int i=2;i<=n; i++){                 /*For loop is implemented to calculate the factorial which is n!= n*(n-1)*(n-2)..... 1 .*/
		res=res*i;                          // this loop works till i is less than or equal to n. Each iteration performs multiplication of numbers 
	}								/*Eg:  for n=3 . in first iteration res will give 2(res=1*2)  then in the next iteration res=6 (res=2*3) 3!= 6.  */
	return res;
}

int main(){
	int n;
	cout<< "Enter a number to find factorial" <<endl;
	cin>>n;
	cout<< fact(n) << endl;
	return 0;
}
