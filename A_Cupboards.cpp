#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l=0;
    int r=0;
    for(int i=0;i<n;i++){
        int a;
        int b;
        cin>>a>>b;
        l+=a;
        r+=b;
    }
    int ans = min(l,n-l)+min(r, n-r);
    cout<<ans<<endl;
    return 0;
}