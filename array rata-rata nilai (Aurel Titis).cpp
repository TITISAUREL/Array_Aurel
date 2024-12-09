#include <iostream>
using namespace std;

int main() {
    double nilai[5] = {70, 90, 85, 75, 95}; 
    double total = 0;

    for (double n : nilai) { 
    total += n;
    }

    cout << "Rata-rata nilai adalah: " << total / 5 << endl; 
    return 0;
}
