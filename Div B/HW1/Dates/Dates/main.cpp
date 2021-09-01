#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int x, y, z;
    cin >> x >> y >> z;
    if (x > 12 || y > 12 || x == y)
        cout << 1;
    else
        cout << 0;
    return 0;
}
