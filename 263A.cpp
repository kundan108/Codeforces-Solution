#include<bits/stdc++.h>
using namespace std;
int main(){
    int mat[5][5];
    int k,l;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1){
                k=i,l=j;
            }
        }
    }
    cout<<(abs(k-2)+abs(l-2))<<endl;
}