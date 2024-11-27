// haha :P
// borrowed stuff from here:
// https://www.geeksforgeeks.org/how-to-change-console-color-in-cpp/

#include <iostream>
#include <array>
#include <stdlib.h>
#include <chrono>
#include <thread>


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
  cout << "\t[1] Normal colors" << endl;
  cout << "\t[2] Bright colors" << endl;
  cout << "\t[3] Egg" << endl;
  cin >> choice;
  switch (choice) {
    case 1:
      break; // normal rainbow
    case 2:
      for (int i = 0; i < 6; i++) {
        colors[i] = colors[i] + 60;
      }
      // brighter colors!!
      break;
    case 3: // egg
      for (int i = 0; i < 50; i++) {
        for (int j = 0; j < i; j++) {
          cout << endl;
        }
        cout << "0" << endl;
        system("cls");
      }
      for (int j = 0; j < 50; j++) {
        cout << endl;
      }
      cout << "\\ /" << endl;
      system("cls");
      for (int j = 0; j < 50; j++) {
        cout << endl;
      }
      this_thread::sleep_for(500ms);
      cout << "____" << endl;
      return 0;
    
    default:
      cout << "ебанутый?" << endl;
      return 0;
  }

  // runs only if options 1 or 2 were chosen
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
