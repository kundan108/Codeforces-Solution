#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll n,cntlucky=0,cnttotal=0;
    cin>>n;
    while(n!=0)
    {
        ll a=n%10;
        if(a==4 || a==7)
        {
            ++cntlucky;
        }
        n=n/10;
        ++cnttotal;
    }
    if(cntlucky==4 || cntlucky==7)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}