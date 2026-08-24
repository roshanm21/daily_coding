
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int steps{0};
    int distance{};
    cin>>distance;
    int rem5 = distance%5;
    int total5 = distance/5;
    if( rem5 != 0) {
        steps = 1;
    }
    cout << total5 + steps;
}
