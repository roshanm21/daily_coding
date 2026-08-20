#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{   
    int num =0;
    int repeat;
    cin>>repeat;
    string bit;
   
    for(int k=0 ; k<repeat ;k++){
    cin>>bit;
    if (bit == "++X" || bit == "X++"){
            num += 1;
    }
    else if (bit == "--X" || bit == "X--")
    {
        num -= 1;;
    }}
    cout<<num;
}
