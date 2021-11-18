//1. Say "Hello, World!" With C++

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    cout << "Hello, World!";
    return 0;
}

//2. Input and Output

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b + c;
    return 0;
}

//3. Basic Data Types

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i;
    long l;
    char c;
    float f;
    double d;
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf", i, l, c, f, d);
    return 0;
}

//4. For Loop

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        switch (i)
        {
        case 1:
            cout << "one\n";
            break;
        case 2:
            cout << "two\n";
            break;
        case 3:
            cout << "three\n";
            break;
        case 4:
            cout << "four\n";
            break;
        case 5:
            cout << "five\n";
            break;
        case 6:
            cout << "six\n";
            break;
        case 7:
            cout << "seven\n";
            break;
        case 8:
            cout << "eight\n";
            break;
        case 9:
            cout << "nine\n";
            break;
        default:
            i % 2 == 0 ? cout << "even\n" : cout << "odd\n";
            break;
        }
    }
    return 0;
}

//5. Arrays Introduction

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int Ar[n];
    for (int i = 0; i < n; i++)
        cin >> Ar[i];
    for (int i = n - 1; i >= 0; i--)
        cout << Ar[i] << '\t';
    return 0;
}

//6. Class

#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;

class Student
{
private:
    int age, standard;
    string first_name, last_name;

public:
    void set_age(int a) { age = a; }
    void set_standard(int s) { standard = s; }
    void set_first_name(string fn) { first_name = fn; }
    void set_last_name(string ln) { last_name = ln; }
    int get_age() { return age; }
    int get_standard() { return standard; }
    string get_first_name() { return first_name; }
    string get_last_name() { return last_name; }
    string to_string()
    {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

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

//7. Classes and Objects

class Student
{
private:
    int scores[5];

public:
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> scores[i];
        }
    }
    int calculateTotalScore()
    {
        int count = 0;
        for (int i = 0; i < 5; i++)
        {
            count += scores[i];
        }
        return count;
    }
};
