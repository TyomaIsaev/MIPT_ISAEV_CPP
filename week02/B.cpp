#include <iostream>

using namespace std;

int main() {
    int num;
    int count = 0;
    
    cin >> num;
    while (num != 0) {
        if (num % 2 == 0) {
            count++;
        }
        cin >> num;
    }
    
    cout << count << endl;
    
    return 0;
}