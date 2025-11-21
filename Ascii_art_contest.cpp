#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[3],i,j;
    cin>>ar[0]>>ar[1]>>ar[2];
    sort(ar,ar+3);
    if(ar[2]-ar[0]>=10)
    cout<<"check again"<<endl;
    else 
    cout<<"final "<<ar[1]<<endl;
}