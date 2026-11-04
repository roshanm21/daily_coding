#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {5,6,8,4,2,3,1};
    int s = arr.size();
    int c{};
        int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        // Inner loop handles the comparisons, ignoring already sorted elements
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
};