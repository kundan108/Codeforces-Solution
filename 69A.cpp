#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x[n];
    int y[n];
    int z[n];
    int xsum=0,ysum=0,zsum=0;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i];
        xsum+=x[i];
        ysum+=y[i];
        zsum+=z[i];
    }
    if(xsum==0 && ysum==0 && zsum==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}