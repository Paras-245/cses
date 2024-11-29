#include <bits/stdc++.h>
using namespace std;
 
#define f(i,s,e) for(long long int i=s;i<e;i++)
 
int main()
{
    vector<int> nums;
    int n = 0;
    cin >> n;
    f(i,0,n-1)
    {
        int temp;
        cin>> temp;
        nums.push_back(temp);
    }
    long long xor1 = 0;
    long long xor2 = 1;
    f(i,1,n)
    {
        xor1 ^= nums[i-1];
        xor2 ^= i+1;
    }
    cout << (xor1 ^ xor2) << endl;
    return 0;
}
