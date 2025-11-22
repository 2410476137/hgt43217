#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c,i,j;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
       if(b>a){
        i=a;
        a=b;
        b=i;
       }
        int d=(a-1)+a*(b-1);
       // cout<<d<<endl;
        if(d==c)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}