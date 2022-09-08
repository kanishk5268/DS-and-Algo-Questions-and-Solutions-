// index of last occurrence (recursive approach)

#include<iostream>
using namespace std;

int lt_occ(int arr[],int low,int high, int x,int n){
	if(low>high){
		return -1;
	}
	int mid= (low+high)/2;
	if (arr[mid]>x){
		return lt_occ(arr,low,mid-1,x,n);
	}else if(arr[mid]<x){
		return lt_occ(arr,mid+1,high,x,n);
	}
	else{
		if(mid==n-1 || arr[mid]!= arr[mid+1]){
			return mid;
		}else{
			return lt_occ(arr,mid+1,high,x,n);
		}
	}
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
	cout<< lt_occ(arr,0,n-1,x,n)<<endl;
	return 0;

}
