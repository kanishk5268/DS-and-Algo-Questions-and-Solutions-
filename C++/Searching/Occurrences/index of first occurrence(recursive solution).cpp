// Index of first occurrence (recursive solution)

// We will use binary search
// This solution will only work when the array is sorted and the elements are repeated otherwise if you simply enter distinct elements then this code is going to fail
// because it does not check whether the elements are being repeated or not.

#include<iostream>
using namespace std;

int ft_occ(int arr[], int low, int high, int x)
{
	if(low>high)
	{
		return -1;
	}
	
	int mid= (low+high)/2;
	
	if(x>arr[mid])
	{
		return ft_occ(arr,mid+1,high,x);
	}
	else if(x< arr[mid])
	{
		return ft_occ(arr,low,mid-1,x);
	}
	
	else{
		if(mid==0 || arr[mid-1]!= arr[mid]){
			return mid;
		}else{
			return ft_occ(arr,low,mid-1,x);
		}
	}
}


int main(){
	int n,arr[n],low,high,x;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	cout<<"enter the " << n << " elements in the array"<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"enter the element whose first occurrence you want"<<endl;
	cin>>x;
	cout<<ft_occ(arr,0,n-1,x)<<endl;
	return 0;
}
