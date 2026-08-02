#include <iostream>
using namespace std;

int main()
{
    string word;
    cin>>word;
    if(word.length()>10){
        cout << word[0] << word.length() - 2<< word.back();
    }else{
        bool istrue = false;
        for (int i = 0;i<word.length();i++){
            if (iswalpha(word[i]))
            {
                istrue = true;
            }
        }
            if(istrue){
                cout << word;
            }
    }
    return 0;
}