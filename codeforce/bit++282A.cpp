#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{   
    int num =0;
    int j;
    cin>>j;
    string dat;
   
    for(int k=0 ; k<j ;k++){
    cin>>dat;
    if (dat == "++X" || dat == "X++"){
            num += 1;
    }
    else if (dat == "--X" || dat == "X--")
    {
        num -= 1;;
    }
    else
    {
    }
    }
    cout<<num;
}
