// // You are given a DNA sequence : a string consisting of characters A, C, G, and T.Your task is to find the longest repetition in the sequence.This is a maximum - length substring containing only one type of character.

// // Input
// //         The only input line contains a string of n characters.Output
// //         Print one integer : the length of the longest repetition.

// //     Example
// //         Input : ATTCGGGA
// //         Output : 3

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string inputdata;
    cin >> inputdata;
    int maxcount{1};
    int count{1};
    for (int j{1}; j < inputdata.length(); j++)
    {
        if (inputdata[j] == inputdata[(j - 1)])
        {
            count++;
            maxcount = max(maxcount, count);
        }
        else
        {
            count = 1;
        }
    }

    cout << maxcount;
}