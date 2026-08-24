// CODEFORCE
// Question Link :- https: // codeforces.com/problemset/problem/266/A

#include <iostream>
#include <vector>
using namespace std;

int main(){
int stones{};
vector<char> seq = {};
char color;
int count{};
cin>>stones;
for(int k{0} ; stones>k ;k++){
    cin>>color;
    seq.push_back(color);
    if(seq.size() > 1){
        if(seq[k-1] == seq[k]){
            count++;
        }
    }
}
cout<<count;
}
