// Index of last occurrences.

#include<iostream>
using namespace std;

int lt_occ(int arr[],int n,int x){
	for(int i=n-1; i>=0;i--){
		if(arr[i]==x){
			return i;
		}
	}
	return -1;
}

int main(){
	
	int n, arr[n],x;
	
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the "<< n << " elements in the array"<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Enter the elements whose last occurrence is to be searched"<<endl;
	cin>>x;
	cout<<"The index is"<<endl;
	cout<< lt_occ(arr,n,x)<<endl;
	return 0;
}
