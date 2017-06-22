# multiply of 2 number
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
typedef long long lli;
using namespace std;
vector<string>v;
string sum;
lli carry =0;
lli factory(char c1, char c2)
{
    lli   p=c1-'0';
    lli  q=c2-'0';
    lli n=p+q+carry;
    n>0? carry=n/10:  carry =0;
    n%=10;
    char h;
    h=n+'0';
    return h;
}

void big_sum(string a,string b,lli len)
{
    carry=0;

    for(lli i=len-1; i>=0; i--)
    {
        char c2=b[i], c1=a[i];
        char h=factory(c1,c2);
        sum+=h;
    }
    if(carry!=0)
    {
        char h=carry+'0';
        sum+=h;
    }
    reverse(sum.begin(),sum.end());
}

void make_string_equal(string a,lli len1,string b,lli len2)
{
    string p="";
    if(len1!=len2)
    {
        lli b1=abs(len2-len1);
        while(b1--) p+='0';
        len1<len2 ? a=p+a:b=p+b;
    }

    lli    len=a.size();
    big_sum(a,b,len);
}

int main()
{
    string a,b,p,p1;
    cin>>a>>b;
    if(a=="0"||b=="0") cout<<"0"<<endl;
    else
    {
        lli i;
        p=a;
        lli len1=a.size();
        lli len3=len1;
        lli len2=b.size();
        char c;
        bool mark =false;
        for(i=len2-1; i>=0; i--)
        {
            c= b[i];
            lli m=c-'0';
            p=a;
            len3=a.size();
            for(lli j=1; j<m; j++)
            {
                make_string_equal(a,len1,p,len3);
                p=sum;

                sum.clear();
                len3=p.size();

            }
            if(mark) p1+='0';
            mark=true;
            sum.clear();

            p=p+p1;

            v.push_back(p);
            p.clear();

        }

        lli     n=v.size();
        p=v[0];
        for(i=1; i<n; i++)
        {
            len1=p.size();
            len2=v[i].size();
            make_string_equal(p,len1,v[i],len2);
            p=sum;
            sum.clear();

        }
        cout<<p<<endl;
    }
}
