#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int v, x, y, z;
    cin >> v >> x >> y >> z;
    cout << min({v, x, y, z}) << endl;
    cout << max({v, x, y, z}) << endl;
    return 0;
}