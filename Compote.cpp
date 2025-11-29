#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,t,d=0;
    cin>>a>>b>>c;
    while(1){
        if(a*2<=b&&a*4<=c){
            cout<<a+a*2+a*4<<endl;
            d++;
            break;
        }
        else 
        a--;
    }
    if(d==0)
    cout<<0<<endl;
}