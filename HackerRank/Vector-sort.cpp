#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int num{};
    cin >> num;
    for (int j; j < num; j++)
    {
        int value{};
        cin >> value;
        v.push_back(value);
    }
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << ' ';
    }

    return 0;
}
