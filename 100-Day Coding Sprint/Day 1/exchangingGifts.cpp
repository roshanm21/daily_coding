// Question Link -> https://unstop.com/code/challenge-assessment/250196?moduleId=372

#include <iostream>
#include <vector>
using namespace std;

void find_youngest_member(int n, int m, std::vector<std::pair<int, int>> &gifts)
{
    // Write your logic here
    vector<int> score(n + 1, 0); // array(size,default_value)
    for (const auto &a : gifts)
    {
        int giver = a.first;
        int reciv = a.second;

        score[giver]--;
        score[reciv]++;
    }

    int youngest = -1;
    for (int i = 1; i <= n; ++i)
    {
        if (score[i] == n - 1)
        {
            youngest = i;
            break;
        }
    }
    cout << youngest;
}

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<std::pair<int, int>> gifts(m);
    for (int i = 0; i < m; ++i)
    {
        std::cin >> gifts[i].first >> gifts[i].second;
    }
    find_youngest_member(n, m, gifts);
    return 0;
}
