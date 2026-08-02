#include <iostream>
using namespace std;

int main()
{
    string str = "22,-332,43";
    int sign{1};
    int num{};
    for (char i : str)
    {

        if (i == ',')
        {
            int endnum{num * sign};
            cout << endnum << endl;
            num = 0;
            sign = 1;
        }
        else if (i == '-')
        {

            sign = -1;
        }
        else
        {
            num = num * 10 + (i - '0');
        }
    }

    int endnum{num * sign};
    cout << endnum << endl;
}
