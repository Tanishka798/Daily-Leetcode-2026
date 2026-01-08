#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<j;
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