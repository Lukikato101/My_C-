#include <iostream>
using namespace std;

int main() {
    int motor_speed = 100;
    int speed_increment = 20;
    int increase_speed = motor_speed + speed_increment;
    int decrease_speed = motor_speed - speed_increment;
    int double_speed = motor_speed *2;
    int half_speed = motor_speed / 2;
    int remainder_speed = motor_speed % 30;

    //output
    cout << "Motor speed: " << motor_speed << endl;
    cout << "Increased speed: " << increase_speed << endl;  
    cout << "Decreased speed: " << decrease_speed << endl;
    cout << "Double speed: " << double_speed << endl;
    cout << "Half speed: " << half_speed << endl;
    cout << "Remainder speed: " << remainder_speed << endl;
    return 0;
}
