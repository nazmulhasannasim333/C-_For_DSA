#include <iostream>
using namespace std;

int main()
{
    int x;
    char c;
    double d;
    cin >> x >> c >> d;
    int ascii = c;
    cout << "Number: " << x << endl
         << "Character: " << c << endl
         << "Double: " << d << endl;
    std::cout << "ASCII value of '" << c << "': " << ascii << endl;
    std::cout << (int)c << endl;
    std::cout << (char)ascii << endl;
    return 0;
}