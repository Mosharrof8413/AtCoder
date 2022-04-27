/*
 Problem :

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

const int mx=1e5+123;
ll pre1[mx],pre2[mx],pre3[mx],pre4[mx];
int main()
{
    optimize();
    ll t=1;
   // cin>>t;
    while(t--)
    {
      string st;
      cin>>st;
      ll low=0,up=0;
      map<char,ll>mp;
      bool f=true;
      for(ll i=0;i<st.size();i++)
      {
          if(st[i]>='a' && st[i]<='z')low++;
          else up++;

          mp[st[i]]++;
          if(mp[st[i]]>1)
          {
              f=false;
              break;
          }
      }
      if(low!=st.size() && up!=st.size() && f)cout<<"Yes"<<endl;
      else cout<<"No"<<endl;


    }


}

//Alhamdulillah..


/*
input:

AtCoder


Output:

Yes


*/









