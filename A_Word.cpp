#include<bits/stdc++.h>
using namespace std;
    int main(){
    string s;
    cin>>s;
    string sans=s;
    string cans=s;
    int ss=0;
    int cs=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>=65 && s[i]<=90){
            cs++;
            sans[i]=char(s[i]+32);
        }else{
            ss++;
            cans[i]=char(s[i]-32);
        }
    }
    if(ss >=cs){
        cout<<sans<<endl;
    }else{
        cout<<cans<<endl;
    }

return 0;
}