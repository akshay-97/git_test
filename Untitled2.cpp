#include<iostream>
using namespace std;

main(){
	int arr[10000]={0};
	int n,e;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>e;
		if(e<10000){
			arr[e]++;
		}
	}
	for(int i=0;i<10000;i++){
		if(arr[i]>1){
			cout<<i<<" ";
		}
	}

	
}



