#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a%2!=0&&b%2==0)
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
}