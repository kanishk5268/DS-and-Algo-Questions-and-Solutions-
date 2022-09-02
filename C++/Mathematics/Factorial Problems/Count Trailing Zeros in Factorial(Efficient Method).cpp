/* Counting Trailing zeros in factorial*/

/*Idea: number of 5's is going to be less than the number of 2's so directly count the numberr of 5's as 10 is going to be formed with the combination of 5 and 2
 so if you calculate the number of 5's you will get the number of trailing zero's in a factorial of a number.  or 5^n */


#include<iostream>
using namespace std;

int count_trailing_zeros(int n){
	int res=0;
	for(int i=5; i<=n; i=(i*5)){		/*For loop starts from 5 and res is computed and i is incremented by a factor of 5. */
		res=res+ n/i;
	}
	return res;
}

int main(){
	int n;
	cin>>n;
	cout<<count_trailing_zeros(n)<<endl;
}
