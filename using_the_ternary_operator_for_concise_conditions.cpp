#include <iostream>
using namespace std;

int main() {
    int battery_level = 75;
    int battery_treshold = 50;

    string battery_status = (battery_level > battery_treshold) ? "sufficient" : "low";
    cout << "Battery Status: " << battery_status << endl;

    int distance_to_obstacle = 30;
    int safety_distance = 20;

    string obstacle_status = (distance_to_obstacle < safety_distance) ? "Stop" : "Countinue";
    cout << Action: " << obstacle_status << endl;


    return 0;
}