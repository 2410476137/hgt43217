#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j,k,ar[7];
    cin>>t;
    while(t--){
        cin>>ar[0]>>ar[1]>>ar[2]>>ar[3]>>ar[4]>>ar[5]>>ar[6];
        sort(ar,ar+7);
        if(ar[0]+ar[1]+ar[2]==ar[6])
        cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<endl;
        else 
         cout<<ar[0]<<" "<<ar[1]<<" "<<ar[3]<<endl;
    }
}