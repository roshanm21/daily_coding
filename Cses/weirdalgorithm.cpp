#include <iostream>
using namespace std;

int main(){
    long int signed num = 0;
    cin>>num;
    cout << num << ' ';
    while(num!=1){
        if(num%2==0){
            num/=2;
            cout << num << ' ';
        }else{
            num = (num*3) + 1;
            cout << num << ' ';
        }
    }
    
}