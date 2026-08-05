#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size = 0;
    cin>>size;
    int actsum{};
    for(int j = 0;(size - 1 )>j;j++){
        int temp = 0;
        cin>>temp;
        actsum += temp;
    }
    int apprsum{0};
    for (int k = 0; size >= k; k++){
        apprsum+=k;
        
    }
    cout<<(apprsum - actsum );
    return 0;
}