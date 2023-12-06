#include <iostream>
using namespace std;

int main() {
  // String equality
  string str1 = "Hello";
  string str2 = "Hello";
  if (str1 == str2) {
    cout << "The strings are equal." << endl;
  } else {
    cout << "The strings are not equal." << endl;
  }

  // String copy
  string str3 = str1;
  cout << "The copied string is: " << str3 << endl;

  // String concatenation
  string str4 = str1 + str2;
  cout << "The concatenated string is: " << str4 << endl;

  // Displaying a string
  cout << "The string is: " << str1 << endl;

  // Reversing a string
  string reversed_str1;
  for (int i = str1.length() - 1; i >= 0; i--) {
    reversed_str1 += str1[i];
  }
  cout << "The reversed string is: " << reversed_str1 << endl;

  // Function to determine whether a string is a palindrome
  bool is_palindrome(string str) {
    for (int i = 0, j = str.length() - 1; i < j; i++, j--) {
      if (str[i] != str[j]) {
        return false;
      }
    }
    return true;
  }

  // To find occurrence of a sub-string. Use Operator Overloading.
  string str = "Hello, world!";
  string sub_str = "world";

  int count = 0;
  for (int i = 0; i < str.length(); i++) {
    if (str.substr(i, sub_str.length()) == sub_str) {
      count++;
    }
  }

  cout << "The substring occurs " << count << " times in the string." << endl;

  return 0;
}
