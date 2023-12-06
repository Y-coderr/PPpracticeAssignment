#include <iostream>
#include <vector>

using namespace std;

class PersonalInformationSystem {
public:
  vector<Person> database;

  void addPerson(Person person) {
    database.push_back(person);
  }

  void displayDatabase() {
    for (auto person : database) {
      person.display();
    }
  }

  Person* searchPerson(string name) {
    for (auto person : database) {
      if (person.name == name) {
        return &person;
      }
    }
    return nullptr;
  }

  void updatePerson(Person* person, string name, string dateOfBirth, string bloodGroup, float height, float weight, string insurancePolicyNumber, string contactAddress, string telephoneNumber, string drivingLicenseNumber, float drivingLicenseCost) {
    if (person == nullptr) {
      cout << "Person not found." << endl;
      return;
    }

    person->name = name;
    person->dateOfBirth = dateOfBirth;
    person->bloodGroup = bloodGroup;
    person->height = height;
    person->weight = weight;
    person->insurancePolicyNumber = insurancePolicyNumber;
    person->contactAddress = contactAddress;
    person->telephoneNumber = telephoneNumber;
    person->drivingLicenseNumber = drivingLicenseNumber;
    person->drivingLicenseCost = drivingLicenseCost;
  }

  void deletePerson(Person* person) {
    if (person == nullptr) {
      cout << "Person not found." << endl;
      return;
    }

    database.erase(remove(database.begin(), database.end(), *person), database.end());
  }
};

class Person {
public:
  string name;
  string dateOfBirth;
  string bloodGroup;
  float height;
  float weight;
  string insurancePolicyNumber;
  string contactAddress;
  string telephoneNumber;
  string drivingLicenseNumber;
  float drivingLicenseCost;

  Person(string name, string dateOfBirth, string bloodGroup, float height, float weight, string insurancePolicyNumber, string contactAddress, string telephoneNumber, string drivingLicenseNumber, float drivingLicenseCost) {
    this->name = name;
    this->dateOfBirth = dateOfBirth;
    this->bloodGroup = bloodGroup;
    this->height = height;
    this->weight = weight;
    this->insurancePolicyNumber = insurancePolicyNumber;
    this->contactAddress = contactAddress;
    this->telephoneNumber = telephoneNumber;
    this->drivingLicenseNumber = drivingLicenseNumber;
    this->drivingLicenseCost = drivingLicenseCost;
  }

  void display() {
    cout << "Name: " << name << endl;
    cout << "Date of birth: " << dateOfBirth << endl;
    cout << "Blood group: " << bloodGroup << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
    cout << "Insurance policy number: " << insurancePolicyNumber << endl;
    cout << "Contact address: " << contactAddress << endl;
    cout << "Telephone number: " << telephoneNumber << endl;
    cout << "Driving license number: " << drivingLicenseNumber << endl;
    cout << "Driving license cost: " << drivingLicenseCost << endl;
  }
};

int main() {
  PersonalInformationSystem system;

  // Add persons to the database
  system.addPerson(Person("John Doe", "1980-01-01", "A+", 175.0f, 70.0f, "1234567890", "123 Main Street", "123-456-7890", "1234567890", 50.0f));
  system.addPerson(Person("Jane Doe", "1981-02-02", "B+", 165.0f, 60.0f, "9876543210", "456 Elm Street", "987-654-3210", "9876543210", 40.0f));

  // Display the database
  system.displayDatabase();

  // Search for a person
  Person* person = system.searchPerson("John
