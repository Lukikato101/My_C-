#include <iostream>
using namespace std;
 int main() {
    double battery_level = 0.75;
    bool obstaclle_detected = true;

    if (battery_level > 0.5 && !obstacle_detected) {
        cout << "Robot is mowing";
    }
    else if (battery_level < 0.5 && obstacle_detected) {
        cout << "Robot is avoiding obstacle";
    }
    else {
        cout << "Robot is Low battery"
    }
    return 0;
 }