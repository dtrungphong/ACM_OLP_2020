#include <bits/stdc++.h>
using namespace std;
int arr_[100];

int binary_search(int l, int r, int number_find){
	if(l>r) return -1;
	int mid = l+(l-r)/2;
	if(arr_[mid]==number_find) return mid;
	if(arr_[mid]>number_find) return binary_search(l,mid-1,number_find);
	else return binary_search(mid+1,r,number_find);
}

int main(){
	int n; cin>>n;
	for (int i=0;i<n;i++){
		cin>>arr_[i];
	}
	int k;
	cout<<binary_search(0,n-1,k);

	return 0;
}