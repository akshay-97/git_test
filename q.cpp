#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a,a+n);
    if(a[n-1]==0){
        cout<<0;
        return 0;
    }
    while(n--){
        cout<<a[n];
    }
    return 0;
}

