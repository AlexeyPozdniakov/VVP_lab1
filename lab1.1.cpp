#include <iostream>
using namespace std;
int main() {
    int a, b, s, p;
    cout << "Input length of rectangle's sides" << endl;
    cin >> a >> b;
    s = a * b;
    p = (a + b) * 2;
    cout << "S=" << s << ", P=" << p;
}