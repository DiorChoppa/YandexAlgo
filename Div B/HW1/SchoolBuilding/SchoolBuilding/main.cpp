#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, i = 0;
    cin >> n;
    vector<int> a;
    a.resize(n);
    while (i < n)
    {
        cin >> a[i];
        i++;
    }
    cout << a[n / 2];
    return 0;
}
