#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j,k,x;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n];
        int d=0,w=0,s=0,a=0,c=0;
        for(i=0;i<n;i++)
            cin>>ar[i];
            for(i=0;i<n;i++){
            if(ar[i]==0)
            d++;
            else if(ar[i]==1)
            w++;
            else if(ar[i]==3)
            s++;
            else if(ar[i]==2)
            a++;
            else if(ar[i]==5)
            c++;
            if(d>=3)
            d=3;
            if(w>=1)
            w=1;
            if(s>=1)
            s=1;
            if(a>=2)
            a=2;
            if(c>=5)
            c=1;
             x=d+w+s+a+c;
             if(x==8){
                k=i;
                break;
             }
            
            
 
        }
        if(x==8)
        cout<<k+1<<endl;
        else 
        cout<<0<<endl;
 
    }
}