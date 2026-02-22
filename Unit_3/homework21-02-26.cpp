#include <iostream>
#include <string>

using namespace std;
class Student
{
private: // private data members that cannot be accessed directly from outside the class
    string major;
    string university;
    string studentID;
    string email;
    string phoneNumber;
    string address;
    string marks;
    string dateOfBirth;
    string gender;
    int age;
    int sgpa;

public: // public data members that can be accessed directly from outside the class
    string profilewebsite;
    string name;
    string hobbies;
    string passingStatus;

    Student() // default constructor that initializes the data members with default values
    {
    }

    Student(string name, int age, string major) // parameterized constructor that initializes the data members with the given values
    {
        this->name = name;
        this->age = age;
        this->major = major;
    }

    int getSgpa() // getter function to get the value of sgpa
    {
        return sgpa;
    }

    // from here update or add values of other data members using setter functions
    void setSgpa(int sgpa)
    {
        this->sgpa = sgpa; // this pointer is used to refer to the current object and differentiate between the parameter and the data member with the same name
    }
    void updateSgpa(Student &s)
    {
        s.setSgpa(10); // updating the sgpa of the student object passed as a parameter to 10
    }
    void updateProfile(string newProfile)
    {
        profilewebsite = newProfile;
    }
    void updateHobbies(string newHobbies)
    {
        hobbies = newHobbies;
    }
    void updatePassingStatus(string newStatus)
    {
        passingStatus = newStatus;
    }
    void updateAddress(string newAddress)
    {
        address = newAddress;
    }
    void updateMarks(string newMarks)
    {
        marks = newMarks;
    }
    void updateDateOfBirth(string newDOB)
    {
        dateOfBirth = newDOB;
    }
    void updateGender(string newGender)
    {
        gender = newGender;
    }
    void updateUniversity(string newUniversity)
    {
        university = newUniversity;
    }
    void updateStudentID(string newStudentID)
    {
        studentID = newStudentID;
    }
    void updateEmail(string newEmail)
    {
        email = newEmail;
    }
    void updatePhoneNumber(string newPhoneNumber)
    {
        phoneNumber = newPhoneNumber;
    }
    void updateMajor(string newMajor)
    {
        major = newMajor;
    }
    void updateAge(int newAge)
    {
        age = newAge;
    }
    void updateName(string newName)
    {
        name = newName;
    }

    void display(Student s)
    {
        cout << "Name: " << s.name << endl;
        cout << "Age: " << s.age << endl;
        cout << "Major: " << s.major << endl;
        cout << "SGPA: " << s.sgpa << endl;
        cout << "University: " << s.university << endl;
        cout << "Student ID: " << s.studentID << endl;
        cout << "Email: " << s.email << endl;
        cout << "Phone Number: " << s.phoneNumber << endl;
        cout << "Address: " << s.address << endl;
        cout << "Marks: " << s.marks << endl;
        cout << "Date of Birth: " << s.dateOfBirth << endl;
        cout << "Gender: " << s.gender << endl;
        cout << "Profile Website: " << s.profilewebsite << endl;
        cout << "Hobbies: " << s.hobbies << endl;
        cout << "Passing Status: " << s.passingStatus << endl;
    }
};

int main()
{
    Student s1("Sachin", 20, "Electronics Engineering");
    s1.setSgpa(9);
    s1.updateUniversity("BEU UNIVERSITY");
    s1.updateStudentID("EC2021001");
    s1.updateEmail("sachinpatel@gmail.com");
    s1.updatePhoneNumber("+91 9661988586");
    s1.updateAddress("Chappra, Bihar, India");
    s1.updateMarks("A+");
    s1.updateDateOfBirth("02/01/2006");
    s1.updateGender("Male");
    s1.updateProfile("www.mocosn.in");
    s1.updateHobbies("Listening music, Playing Games, Travelling");
    s1.updatePassingStatus("Passed");

    cout << endl
         << endl
         << "Initial Student Information:" << endl
         << endl
         << endl
         << endl;

    s1.display(s1);

    cout << endl
         << endl
         << "Updating SGPA..." << endl
         << endl
         << endl
         << endl;
    s1.updateSgpa(s1); // updating the sgpa of s1 using the updateSgpa function
    s1.display(s1);
    return 0;
}