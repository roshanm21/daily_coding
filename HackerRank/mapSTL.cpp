#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    
    map<string,int> m;
    int k=0;
    string str;
    int marks{0};
    cin>>k;
    for(int i = 0;i<k;i++){
        int b{0};
        cin>>b;
        if(b ==1){
            cin>>str>>marks;
            map<string,int>::iterator itr = m.find(str);
            if(itr == m.end()){
                m.insert(make_pair(str,marks));
            }else{
                int presentmark = m[str] + marks;
                m.erase(str);
                m.insert(make_pair(str,presentmark));
            };

        }else if(b==2){
            cin>>str;
            m.erase(str);
            
        }else if(b==3){
            cin>>str;
            cout << m[str] << "\n";
            
        }
    }


    return 0;
}


