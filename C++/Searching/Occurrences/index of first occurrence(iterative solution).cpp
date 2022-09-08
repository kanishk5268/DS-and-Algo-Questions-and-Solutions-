// index of first occurrence of element iterative method.

#include<iostream>
using namespace std;

int ft_occ(int arr[],int n, int x){
	int low=0, high=n-1;
	while(low<=high){
		int mid= (low+high)/2;
		if(arr[mid]>x){
			high= mid-1;
		}else if(arr[mid]<x){
			low=mid+1;
		}else{
			if(mid==0 || arr[mid-1] != arr[mid]){
				return mid;
			}else{
				high=mid-1;
			}
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
	cout<<"Enter the element whose first occurrence you want."<<endl;
	cin>>x;
	cout<<"The index is"<<endl;
	cout<<ft_occ(arr,n,x)<<endl;
	return 0;
	}

