#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, i, j;
    cin >> n >> i >> j;
    if (j > i){
        if (j - i < n / 2)
            cout << j - i - 1;
        else
            cout << n - (j - i) - 1;
    }
    else
        if (i - j < n / 2)
            cout << i - j - 1;
        else
            cout << n - (i - j) - 1;
    return 0;
}
