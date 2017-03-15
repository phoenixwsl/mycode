/*
shared_ptr is an Object, not Ptr
 */
#include <iostream>
#include <tr1/memory>

using namespace std;
class Foo {
public:
    Foo(int x) {
        _x = x;
    }
    void print() {
        cout << "x is " << _x <<endl;
    }
private:
    int _x;
};

typedef tr1::shared_ptr<Foo> FooPtr;
void bar(FooPtr& f) { // if without &, f in the bar is local
    f.reset(new Foo(2));
}
int main()
{ 
    FooPtr foo1(new Foo(1));
    foo1->print();
    bar(foo1);
    foo1->print();
    return 0;
} 
