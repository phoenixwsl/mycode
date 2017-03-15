#include<iostream>
#include <typeinfo>
using namespace std;
class A {
};
class B {
};

class C: public A {
};
int main()
{ 
    cout <<"int8_t is " << typeid(int8_t).name()<<endl;
    cout <<"int16_t is " << typeid(int16_t).name()<<endl;
    cout <<"int32_t is " << typeid(int32_t).name()<<endl;
    cout <<"int64_t is " << typeid(int64_t).name()<<endl;
    cout <<"uint8 is " << typeid(uint8_t).name()<<endl;
    cout <<"uint16 is " << typeid(uint16_t).name()<<endl;
    cout <<"uint32 is " << typeid(uint32_t).name()<<endl;
    cout <<"uint64 is " << typeid(uint64_t).name()<<endl;
    cout <<"float is " << typeid(float).name()<<endl;
    cout <<"double is " << typeid(double).name()<<endl;
    cout <<"string is " << typeid(string).name()<<endl;
    cout <<"class A is " << typeid(A).name()<<endl;
    cout <<"class B is " << typeid(B).name()<<endl;
    cout <<"class C is " << typeid(C).name()<<endl;
	return 0;
} 
