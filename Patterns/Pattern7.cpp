#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<n-i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    print(n);
    return 0;
}