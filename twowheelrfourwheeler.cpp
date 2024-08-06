#include <iostream>
using namespace std;

int main() {
    int totalVehicles = 200;
    int totalWheels = 640;
    
    for (int twoWheeler = 0; twoWheeler <= totalVehicles; ++twoWheeler) {
        int fourWheeler = totalVehicles - twoWheeler;
        if (2 * twoWheeler + 4 * fourWheeler == totalWheels) {
            cout << "Two-wheeler: " << twoWheeler << endl;
            cout << "Four-wheeler: " << fourWheeler << endl;
            break;
        }
    }
    
    return 0;
}
