#include<iostream>
using namespace std;
class A {
public:
    virtual void func() = 0;
};

class B {
public:
    void func() {
        cout << "B" <<endl;
    }
};


class C : public A {
public:
    void func() {
        cout << "C" <<endl;
    }
};
int main()
{ 
    B * b = new B();
    int64_t address1 = (int64_t)&(*b);
    cout << &(*b) <<endl;
//    delete b;
    b = NULL;
    b = new B();
    cout << &(*b) <<endl;
    int64_t address2 = (int64_t)&(*b);
    cout << "1 is " << address1 <<endl;
    cout << "2 is " << address2 <<endl;

    delete b;
    return 0;
} 
