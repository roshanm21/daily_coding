#include <iostream>

using namespace std;

int main()
{

    int n;
    if (!(cin >> n))
        return 0;

    int solved_count = 0;

    for (int i = 0; i < n; i++)
    {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        // If at least 2 are sure about the solution
        if (petya + vasya + tonya >= 2)
        {
            solved_count++;
        }
    }

    cout << solved_count << "\n";

    return 0;
}