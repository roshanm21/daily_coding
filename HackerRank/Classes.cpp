#include <sstream>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

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


///Hackerrank hidden code///
    int main()
    {
        int age, standard;
        string first_name, last_name;

        cin >> age >> first_name >> last_name >> standard;

        Student st;
        st.set_age(age);
        st.set_standard(standard);
        st.set_first_name(first_name);
        st.set_last_name(last_name);

        cout << st.get_age() << "\n";
        cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
        cout << st.get_standard() << "\n";
        cout << "\n";
        cout << st.to_string();

        return 0;
    }
/// Hackerrank hidden code///