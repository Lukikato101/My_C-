#include <iostream>
using namespace std;

int main() {
    int distance = 0;
    int target_distance = 100;
    int step_size = 10;

    while (distance < target_distance) {
        distance += step_size;
        cout << "Robot Moved: " << distance << " meters" << endl;
    }

    cout << "Roboot moved to the target distance" << endl;

    int countdown = 5;
    while(countdown > 0) {
        cout << "countdown: " << countdown << endl;
        countdown--;
    }

    return 0;
}