#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void expensiveNumber(string k)
    {
        // accept leading zero.
        int removeCount = 0;
        char c = k[k.size()-1];
        while(c == '0')
        {
            removeCount ++;
            k.pop_back();
            c = k[k.size()-1];
        }

        k.pop_back();

        while ( k.size() )
        {
            c = k[k.size()-1];
            if ('1' <= c && c <= '9')
            {
                removeCount ++;
            }
            k.pop_back();
        }

        printf("%d\n", removeCount);
    }

private:

};

int main()
{
    string str;
    int i;
    fscanf(stdin, "%d", &i);

    auto sol = Solution();

    while(i--)
    {
        cin >> str;
        // fscanf(stdin, "%s", &str);
        sol.expensiveNumber(str);
    }

    return 0;
}

// cost := 一個數字 div 他的數字加總是 cost;
