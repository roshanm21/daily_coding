#include <iostream>
#include <vector>

void find_youngest_member(int n, int m, std::vector<std::pair<int, int>> &gifts)
{
    // Write your logic here.
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
