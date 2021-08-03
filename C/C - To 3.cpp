/*
 Problem Link : https://atcoder.jp/contests/abc182/tasks/abc182_c
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

const int MX=1e7+123;
bitset<MX>is_prime;
vector<ll>primes;
void primeGen(ll n)
{
    ll sq=sqrt(n);
    for(ll i=3; i<=n; i+=2)is_prime[i]=1;

    for(ll i=3; i<=sq; i+=2)
    {
        if(is_prime[i]==1)
        {
            for(ll j=i*i; j<=n; j+=(i+i))
                is_prime[j]=0;
        }
    }
    primes.PB(2);
    is_prime[2]=1;
    for(ll i=3; i<=n; i+=2)
    {
        if(is_prime[i]==1)primes.PB(i);
    }
}
ll NOD(ll n)
{
    ll ans=1;
    for(auto u : primes)
    {

        if(u*u > n)break;
        if(n%u==0)
        {
            ll cnt=0;
            while(n%u==0)
            {
                n/=u;
                cnt++;
            }
            cnt++;
            ans*=cnt;
        }
    }
    if(n>1) ans*=2;
    return ans;
}
int main()
{
    optimize();
    //ll limt=1e3+123;
    // primeGen(limt);
    ll test=1;
   // cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        ll m=n;
        map<ll,ll>mp;
        ll cnt=0,sum=0;
        while(m)
        {
            ll okk=m%10;
            sum+=okk;
            m/=10;
            mp[okk%3]++;
            cnt++;
        }
        if(sum%3==0)
        {
            cout<<0<<endl;
        }
        else if(sum%3==1)
        {
            if(cnt==1)cout<<-1<<endl;
            else if(mp[1])cout<<1<<endl;
            else if(mp[2]>=2 && cnt!=2)
            {
                cout<<2<<endl;
            }
            else cout<<-1<<endl;
        }
        else
        {
            if(cnt==1)cout<<-1<<endl;
            else if(mp[2])cout<<1<<endl;
            else if(mp[1]>=2 && cnt!=2)
            {
                cout<<2<<endl;
            }
            else cout<<-1<<endl;
        }

    }
}

/*
  Alhamdulillah...

*/


