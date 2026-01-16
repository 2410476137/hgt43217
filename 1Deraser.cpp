#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j,k,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        string s;
        cin>>s;
       int d=0;
        for(i=0;i<a;i++){
            if(s[i]=='B'){
                d++;
                i=i+b-1;
            }
        }
        cout<<d<<endl;

    }
}