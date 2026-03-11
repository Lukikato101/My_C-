#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> distances = {5, 10, 3, 7, 9};
    for (int distance :distances) {
        cout << distance << "";
    }

    cout < endl;

    for_each(distance.begin(), distance.end(), [](int d) {
        d+=1;
    })

    cout << "Distance after incrementing: ";
    for (int distance : distances) {
        cout << distance << " ";
    }

    cout << endl;

    return 0;
}
