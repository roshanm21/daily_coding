#include <iostream>
using namespace std;

int main(){
    float kg = 0;
    cin>>kg;
    if((int)kg%2==0 && kg == (int)kg){
        cout<<"YES";
    }else {
        cout<<"NO";
    }
    return 0;
}
