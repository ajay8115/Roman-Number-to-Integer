// CODE BY : AJAY PAL , IIT (BHU)
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

int romanToDecimal(string &s)
{
    int n = s.size();
    map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    if (n == 1)
    {
        return m[s[0]];
    }

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (m[s[i]] >= m[s[i + 1]])
        {
            sum += m[s[i]];
        }

        else
        {
            sum -= m[s[i]];
        }
    } 

    sum += m[s[n - 1]];

    return sum;
}