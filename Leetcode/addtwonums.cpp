#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    vector<int> l1 = {2,4,3};
    vector<int> l2 = {5,6,4};
    vector<int> r1 = {0};
    int l1n {0};
    int l2n {0};

    for(int o : l2){
        l2n = 10*l2n + o;
    }
    for(int k : l1){
        l1n = 10*l1n + k;
    }
    int sum = l1n + l2n;
    if(sum==0){
        r1.push_back(0);
    }
    else{
        while (sum > 0){
        r1.push_back(sum % 10);
        sum /= 10;
    }}

}
//listnode solution uploaded in leetcode