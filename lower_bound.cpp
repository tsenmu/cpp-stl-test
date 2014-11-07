#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <list>
#include <algorithm>
#include <ctime>
#define pb push_back
using namespace std;
int main() {
    list<int> l;
    for (int i = 0; i < 100000; ++i) {
        l.pb(i);
    }
    list<int>::iterator it;
    clock_t c_start, c_end;
    c_start = clock();
    it = lower_bound(l.begin(), l.end(), 5000);
    c_end = clock();
    cout << 1000.0 * (c_end - c_start) / CLOCKS_PER_SEC;
    cout << *it << endl;
    vector<int> v;
    for (int i = 0; i < 100000; ++i) {
        v.pb(i);
    }
    vector<int>::iterator itv;
    c_start = clock();
    itv = lower_bound(v.begin(), v.end(), 5000);
    c_end = clock();
    cout << 1000.0 * (c_end - c_start) / CLOCKS_PER_SEC;
    cout << *itv << endl;
    return 0;
}
