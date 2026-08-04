// #include <bits/stdc++.h> (available in hackerrank)
using namespace std;
// Implement the class Box
// l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

// Overload operator < as specified
// bool operator<(Box& b)

// Overload operator << as specified
// ostream& operator<<(ostream& out, Box& B)



//--------Mycode--------->
#include <iostream>
class Box {
    private:
    int l{};
    int b{};
    int h{};
    
    public:
    int getLength(){
        return l;
    };
    int getBreadth() {
        return b;
    };
    int getHeight() {
        return h;
    };
    long long CalculateVolume(){
        return (long long) l*b*h;
    };

    Box(int vall,int valb,int valh){
        vall = l;
        valb = b;
        valh = h;
    };
    Box() : l(0), b(0), h(0) {} // Member initializer list constructor used here


    friend ostream& operator<<(ostream& out , const Box& B){
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
    bool operator<(const Box& B){
        return (l < B.l) || (b < B.b && l == B.l) || (h < B.h && l == B.l && b == B.b) || false; // return false when equal (gives direct true false and is better than writing big if else nested)
    };
};

//--------Mycode--------->




// Hackerrank hidden code//
void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}
// Hackerrank hidden code//