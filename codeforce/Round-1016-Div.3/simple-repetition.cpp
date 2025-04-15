#include <bits/stdc++.h>
using namespace std;

// #define MAX_NUM 1000000000
// bool isPrime[MAX_NUM+1] = {true};

class Solution {
public:
    Solution()
    {
        ;
    }

    bool isPrime(unsigned long long &x)
    {
        if (x<2) return false;
        for(unsigned long long i = 2; i*i <= x; i++)
        {
            if (!(x % i))
            {
                return false;
            }
        }
        return true;clea
    }

    void simpleRepetition(unsigned long long &x, int &k)
    {
        if (k == 1 ) {
            if(isPrime(x)) { printf("YES\n"); return; };
        }
        if (x == 1)
        {
            unsigned long long q = x;
            for(int i = 0; i < k-1; i++)
            {
                q *= 10;
                q += x;
            }
            if(isPrime(q)) { printf("YES\n"); return; };
        }
        printf("NO\n");
    }

private:

    
};

int main()
{
    // string str;
    unsigned long long x;
    int k;
    int i;
    fscanf(stdin, "%d", &i);

    auto sol = Solution();

    while(i--)
    {
        // cin >> str;
        fscanf(stdin, "%llu %d", &x, &k);
        sol.simpleRepetition(x, k);
    }

    return 0;
}

// cost := 一個數字 div 他的數字加總是 cost;
