#include<iostream>
#include<set>
using namespace std;
int main()
{ 
    set<string> s;
    s.insert("1");
    s.insert("2");
    if (s.find("21") != s.end()) {
        cout << "hit" << endl;
    } else {
        cout << "not hit" << endl;
    }
	return 0;
} 
