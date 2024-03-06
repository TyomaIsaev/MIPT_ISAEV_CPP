#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    double tester = 0.000001;
    
    cin >> a >> b >> c;
    double discriminant = sqrt(b*b - 4*a*c);
    
    if (a != 0)
    {
        if (discriminant > tester){
            cout << ((-1)*b - discriminant)/(2*a) << ' ' << ((-1)*b + discriminant)/(2*a) << endl;
        } else if ((discriminant >= (-1)*tester) && (discriminant <= tester)){
            cout << (-1)*b/(2*a);
        } else {
            cout << endl;
        }
    } else if (b != 0) 
    {
        if (c != 0){    
            cout << (-1)*double(c)/double(b);
        } else {
            cout << 0 << endl;
        }
    } else {
        cout << endl;
    }
    return 0;
}