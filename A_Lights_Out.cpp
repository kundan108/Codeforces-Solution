#include<bits/stdc++.h>
using namespace std;
int main(){
    int q[3][3];
    int ans[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>q[i][j];
            ans[i][j]=1;
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(q[i][j]%2!=0){
                ans[i][j]=ans[i][j]==1?0:1;
                if((i-1) >=0)
                    ans[i-1][j]=ans[i-1][j]==1?0:1;
                if((i+1) < 3)
                    ans[i+1][j]=ans[i+1][j]==1?0:1;
                if((j-1) >=0)
                    ans[i][j-1]=ans[i][j-1]==1?0:1;
                if((j+1) < 3)
                    ans[i][j+1]=ans[i][j+1]==1?0:1;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }

return 0;
}