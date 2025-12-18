#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ar[103],ar1[123],i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>ar[i];
        ar1[ar[i]]=i;
    }
    for(i=1;i<=n;i++){
        cout<<ar1[i]<<" ";
    }
}