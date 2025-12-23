#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        j=s.size();
        for(i=0;i<j;i++){
            if(s[i]=='B')
            k++;
        }
       
        if(j==1)
        cout<<"NO"<<endl;
        else{
            

         if(k==j/2&&j%2==0)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
       
    }
     k=0;
}
}