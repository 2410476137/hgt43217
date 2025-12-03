#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,m,n,i,j,w,z;
    cin>>t;
    while(t--){
        cin>>m>>n;
        int ar1[m],ar2[m];
        char ar[m][n];
        for(i=0;i<m;i++){
            int d=0;
            for(j=0;j<n;j++){
                cin>>ar[i][j];
                if(ar[i][j]=='#')
                d++;
            }
            ar1[i]=d;
            ar2[i]=d;
        }
      //  for(i=0;i<m;i++){
         //   cout<<ar1[i]<<endl;
     //   }
        sort(ar1,ar1+m);
        for(i=0;i<m;i++){
            if(ar2[i]==ar1[m-1]){
                w=i;
                break;
            }
        }
        int x=0;
        for(i=0;i<n;i++){
            if(ar[w][i]=='#'){
            x++;
            if(((ar1[m-1]/2)+1)==x){
                z=i;
                break;
            }
        }

        }
        cout<<w+1<<" "<<z+1<<endl;
        x=0;
    }
}