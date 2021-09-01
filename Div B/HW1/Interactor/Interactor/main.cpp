#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int r, i, c;
    cin >> r >> i >> c;
    if (i == 0)
    {
        if (r != 0)
            cout << 3;
        else
            cout << c;
        return 0;
    }
    else if (i == 1)
    {
        cout << c;
        return 0;
    }
    else if (i == 4)
    {
        if (r != 0)
            cout << 3;
        else
            cout << 4;
        return 0;
    }
    else if (i == 6)
    {
        cout << 0;
        return 0;
    }
    else if (i == 7)
    {
        cout << 1;
        return 0;
    }
    else
        cout << i;
    return 0;
}
