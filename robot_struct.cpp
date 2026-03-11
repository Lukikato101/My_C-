#include <iostream>
using namespace std;

int main()
{
    /* code */
    return 0;
}

struct RobotSpec {
    string model;
    int max_speed;
    double weight;
};

void print_robot_spec(const RobotSpec& spec) {
    cout << "Model: " << spec.model << endl;
    cout << "Max Speed: " << spec.max_speed << "m/s" << endl;
    cout << "Weight:" << spec.weight << "kg" << endl;

}

int main() {
    RobotSpec robot {"Mobile Robot", 5, 10.5};
    print_robot_spec(robot);
    return 0;
}

