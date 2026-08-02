#include <vector>
#include <iostream>
using namespace std;

int linersearch_lbstl() //This function contains the code with O(N) time complexity
{
    int len{1};
    cin >> len;
    vector<int> list = {};
    for (int i{}; i < len; i++)
    {
        int num{};
        cin >> num;
        list.push_back(num);
    }
    int q{1};
    cin >> q;
    bool ans = true;
    for (int j{}; j < q; j++)
    {
        int val{1};
        cin >> val;
        int l{0};
        int noval{0};
        for (; val >= list[l]; l++)
        {
            if (val == list[l])
            {
                ans = true;
            }
            else
            {
                ans = false;
                noval++;
            }
            if (ans)
            {
                break;
            }
        }
        if (ans)
        {
            cout << "Yes " << (l + 1) << endl;
        }
        else
        {
            cout << "No " << noval + 1 << endl;
        }
    }

    return 0;
}
int main(){
    int n{};
    cout<<"No. of items : ";
    cin>>n;
    vector<int> list = {};
    for(int count{};count<=n;count++){
        int num{};
        cin>>num;
        list.push_back(num);
    }
    int mid = n/2;


    return 0;
}