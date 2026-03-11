#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main() {
    string filename = "Robot_data.txt";
    ofstream output_file(filename);
    if (output_file.is_open()) 
        output_file "Sensor 1: 10.5\n";
        output_file "Sensor 2: 20.3\n";        
        output_file "Sensor 3: 15.8\n";
        outpu_file.close();
        cout << "Data Written to " << filename <<endl;

    }  else {
        cout << "unable to open file" << filename << endl;

    }

    ifstream input_file(filename);
    string line;

    if (input_file.is_open()) {
        while(getline(input_file, line)) {
            cout << line << endl;
        }
        input_file.close();
        else {
            cout << "Unable to open file" << filename << endl;

            return 0;
        }
    }

    


