#include <bits/stdc++.h>
using namespace std;

#define f(i,s,e) for(long long int i=s;i<e;i++)

int main()
{
    int n;
    cin >> n;
    long long ans = 0;
    long long prev = -1;
    long long curr = -1;
    f(i,0,n)
    {
        cin >> curr;
        if(curr < prev)
        {
            ans += prev - curr;
        }
        prev = max(prev,curr);
    }
    cout << ans << endl;
    return 0;
}
