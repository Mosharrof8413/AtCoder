/*
 Problem Link : https://atcoder.jp/contests/abc234/tasks/abc234_b
 */

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second


ll gcd ( ll a, ll b )
{
    return __gcd ( a, b );
}
ll lcm ( ll a, ll b )
{
    return a * ( b / gcd ( a, b ) );
}

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
    ll limt=1e6+123;
    //primeGen(limt);

    ll t=1;
     //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll> >vp;
        for(ll i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            vp.PB(make_pair(a,b));
        }
        double okk=0.0000;
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                ll f=(vp[j].F-vp[i].F);
                ll s=vp[j].S-vp[i].S;
                double ans=sqrt(f*f+s*s);
                okk=max(okk,ans);
            }
        }
        fraction();
        cout<<okk<<endl;
    }
}

