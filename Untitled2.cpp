#include<iostream>
using namespace std;

main(){
	long int arr[10000]={0};
	long int n,e,flag=-1;
	cin>>n;
	for(long int i=0;i<n;i++){
		cin>>e;
		if(e<10000){
			arr[e]++;
		}
	}
	for(long int i=0;i<10000;i++){
		if(arr[i]>1){
			flag=0;
			cout<<i<<" ";
		}
	}
if(flag==-1){
	cout<<"unique";
}
	
}



