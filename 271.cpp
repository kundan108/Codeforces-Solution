#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    for(int i=y+1;i<=9050;i++){
        int arr[10];
        int check =true;
        for(int j=0;j<10;j++){
            arr[j]=0;
        }
        int temp=i;
        while(temp){
            arr[temp%10]+=1;
            temp=temp/10;
        }
        for(int j=0;j<10;j++){
            if(arr[j]>1){
                check=false;
            }
        }
        if(check){
            cout<<i<<endl;
            return 0;
        }

    }
    return 0;
}