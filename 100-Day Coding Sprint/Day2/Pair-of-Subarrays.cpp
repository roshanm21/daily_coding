/* 
    QUESTION - 

    You are given an array A of size N.
    Your task is to count the number of unique pairs of non -
    overlapping subarrays such that both subarrays have the same sum.
    Each subarray is defined by a pair of indices[L, R](1 - based indexing),
    where 1 ≤ L ≤ R ≤ N.
    Two subarrays must not overlap,
    meaning they should not share any common index.

    Also,
    the pair([ L1, R1 ], [ L2, R2 ]) is considered the same as([ L2, R2 ], [ L1, R1 ]), so count each valid pair only once.

*/

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

    int pairs{};
    for(int j : arr){
        
    }


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