#include<iostream>
using namespace std;

int count_digit(int long n){
	if(n==0){                                               // condition applied to check whether n is equal to 0 or not.
		return 0;                                           // if the number is equal to zero then return 0.
	}    
	return 1 + count_digit(n/10);                          // otherwise return 1 + count_digit(n/10)
}

/*Explanation: Eg (n = 123)  so as soon as the control is transferred to the function it checks whether the the number is 0 or not. if it is not zero it again calls the count_digit 
function but instead of passing n as a parameter we pass n/10. so in the recursive call it will go (12) (n/10, 123/10=12) and so on the calls are made. when the number becomes zero
control is transferred to parent function and it returns (1 + 0 = 1) then again this value is returned to the parent function (1 + 1 =2 ) and then (1+2=3) so 3 is returned to the 
main function
  */

               


int main(){
	int n;													 // initialized n (integer).		
	cout<<"Enter a number"<<endl;                            // Asked user to enter a number.
	cin>>n;                                                  // taken user input.
	cout<< count_digit(n)<<endl;                             // function call, control is trasferred to count_digit function.The values is printed which is returned by the function.
	return 0; 
}
