#include<bits/stdc++.h>
using namespace std;
vector<int> sieve(){
    int prime[51];
    for(int i=0;i<51;i++){
        prime[i]=1;
    }
    prime[1]=0;
    prime[2]=1;
    for(int i=1;i<51;i++){
        if(prime[i]){
            for(int j=2;i*j<51;j++){
                prime[i*j]=0;
            }
        }
    }
    vector<int> v;
    for(int i=1;i<51;i++){
        if(prime[i]){
          v.push_back(i);
        }
    }
    return v;
}

int main(){
    vector<int> v=sieve();
    int n,m;
    cin>>n>>m;
    int i=0;
    for(i=0;i<v.size();i++){
        if(n==v[i]){
            break;
        }
    }
    if(v[i+1]==m && (i+1)<v.size())
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
return 0;
}