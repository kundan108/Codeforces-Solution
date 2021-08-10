#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    vector<bool> v(d+1,false);
    for(int i=k;i <=d;i+=k ){
        v[i]=true;
    }
    for(int i=l;i<=d;i+=l){
        v[i]=true;
    }
    for(int i=m;i<=d;i+=m){
        v[i]=true;
    }
    for(int i=n;i<=d;i+=n){
        v[i]=true;
    }
    int ans=0;
    for(int i=1;i<=d;i++){
        if(v[i]==true)
            ans++;
    }
    cout<<ans<<endl;
return 0;
}