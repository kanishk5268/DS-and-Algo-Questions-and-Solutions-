// Index of the first occurrence of a number

// Traverse through the array
// as we find the element we return the index of the first occurence.
// if we traverse the whole array and if we don't find an element we return -1.

#include<iostream>
using namespace std;

int ft_occ(int arr[], int n,int x){
	
	for(int i=0; i<n;i++)
	{
		if(arr[i]==x)
		{
			return i;
		}
	}
	return -1;
}

int main(){
	int n,x,arr[n];
	
	cout<<"enter the size of the array"<<endl;
	
	cin>>n;
	
	cout<<"enter the "<< n <<" elements in the array"<<endl;
	
	for(int i=0; i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"enter the element whose first occurrence you want"<<endl;
	
	cin>>x;
	
	cout<<ft_occ(arr,n,x)<<endl;
	
	return 0;
}
