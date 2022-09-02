/*To check whther a number is a palindrome or not*/

/*Idea: Traverse the digits from right to left to find reverse of the given number. After getting the reverse we will simply check the reverse with the original number.
If the reverse and original is same then the number is pallindrome.*/


#include <iostream>
using namespace std;

bool isPal(int n){                  /* Bool type function is created. (1 means true and 0 means false*/
	int rev=0,temp=n,ld;           /* temp variable is created and the value of n is stored so that we can compute.*/  
	while(temp!=0){                /*while loop is run till temp becomes 0. */
		ld=temp%10;                /* Logic of reversing the digits is applied. Remainder is calculated to find the last digit and the number is divided by 10 to remove the last digit */
		rev=rev*10 + ld;
		temp=temp/10;
	}
    return (rev==n);              /*Comparison is done to see whether the number is pallindrome or not. */
}

int main(){
	int n;
	cout<<"Enter a number to check whether a number is Pallindrome or not"<<endl;
	cin>>n;
	cout<< isPal(n)<<endl;
}
