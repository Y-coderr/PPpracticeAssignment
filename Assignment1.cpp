#include <iostream>
#include <vector>

using namespace std;

class WeatherReport {
private:
  int day_of_month;
  int high_temp;
  int low_temp;
  float amount_rain;
  float amount_snow;

public:
  WeatherReport() {
    day_of_month = 99;
    high_temp = 999;
    low_temp = -999;
    amount_rain = 0.0f;
    amount_snow = 0.0f;
  }

  void PromptUser() {
    cout << "Enter day of month: ";
    cin >> day_of_month;

    cout << "Enter high temperature: ";
    cin >> high_temp;

    cout << "Enter low temperature: ";
    cin >> low_temp;

    cout << "Enter amount of rain: ";
    cin >> amount_rain;

    cout << "Enter amount of snow: ";
    cin >> amount_snow;
  }

  void DisplayReport() {
    cout << "Day of month: " << day_of_month << endl;
    cout << "High temperature: " << high_temp << endl;
    cout << "Low temperature: " << low_temp << endl;
    cout << "Amount of rain: " << amount_rain << endl;
    cout << "Amount of snow: " << amount_snow << endl;
  }
};

int main() {
  vector<WeatherReport> monthly_report;

  int choice;
  do {
    cout << "Menu:" << endl;
    cout << "1. Enter data" << endl;
    cout << "2. Display report" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        WeatherReport report;
        report.PromptUser();
        monthly_report.push_back(report);
        break;
      case 2:
        for (int i = 0; i < monthly_report.size(); i++) {
          monthly_report[i].DisplayReport();
          cout << endl;
        }
        break;
      case 3:
        exit(0);
        break;
      default:
        cout << "Invalid choice." << endl;
    }
  } while (choice != 3);

  return 0;
}
