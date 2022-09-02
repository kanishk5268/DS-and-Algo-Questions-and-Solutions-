/* To find the trailing zeros in Factorial.*/

/* Idea: The idea here is the zeros that will be there in a number will be because of 10's which will be fromed by 5*2. */


#include <iostream>
using namespace std;


int count_zeros(int n){
	int fact=1;                          /*Here factorial is calculated in line 9 and 10.*/
	for(int i=2;i<=n;i++){
		fact=fact*i;
	}
	int res=0;                           /* res variable will store the number of trailing zeros.*/
	while(fact % 10 == 0){               /* while loop will run till a number is divisible by 10 */
		res++;                           /* if the number is divisible by 10 then the res is incremented by 1.*/
		fact=fact/10;					/* After incrementing then number is divided by 10 to remove the 0 which is calculated.*/
	}
	return res;
}


int main(){
	int n;
	cin>>n;
	cout<<count_zeros(n)<<endl;
	return 0;
}
