#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if((a+b)%2==0)
        cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
}