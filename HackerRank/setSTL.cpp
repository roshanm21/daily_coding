#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    // int lenght = s.size();
    int choice ;
    int value;
    int repeat;
    cin>>repeat;
    set<int>::iterator itr;
    for(int k = 0; k<repeat;k++){
    cin>>choice>>value;
        switch (choice)
    {
    case 1:
        s.insert(value);
        break;
    
    case 2:
        s.erase(value);
        break;
    
    case 3:

        itr = s.find(value);
        (itr == s.end())?cout<<"No"<<endl:cout<<"Yes"<<endl;
        break;
    }

    }

    
    return 0;
}



