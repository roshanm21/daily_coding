#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> rowbox = {
        {1, 2, 9, 10, 25},    // 0 {0,1...4}
        {4, 3, 8, 11, 24},    // 1 {0,1...4}
        {5, 6, 7, 12, 23},    // 2 {0,1...4}
        {16, 15, 14, 13, 22}, // 3 {0,1...4}
        {17, 18, 19, 20, 21}  // 4 {0,1...4}
    };

    int q{};
    cin>>q;
    for(int j{0} ; q>j ; j++){
        int uy{0};
        int ux{0};
        cin>>uy>>ux;
        cout<<rowbox[uy-1][ux-1] <<endl;
    }
    
}
