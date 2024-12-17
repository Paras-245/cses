#include <bits/stdc++.h>
using namespace std;

#define f(i,s,e) for(long long int i=s;i<e;i++)
#define ll long long 
int main()
{
    int n;
    cin >> n;
    for(int k = 1;k <= n;k++)
    {
        ll a1 = k*k;
        ll total = (a1 * (a1-1))/2;
        ll ans = total - 4 * (k-1) * (k-2);
        cout << ans << endl;
    }
    return 0;
}
