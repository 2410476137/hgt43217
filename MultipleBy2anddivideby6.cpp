#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,n,b=0;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
      
        if(n==2){
            if(ar[1]-ar[0]>1)
            cout<<"YES"<<endl;
            else 
            cout<<"NO"<<endl;
        }
         else 
        cout<<"NO"<<endl;
       
      

        }
    }
