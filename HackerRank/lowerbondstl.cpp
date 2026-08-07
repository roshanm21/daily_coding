#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int len{1};
    cin >> len;
    vector<int> list = {};
    for (int i{}; i < len; i++)
    {
        int num{};
        cin >> num;
        list.push_back(num);
    }

    int q{1};
    cin >> q;

    for (int j{}; j < q; j++)
    {
        int val{1};
        cin >> val;

        // --- USING BINARY SEARCH --->
        int low = 0;
        int high = len - 1;
        int targetIndex = len; 

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (list[mid] >= val)
            {
                targetIndex = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1; //check other half
            }
        }

        if (targetIndex < len && list[targetIndex] == val)
        {
            cout << "Yes " << (targetIndex + 1) << "\n";
        }
        else
        {
            cout << "No " << (targetIndex + 1) << "\n";
        }
    }

    return 0;
}