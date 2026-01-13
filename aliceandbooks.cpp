#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n];
        for(i=0;i<n;i++){
            cin>>ar[i];
        }
       // if(n%2!=0)
       // n=n+1;
        k=n/2;
        if(n%2==0)
        cout<<ar[k-1]+ar[n-1]<<endl;
        else {
             cout<<ar[k]+ar[n-1]<<endl;
        }
    }
}