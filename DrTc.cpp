#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j,k;
    cin>>t;
    while(t--){
        int d=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++){
            if(s[i]=='1')
            d++;
        }
        if(d==1&&n==1)
        cout<<"0"<<endl;
        else if(d==1&&n==2)
        cout<<2<<endl;

       else if(d==n)
        cout<<d<<endl;
        else 
        cout<<n+d<<endl;
    }
}