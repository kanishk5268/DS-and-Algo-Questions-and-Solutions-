#include <iostream>
#include <cmath>
using namespace std;

int count_digit( int long n){
	
	return floor(log10(n)+1);                                /* floor meaning here : lowest closer value of a particular decimal number (Eg: floor(3.10)= 3*/
}


/* Explanation:  Suppose the number of digits in the number N is K.
	Therefore, we can say that:
    10^K-1 <= N < 10^K 
	Applying base-10 logarithm to both sides in the above equation, we get:
	K-1 <= log10(N) < K.
	
	or, K - 1 + 1 <= log10(N) + 1 < K + 1
	or, K <= log10(N) + 1 < K + 1 
	
	
	Therefore,
	K = floor(log10(N) + 1)*/



int main(){
	int n;													 // initialized n (integer).		
	cout<<"Enter a number"<<endl;                            // Asked user to enter a number.
	cin>>n;                                                  // taken user input.
	cout<< count_digit(n)<<endl;                             // function call, control is trasferred to count_digit function.The values is printed which is returned by the function.
	return 0; 
}
