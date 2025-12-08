#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n];
        for(i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        for(i=n-1;i>=0;i--){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
 
 
    }
}