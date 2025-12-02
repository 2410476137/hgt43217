#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int e,f,g;
    int ar[3]={a,b,c};
    sort(ar,ar+3);
    if(ar[1]-ar[0]>d)
    e=0;
    else 
    e=d-(ar[1]-ar[0]);
    if(ar[2]-ar[1]>d)
    f=0;
    else 
    f=d-(ar[2]-ar[1]);
    cout<<e+f<<endl;
}