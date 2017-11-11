//http://www.lightoj.com/volume_showproblem.php?problem=1024
#include <list>

#include <set>
#include <map>
#include <ctime>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
#include <limits>
#include <string>
#include <cctype>
#include <cstdio>
#include <vector>
#include <bitset>
#include <numeric>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <complex>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

#define sf scanf
#define pf printf
#define pi 2*acos(0.0)
#define ull unsigned long long
#define all(v) v.begin(),v.end()

#define sii(t) scanf("%d",&t)
#define sll(t) scanf("%lld",&t)
#define sll(t) scanf("%lld",&t)
#define ssll(a,b) scanf("%lld%lld",&a,&b)
#define ssd(a,b) scanf("%lf%lf",&a,&b)
#define sssll(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define ssslf(a,b,c) scanf("%lf%lf%lf",&a,&b,&c)
#define ssssll(a,b,c,d) scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
#define Case(no) printf("Case %lld: ",++no)
#define nl puts("")
#define pll(a) printf("%lld\n",a)
#define P(a) printf("%d ",a)
#define PLL(a) printf("%lld ",a)


#define ff first
#define pb push_back
#define mp make_pair
#define se second
#define pb push_back
#define ST(v) sort(all(v))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)                       //count one
#define output freopen("out.txt","w",stdout)
#define input freopen("in.txt","r",stdin)
#define un(v) ST(v), (v).earse(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())
#define flop(m,n,q)             for(ll i=m;i<=n;i+=q)
////============ CONSTANT ===============////
#define mx  (100010)
#define inf 110
#define eps 1e-4
#define mod1 10000000000
typedef long long ll;

////=====================================////
ll visited[inf+10];
void prime_generator()
{
    for(ll i=3; i*i<=inf; i+=2)
    {
        for(ll j=i*i; j<=inf; j+=2*i)
        {
            visited[j]=1;
        }
    }
    visited[0]=2;
    ll j=1;
    for(ll i=3; i<=inf; i+=2)
    {
        if(visited[i]==0)
        {
            visited[j]=i;
            j++;
        }
    }
}
ll arr[10010];
ll arr1[10010];
void eid(ll a)
{
    //cout<<a<<endl;
    for(ll i=0; visited[i]*visited[i]<=a&&a!=1; i++)
    {
        if(a%visited[i]==0)
        {
            ll cnt=0;
            while(a%visited[i]==0)
            {
                cnt++;
                a/=visited[i];
            }
            arr[visited[i]]=max(arr[visited[i]],cnt);
            arr1[visited[i]]++;
        }
    }
    ll o=1;
    if(a!=1)
    {
        arr[a]=max(arr[a],o);
        arr1[a]++;
    }
}

string multiply( string a, int b )
{
    // a contains the biginteger in reversed form
    int carry = 0;
    for( int i = 0; i < a.size(); i++ )
    {
        carry += (a[i] - 48) * b;
        a[i] = ( carry % 10 + 48 );
        carry /= 10;
    }
    while( carry )
    {
        a += ( carry % 10 + 48 );
        carry /= 10;
    }
    return a;
}

int main()
{
   // input;
    //output;
    prime_generator();
    ll a,t=0;
    sll(a);
    while(a--)
    {
        ll b,c;
        stringstream c1;
        sll(b);
        while(b--)
        {
            sll(c);
            eid(c);
        }
        bool mark=true;
        Case(t);
        string z="1";
        for(ll i=0; i<=10000; i++)
        {
            if(arr1[i])z=multiply(z,powl(i,arr[i]));
        }
        reverse(z.begin(),z.end());
        cout<<z<<endl;
        cover(arr,0);
        cover(arr1,0);

    }
}
