#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j,d=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    cin>>ar[i];
    sort(ar,ar+n);
    t=ar[n-1]-ar[0];
    cout<<(t+1)-n<<endl;;
}