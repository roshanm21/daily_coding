
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int num{0};
    cin>>num;
    if(num>3){
      for(int j = (num-1);j>0;j--){
        cout<<j;
    }  
    }else{
        cout<<"NO SOLUTION";
    }

}