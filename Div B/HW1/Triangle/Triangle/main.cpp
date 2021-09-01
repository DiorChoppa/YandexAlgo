#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int d, x, y, s1, s2, s3;
    cin >> d >> x >> y;
    s1 = (0 - x) * (0 - 0) - (d - 0) * (0 - y);
    s2 = (d - x) * (d - 0) - (0 - d) * (0 - y);
    s3 = (0 - x) * (0 - d) - (0 - 0) * (d - y);
    
    if ((s1 >= 0 && s2 >= 0 && s3 >= 0) || (s1 <= 0 && s2 <= 0 && s3 <= 0))
    {
        cout << 0;
        return 0;
    }
    else{
        if ((x > 0 && y > 0) && x == y)
            cout << 2;
        else if((x > 0 && y > 0) && x > y)
            cout << 2;
        else if((x > 0 && y > 0) && x < y)
            cout << 3;
        else if((x < 0 && y < 0) && x > y)
            cout << 2;
        else if((x < 0 && y < 0) && x < y)
            cout << 3;
        else if((x == d/2) || (y == d/2))
            cout << 1;
        else if((x < 0 && y < 0) && x == y)
            cout << 1;
        else if(x > 0 && y < 0)
            cout << 2;
        else if(x < 0 && y > 0)
            cout << 3;
        else
            cout << 1;
        return 0;
    }
}
