#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,ans="";
    cin>>s1>>s2;
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==s2[i]){
            ans+='0';
        }else
            ans+='1';
    }
    cout<<ans<<endl;
return 0;
}   