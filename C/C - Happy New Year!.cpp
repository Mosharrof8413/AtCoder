/*
 Problem Link : https://atcoder.jp/contests/abc234/tasks/abc234_c
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
        vector<ll>v;
        while(n)
        {
            ll digit=n%2;
            n/=2;
            if(digit)v.PB(2);
            else v.PB(0);
        }
        reverse(v.begin(),v.end());
        bool f=true;
        for(ll i=0;i<v.size();i++)
        {
           //if(v[i]==0 && f)continue;
          // else
          // {
              // f=false;
               cout<<v[i];
          // }
        }
        cout<<endl;
    }
}

//Alhamdulillah...

