//1. Vector-Sort

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;


int main() {
    int i, n;
    int size;
    string line;
    vector<int> v;

    cin >> size;
    
    for(i = 0; i < size; i++) {
        cin >> n;
        v.push_back(n);
    }
    
    sort(v.begin(), v.end());

    for (i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }

     return 0;
}

//2. Pretty Print

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        
        printf("%#lx\n",(long int)A);
        printf("%.*s%+.2f\n",15 - to_string((int)B).length() - 4,"_______________",B);
        printf("%.9E\n",C);

	}
	return 0;

}

//3. Deque-Stl

#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k)
{
    deque<int> Qi(k);
    int i;
    for (i = 0; i < k; i++) 
    {
        while ((!Qi.empty()) && (arr[i] >= arr[Qi.back()]))
            Qi.pop_back();
        Qi.push_back(i);
    }
    for ( ; i < n; i++) {
        cout << arr[Qi.front()] << " ";
        while ((!Qi.empty()) && (Qi.front() <= i - k))
            Qi.pop_front();
        while ((!Qi.empty()) && (arr[i] >= arr[Qi.back()]))
            Qi.pop_back();
        Qi.push_back(i);
    }
    cout << arr[Qi.front()] << endl;
}

int main()
{
  
    int t;
    cin >> t;
    while(t>0) 
    {
        int n,k;
        cin >> n >> k;
        int i;
        int arr[n];
        for(i=0;i<n;i++)
              cin >> arr[i];
        printKMax(arr, n, k);
        t--;
      }
      return 0;
}


//4. Inheritance Introduction

#include <cmath>
#include <cstdio>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Triangle
{
    public:
       void triangle()
    {
           cout<<"I am a triangle\n";
       }
};
class Isosceles : public Triangle
{
    public:
       void isosceles()
    {
          cout<<"I am an isosceles triangle\n";
       }
        //Write your code here.
        void description()
  {
          cout<<"In an isosceles triangle two sides are equal\n";
        }
};
int main()
{
    Isosceles isc;
    isc.isosceles();
    isc.description();
    isc.triangle();
    return 0;
}

//5. Multi Level Inheritance

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
   public:
      void triangle(){
         cout<<"I am a triangle\n";
      }
};

class Isosceles : public Triangle{
     public:
        void isosceles(){
          cout<<"I am an isosceles triangle\n";
        }
};

   
class Equilateral : public Isosceles{
    public:
    void equilateral()
        {
        cout<<"I am an equilateral triangle\n";
    }

};
int main(){
  
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}

//6. Accessing Inherited Functions

#include<iostream>

using namespace std;

class A
{
    public:
        A(){
            callA = 0;
        }
    private:
        int callA;
        void inc(){
            callA++;
        }

    protected:
        void func(int & a)
        {
            a = a * 2;
            inc();
        }
    public:
        int getA(){
            return callA;
        }
};

class B
{
    public:
        B(){
            callB = 0;
        }
    private:
        int callB;
        void inc(){
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a * 3;
            inc();
        }
    public:
        int getB(){
            return callB;
        }
};

class C
{
    public:
        C(){
            callC = 0;
        }
    private:
        int callC;
        void inc(){
            callC++;
        }
    protected:
        void func(int & a)
        {
            a = a * 5;
            inc();
        }
    public:
        int getC(){
            return callC;
        }
};

class D : A, B, C
{

    int val;
    public:
        //Initially val is 1
         D()
         {
             val=1;
         }


         //Implement this function
         void update_val(int new_val)
         {
            while (new_val % 5 == 0) {
                new_val /= 5;
                C::func(val);
            }
            while (new_val % 3 == 0) {
                new_val /= 3;
                B::func(val);
            }
            while (new_val % 2 == 0) {
                new_val /= 2;
                A::func(val);
            }
            
         }
         //For Checking Purpose
         void check(int); 
};


void D::check(int new_val)
{
    update_val(new_val);
    cout << "Value = " << val << endl << "A's func called " << getA() << " times " << endl << "B's func called " << getB() << " times" << endl << "C's func called " << getC() << " times" << endl;
}


int main()
{
    D d;
    int new_val;
    cin >> new_val;
    d.check(new_val);

}
