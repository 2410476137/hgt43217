#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n];
        for(i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        cout<<ar[n-1]-ar[0]<<endl;
    }
}