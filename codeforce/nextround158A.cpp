#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ap{};
    int p{};
    cin>>ap>>p;
    vector<int> nsort = {};
    for(int j{0} ;j<ap;j++){
        int num{0};
        cin>>num;
        nsort.push_back(num);
    }

    if(nsort[p+1] >= nsort[p+2] && nsort[p+1]*nsort[p+2] != 0){
        if(nsort[p] == nsort[ap-1]){
            cout << ap + 1;
        }
        else
        {
            cout<<(p+1);
        }
    }else{
        cout<<0;
    }
}
