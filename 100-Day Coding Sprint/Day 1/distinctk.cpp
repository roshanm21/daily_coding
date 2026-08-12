#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> mainstack = {};
    vector<string> dstack = {};
    int num{};
    string curr;
    cin >> num;

    for (int i{0}; i < num; i++)
    {
        cin >> curr;
        mainstack.push_back(curr);
    };

    int q{};
    cin >> q;
    for (string j : mainstack)
    {
        auto it = find(dstack.begin(), dstack.end(), j);
        if (it == dstack.end())
        {
            dstack.push_back(j);
        }
    };
    if (dstack.size() < q)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << dstack[q + 1];
    }
    
    return 0;
}

//=======>

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    if (!(cin >> num))
        return 0;

    vector<string> mainstack(num);
    unordered_map<string, int> freq; //Holds key,value pair

    for (int i = 0; i < num; i++)
    {
        cin >> mainstack[i];
        freq[mainstack[i]]++;
    }

    int q;
    cin >> q;

    vector<string> distinct_strings;
    for (const string &s : mainstack)
    {
        if (freq[s] == 1)
        {
            distinct_strings.push_back(s);
        }
    }

    if (q <= 0 || q > static_cast<int>(distinct_strings.size())) //static_cast<int>123.32 is like (int)123.32
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << distinct_strings[q - 1] << "\n";
    }

    return 0;
}