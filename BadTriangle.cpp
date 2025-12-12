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
        if(ar[0]+ar[1]<=ar[n-1]){
            cout<<1<<" "<<2<<" "<<n<<endl;
        }
        else 
        cout<<"-1"<<endl;

    }
}