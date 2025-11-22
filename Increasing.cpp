#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n],ar1[n];
        for(i=0;i<n;i++){
            cin>>ar[i];
        }
        if(ar[0]==1)
            ar1[0]=2;
            else 
            ar1[0]=1;
            if(n>1){
            for(i=1;i<n;i++){
                if(ar[i]==(ar1[i-1]+1))
                ar1[i]=ar1[i-1]+2;
                else 
                ar1[i]=ar1[i-1]+1;
              //  cout<<ar1[i-1]<<endl;
            }
            cout<<ar1[n-1]<<endl;
        }
        else 
        cout<<ar1[0]<<endl;
       
    }
}