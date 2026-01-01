#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j,k;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n];
        for(i=0;i<n;i++){
            cin>>ar[i];
        }
        int d=0;
        if(n==1)
        cout<<"YES"<<endl;
        else {
            int ds=ar[1]-ar[0];
            for(i=0;i<n-1;i++){
                if(ds==ar[i+1]-ar[i])
                d++;
            }
            if(d==n-1)
            cout<<"NO"<<endl;
            else 
            cout<<"YES"<<endl;
            cout<<"eieieii"<<endl;
        }
    }
}