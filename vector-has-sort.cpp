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
    int numbers[] = {0, 5, 2, 3, 1, 1};
    vector<int> v(numbers, numbers + 6);
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
