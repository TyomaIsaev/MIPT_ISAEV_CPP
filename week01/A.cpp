#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    double c;
    std::cin >> a >> b;
    c = sqrt(a*a + b*b);
    std::cout << c;

    return 0;
}