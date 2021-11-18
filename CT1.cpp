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