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

using namespace std;
int main() {
    int numbers[] = {10, 20, 20, 30, 30, 30, 40};
    vector<int> v (numbers, numbers + 7);
    vector<int>::iterator it;
    it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    for (it = v.begin(); it != v.end(); ++it) {
        std::cout << ' ' << * it;
    }
    cout << endl;
    return 0;
}
