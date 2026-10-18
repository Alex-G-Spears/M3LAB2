#include <iostream>
using namespace std;

int main() {
    
    //Variables
    int score;
    
    // In/out
    cout << "What is your percent score?" << endl;
    cin >> score;

    // Letter grade Calculation
    if (score >= 90) {
        cout << "You have an A" << endl;
    }
    else if (score >= 80) {
        cout << "You have a B" << endl;
    }
    else if (score >= 70) {
        cout << "You have a C" << endl;
    }
        else if (score >= 60) {
        cout << "You have a D" << endl;
    }
        else if (score >= 0) {
        cout << "You have a F" << endl;
    }
}