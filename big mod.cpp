int big_mod(int base, int power, int mod)
{
if(power==0) return 1;

else if(power%2==1) 
{
int p1 = base % mod;
int p2 = (big_mod(base,power-1,mod))%mod;
return (p1*p2)%mod;
}
else if(power%2==0)
{
int p1 = (big_mod(base,power/2,mod))%mod;
return (p1*p1)%mod;
}
}
