# sum of two numbers
#include<iostream>
#include<string>
#include<algorithm>
typedef long long lli;
using namespace std;
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
    string sum;

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
    cout<<sum<<endl;

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
    string a,b;
    cin>>a;
    cin>>b;
    lli len1=a.size();
    lli len2=b.size();
    make_string_equal(a,len1,b,len2);

}
