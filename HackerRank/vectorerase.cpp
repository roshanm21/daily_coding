#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s{};
    int n{};
    int IndexToRemove{};
    int RangeS{};
    int RangeE{};
    cin>>s;
    vector<int> v = {};
    for(int j{0};j<s;j++){
        cin>>n;
        v.push_back(n);
    }
    cin>>IndexToRemove;
    v.erase(v.begin()+IndexToRemove-1);
    cin>>RangeS>>RangeE;
    v.erase(v.begin()+RangeS-1,v.begin()+RangeE-1);
    cout<<v.size()<<endl;
    for(int k : v){
        cout<<k <<' ';
    }
    return 0;
}
