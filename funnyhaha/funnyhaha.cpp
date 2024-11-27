// haha :P
// borrowed stuff from here:
// https://www.geeksforgeeks.org/how-to-change-console-color-in-cpp/

#include <iostream>
#include <array>

using namespace std;

// Function to set the console text color using ANSI escape codes
void SetColor(int textColor) { cout << "\033[" << textColor << "m"; }

// Function to reset the console color
void ResetColor() { cout << "\033[0m"; }


int main()
{
  int colors[6] = {31, 33, 32, 36, 34, 35}; 
        // red yellow green cyan blue magenta
  int choice = 0;
  cout << "Choose an option:" << endl;
  cout << "\t[1] Normal" << endl;
  cout << "\t[2] Bright" << endl;
  cin >> choice;
  switch (choice) {
    case 1:
      break;
    case 2:
      for (int i = 0; i < 6; i++) {
        colors[i] = colors[i] + 60;
      }
      // brighter colors!!
      break;
    default:
      cout << "ебанутый?" << endl;
      return 0;
  }
  for (;;) {
    for (int i : colors) {
      SetColor(i);
      for (int k = 0; k < 3; k++) {
        for (int i = 0; i < 120; i++) {
          cout << (unsigned char)177;
        }
        cout << endl;
      }
    }
  }
  return 0;
}
