#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {5,6,8,4,2,3,1};
    int s = arr.size();
    for(int i = s;i<s-1;i++){
        if(arr[i]>arr[i-1]){
        int k = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = k;
        }
        
    }
    for(int l : arr){
        cout<<l <<endl;
    }
};