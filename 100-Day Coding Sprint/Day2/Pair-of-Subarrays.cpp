#include <iostream>
#include <vector>

using namespace std;

int calculate_pairs(int n, vector<int> &arr)
{
    /**
     * Write your logic here.
     * Parameters:
     *     n (int): The size of the array
     *     arr (vector<int>): Vector of integers representing the elements of the array
     * Returns:
     *     int: The required number of pairs based on the problem statement
     */

    return 0;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = calculate_pairs(n, arr);
    cout << result << endl;
    return 0;
}