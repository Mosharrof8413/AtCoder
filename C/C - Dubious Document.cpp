/*

 Problem link : https://atcoder.jp/contests/arc071/tasks/arc071_a

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

vector<ll>ans(26,10000);  //size   value
int main()
{
    optimize();
    ll n;
    cin>>n;
    string st;
    for(ll i=0; i<n; i++)
    {
        cin>>st;
        vector<ll>cnt_min(26,0);
        for(auto ch : st)
        {
            cnt_min[ch-'a']++;
        }

        for(ll i=0; i<26; i++)
        {
            ans[i]=min(ans[i],cnt_min[i]);
        }
    }
    for(ll i=0; i<26; i++)
    {
        for(ll j=0; j<ans[i]; j++) //how much times any character present ..
        {
            char ok=(char) (i+'a');
            cout<<ok;
        }
    }
    cout<<endl;
}

//Alhamdulillah..

/*
input :
3
cbaa
daacc
acacac

output :
aac

*/


