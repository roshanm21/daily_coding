//Question:
// A permutation of integers 1,2,\ldots,n is called beautiful if there are no adjacent elements whose difference is 1.
// Given n, construct a beautiful permutation if such a permutation exists.

// Input:
// The only input line contains an integer n.
// Output:
// Print a beautiful permutation of integers 1,2,\ldots,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int num{0};
    cin>>num;
    vector<int> odds = {};
    vector<int> even = {};
    vector<int> final = {};
    for(int j{1}; j<(num+1); j++){
        if(j%2==0){
            final.push_back(j);
            
        }else {
            odds.push_back(j);
            
        };
    }
    // for(int k = (odds.size()/4);k>0;k--){
    //     even.push_back(odds[k]);

    // }
    for(int z : odds){
        final.push_back(z);
    }
    if(1==num || num>3 ){
        for(int z : final){
        cout<<z <<' ';
    }}else{
        cout<<"NO SOLUTION";
    }
    
}