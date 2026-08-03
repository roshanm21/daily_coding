#include <sstream>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    class Student
    {
    private:
        int age;
        string firstname;
        string lastname;
        int standard;

    public:
        int get_age()
        {
            return age;
        };
        string get_first_name()
        {
            return firstname;
        };
        string get_last_name()
        {
            return lastname;
        };
        int get_standard()
        {
            return standard;
        };
        void set_age(int a)
        {
            age = a;
        };
        void set_first_name(string fn)
        {
            firstname = fn;
        };
        void set_last_name(string ln)
        {
            lastname = ln;
        };
        void set_standard(int std)
        {
            standard = std;
        };
        string to_string()
        {
            stringstream ss;
            ss << age << "," << firstname << "," << lastname << "," << standard;
            return ss.str();
        }
    };
}
