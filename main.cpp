// Distance Traveled, Instructor's Solution
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int speed; // Vehicle Speed, input
  int hours; // Number of hours traveled, input

  // Input speed with validation
  cout << "Enter the vehicle speed: ";
  cin >> speed;
  while (!cin || speed < 10 || speed > 120) {
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Speed must be from 10 to 120, try again.\n";
    cout << "Enter the vehicle speed: ";
    cin >> speed;
  }
  cin.ignore(1000, '\n');

  // Input hours traveled with validation
  cout << "\nEnter hours traveled: ";
  cin >> hours;
  while (!cin || hours < 1 || hours > 24) {
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Hours must be from 1 to 24, try again.\n";
    cout << "Enter hours traveled: ";
    cin >> hours;
  }
  cin.ignore(1000, '\n');

  // Produce the table.
  cout << endl;
  cout << "Hour  Distance\n";
  cout << "----  --------\n";
  for (int h = 0; h < hours; h++)
    cout << setw(3) << h + 1 << setw(9) << (h + 1) * speed << endl;
}
