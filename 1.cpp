#include <iostream>
#include <fstream>
#include <string>
#include <limits>

//g++ -std=c++2a 1.cpp
//status: correct -> 1754
using namespace std;
int main() {
    ifstream input_file("./1.input");
    if (!input_file){
        cout << "Problem reading file" << endl;
        return 1;
    }

    int total_increases = 0;
    int previous_value = numeric_limits<int>::max();
    while(!input_file.eof()){
        string line;
        if (!getline(input_file, line)) break;
        int current_value = stoi(line);
        if (current_value > previous_value){
            total_increases++;
        }
        previous_value = current_value;
    }

    cout << "Total increases: " << total_increases << endl;
}