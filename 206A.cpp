#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,n;
    cin>>a>>b>>n;
    vector<int> ans;
    ans.push_back(a);
    int i;
    while(n--){
        for(i=1;i<10;i++){
            int temp=a*10+i;
            if(temp%b==0){
                a=temp;
                break;
            }
        }
        if(i==10){
            cout<<"-1"<<endl;
            return 0;
        }   
    }
    cout<<a<<endl;
    return 0;
}