#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> rawdata = {5,6,8,4,2,3,1};
    int s = rawdata.size();
    int c{};
    for(int n = 0 ;s > n;n++){
        if(rawdata[n]>rawdata[n+1]){
  
            cout<<rawdata[n] <<' ' <<rawdata[n+1] << ' '<< n <<endl ;
        }
    }
    // for(int k : rawdata){
       
    // }
};