#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,w,n,i,j;
    cin>>t;
    string s;
    while(t--){
        cin>>w>>n;
        int a=0,b=0,c=0,d=0,e=0,f=0,g=0;

        cin>>s;
        for(i=0;i<w;i++){
            if(s[i]=='A')
            a++;
            else if(s[i]=='B')
            b++;
            else if(s[i]=='C')
            c++;
            else if(s[i]=='D')
            d++;
            else if(s[i]=='E')
            e++;
            else if(s[i]=='F')
            f++;
            else 
            g++;
          //  cout<<a<<b<<c<<d<<e<<f<<g<<endl;
        }
        if(a>=n)
        a=n;
       if(b>=n)
        b=n;
      if(c>=n)
        c=n;
      if(d>=n)
        d=n;
      if(e>=n)
        e=n;
      if(f>=n)
        f=n;
      if(g>=n)
        g=n;
        cout<<((n-a)+(n-b)+(n-c)+(n-d)+(n-e)+(n-f)+(n-g))<<endl;
    }
}