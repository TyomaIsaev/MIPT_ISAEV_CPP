#include <iostream>
#include <string>

using namespace std;

string swap_to_base(long long int number, int base) {
    if (number == 0) {
        return "0";
    }
    
    string res;
    
    while (number > 0) {
        int digit = number % base;
        res = to_string(digit) + res;
        number /= base;
    }
    
    return res;
}

int main() {
    long long int number;
    int base;
    cin >> number >> base;
    cout << swap_to_base(number, base) << endl;
    return 0;
}