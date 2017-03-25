#include<bits/stdc++.h>
using namespace std;
int n,even_count,odd_count;
int main()
{
cin>>n;
if(n<0)
    n=-n;
else if(n==0)
    cout<<1<<endl;
else if(n==1)
    cout<<0<<endl;
if(n>0)
{
    while(n)
    {
        if(n&1)
        odd_count++;
        cout<<n<<" odd " <<odd_count<<endl;
        n=n>>1;

        if(n&1)
        even_count++;
        cout<<n<<" even " <<even_count<<endl;
        n=n>>1;
     }
    if(abs(odd_count-even_count)==0)
        cout<<"Divisible"<<endl;
    else
        cout<<"Not Divisible"<<endl;





}





    return 0;
}
