#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    bool checker = true;
    cin >> a;

    int len = a.length();

    for (int i = 0; i < len/2; i++)
    {
        if (a[i] != a[len-i-1]){
            checker = false;
        }
    }
    
    if (checker)
    {
        cout << 1 << endl;
    } else 
    {
        cout << 0 << endl;
    }

    return 0;    
}