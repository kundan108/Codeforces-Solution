#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        sum+=temp;
    }
    //cout.precision(14);
    cout<<fixed<<setprecision(12)<<sum/(double)n<<endl;
    return 0;
}