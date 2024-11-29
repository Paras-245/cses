#include <bits/stdc++.h>
using namespace std;

#define f(i,s,e) for(long long int i=s;i<e;i++)

int main()
{

    string dna = "";
    cin >> dna;
    int n = dna.length();
    int len = 1;
    int ans = 1;
    f(i,1,n)
    {
        if(dna[i] == dna[i-1])
        {
            len++;
        }
        else
        {
            len = 1;
        }
        ans = max(ans,len);
    }
    cout << ans << endl;
    return 0;
}
