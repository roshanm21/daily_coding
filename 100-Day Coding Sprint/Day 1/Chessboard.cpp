#include <iostream>
#include <string>
#include <vector>
using namespace std;

string determineColor(const string &s)
{
    // Write your logic here to determine the color based on the string s.
    // Return "Black" or "White" based on the problem statement.
    vector<char> w1 = {'a', 'c', 'e', 'g'};
    vector<int> n1 = {2, 4, 6, 8};
    vector<char> w2 = {'b', 'd', 'f', 'h'};
    vector<int> n2 = {1, 3, 5, 7};
    char row = s[0];
    int col = s[1] - '0';
    int outr{0};
    int outc{0};

    if (find(w1.begin(), w1.end(), row) != w1.end())
    {
        outc = 1;
    }
    else
    {
        outc = 2;
    }
    if (find(n1.begin(), n1.end(), col) != n1.end())
    {
        outr = 1;
    }
    else
    {
        outr = 2;
    }
    if ((outr == 1 && outc == 1) || (outr == 2 && outc == 2))
    {
        cout << "White";
    }
    else
    {
        cout << "Black";
    }

    return "";
};

int main()
{
    string s;
    cin >> s;
    string result = determineColor(s);
    cout << result << endl;
    return 0;
}