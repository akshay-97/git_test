#include<iostream>
#include<vector>
using namespace std;

main(){
	long int n,num,flag=-1;
	cin>>n;
	vector <long int> arr;
	for(long int i=0;i<n;i++)
	{
		cin>>num;
		if(num==i){
			flag=0;
			arr.push_back(num);
		}
	}
	if(flag==-1){
		cout<<-1;
	}
	else{
		for(long int i=0;i<arr.size();i++){
			cout<<arr[i]<<" ";
		}
	}
	
}
