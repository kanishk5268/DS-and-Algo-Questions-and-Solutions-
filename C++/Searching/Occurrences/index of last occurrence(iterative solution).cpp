// index of last occurrence iterative solution

#include<iostream>
using namespace std;

int lt_occ(int arr[],int n, int x){
	int low=0, high= n-1;
	while(low<=high){
		int mid= (low+high)/2;
		if(arr[mid]<x){
			low=mid+1;
		}else if(arr[mid]>x){
			high=mid-1;
		}
		else{
		if(mid!=n-1 || arr[mid]!=arr[mid+1]){
			return mid;
		}
		else{
			low=mid+1;
		}
	}
	}

	return -1;
}

int main(){
	int n,arr[n],x;
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

