#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k,s=0,w=0;
    cin>>n;
    int ar[n],ar1[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
          s=s | ar[i];
       
    }
     for(i=0;i<n;i++){
          cin>>ar1[i]; 
            w=w | ar1[i];
     }
      

    cout<<s+w<<endl;
}