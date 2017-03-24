#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[]={12, 1, 12, 3, 12, 1, 1, 2, 3, 3};
    sort(A,A+n);
    int i=0;
    while(i<n)
    {
        //cout<<A[i]<<endl;
        if(A[i]==A[i+1])
        {
            i=i+3;
        }
        else
        {
          cout<<A[i]<<endl;
          i+=1;

        }

    }
cout<<i<<endl;


    return 0;

}
