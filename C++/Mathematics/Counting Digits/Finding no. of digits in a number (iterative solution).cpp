// Question Finding the number of digits in a number. (Iterative solution)

#include<iostream>
using namespace std;

int count_digit( int long n){                       // n passed as a long integer parameter.
	int count=0;                                    // count initialized and declared 0.
	while(n!=0){                                    // while loop implemented until the number becomes zero.
		n=n/10;                                     // Logic : n is updated as n divided by 10 and count is incremented and this is done till the number becomes zero 
		++count;
	}
	return count;
}




// here is the main function.
int main(){
	int n;   										// initialized n (integer).
	cout<<"Enter a number"<<endl;				   // Asked user to enter a number.
	cin>>n;                                       // taken user input.
	cout<< count_digit(n) <<endl;                // function call, control is trasferred to count_digit function.The values is printed which is returned by the function.
	return 0;
}
