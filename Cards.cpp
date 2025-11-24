#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j,d=0,w=0;
    cin>>t;
    string s;
    cin>>s;
    for(i=0;i<t;i++){
        if(s[i]=='n')
        d++;
        else if(s[i]=='r')
        w++;
    }
    if(d>0){
        for(i=0;i<d;i++)
        cout<<"1 ";
    }
    if(w>0){
        for(i=0;i<w;i++)
        cout<<"0 ";
    }
}