#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int times;
    vector<string> namelist = {};
    cin>>times;
    for(int j=0; j<times; j++){
        string word;
        cin>>word; 
        namelist.push_back(word);
    };
    for(string letter : namelist){
        if (letter.size()>10){
            cout << letter[0] << (letter.size() - 2) << letter[letter.size()-1] << endl;
        }else{
            cout<<letter<<endl;
        }
            
    }
    

    return 0;
}