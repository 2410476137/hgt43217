#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,k,i,j;
    cin>>t;
    while(t--){
        cin>>x>>k;
        if(x%k!=0){
            cout<<"1"<<endl;
            cout<<x<<endl;
        }
        else {
            cout<<"2"<<endl;
            j=x/k;
            cout<<j*k-1<<" "<<1<<endl;
        }
    }
}