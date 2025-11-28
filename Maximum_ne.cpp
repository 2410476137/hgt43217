#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,b;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1)
        cout<<1<<endl;
        else if(n==2)
        cout<<9<<endl;
        else if(n==3)
        cout<<29<<endl;
        else if(n==4)
        cout<<56<<endl;
        else {
            cout<<((n*n-1)+(n*n-n)+(n*n-n-1)+(n*n-n-2)+(n*n-2*n-1))<<endl;
        }
    }
}