#include <bits/stdc++.h>
using namespace std;
 
#define f(i,s,e) for(long long int i=s;i<e;i++)
 
int main()
{
    long long n = 0;
    cin >> n;
    while(n != 1)
    {
        cout << n << " ";
        if((n &1) ==0 )
        {
            n = n/2;
        }
        else
        {
            n = n*3 +1;
        }
    }
    cout << 1 << endl;
    return 0;
}