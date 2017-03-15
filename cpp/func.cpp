#include <iostream>
#include <tr1/functional>
using namespace std;

class Foo {
public:
    void setCallBack(const std::tr1::function<bool ()>& func) {
        func();
    }
};

class Base {
public:
    virtual bool func() = 0;
    // void incall(std::tr1::function<bool ()>& func1) {
    //     func1();
    // }
    // void call() {
    //     incall(std::tr1::bind(&func, this));
    // }
    void callBack() {
        Foo foo;
        foo.setCallBack(tr1::bind(&Base::func, this));
    }
};

class Derived : public Base {
public:
    virtual bool func() {
        cout << "in Derived" << endl;
    }
};


int main() {
    Base * base = new Derived();
    base->callBack();
    return 0;
}
