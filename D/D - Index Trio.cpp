/*
 Problem : https://atcoder.jp/contests/abc249/tasks/abc249_d

*/

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx=2e5;
ll pre1[mx],pre2[mx],pre3[mx],pre4[mx];
int main()
{
    optimize();
    ll t=1;
   // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        ll ans=0;
        for(ll i=1;i<=mx;i++)
        {
            for(ll j=1;j*i<=mx;j++)
            {
                ans+=mp[i]*mp[j]*mp[i*j];
            }
        }
        cout<<ans<<endl;

    }


}

//Alhamdulillah..


/*
input:

10
1 3 2 4 6 8 2 2 3 7

Output:

62



*/










