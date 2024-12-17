#include <bits/stdc++.h>
using namespace std;

#define f(i,s,e) for(long long int i=s;i<e;i++)

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long x,y;
        cin >> y >> x;
        long long  n = max(y,x) * (max(y,x)-1)+1;
        if(max(y,x) % 2 == 0)
        {
            n += y-x;
        }
        else
        {
            n+= x-y;
        }
        cout << n << endl;
    }
    return 0;
}
