#include <iostream>

using namespace std;

int main() {
double *ptr;
ptr = nullptr;
cout << &ptr << " " << ptr << endl;
ptr -= 3;
cout << &ptr << " " << ptr << endl;
ptr += 5;
cout << &ptr << " " << ptr << endl;
}