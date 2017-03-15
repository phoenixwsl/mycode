#include<iostream>
#include<map>
using namespace std;
int main()
{ 
    map<int, pair<int, int> > m;
    m[1] = make_pair(1,2);
    m[2] = make_pair(3,4);

    map<int, pair<int, int> >::iterator it = m.begin();
    for (; it != m.end(); ++it) {
        cout << "first is " <<it->second.first << endl;
        cout << "second is " <<it->second.second<< endl;
    }
	return 0;
} 
