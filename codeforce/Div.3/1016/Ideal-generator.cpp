#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void idealGenerator(int k)
    {
        if (k & 1) printf("YES\n");
        else printf("NO\n");
    }

    bool isPalidrome(vector<int> &arr)
    {
        for(int i = 0; i < arr.size(); i++) {
            if (arr[i] != arr[arr.size()-1-i])
                return false;
        }
        return true;
    }

private:

};

int main()
{
    int i, k;
    fscanf(stdin, "%d", &i);

    auto sol = Solution();

    while(i--)
    {
        fscanf(stdin, "%d", &k);
        sol.idealGenerator(k);
    }

    return 0;
}