#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int j=0,k=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i!=0){  
            if(v[i]>v[j])
                j=i;
            if(v[i]<=v[k])
                k=i;
        }
    
    }
    if(j>k)
        cout<<(j+(n-k-2))<<endl;
    else
        cout<<(j+(n-k-1))<<endl;

return 0;
}