#include <iostream>
#include <vector>

using namespace std;

class Gradebook
{
    public:
        Gradebook(string firstName, string lastName, string studID, string assignName, double pointTotals, double pointActuals);
        


    private:
        
        
};

class Student : public Gradebook
{
    public:
        Student(string firstName, string lastName, string studID);

        void setStudent(string firstName, string lastName, string studID)
        {
            this->firstName = firstName;
            this->lastName = lastName;
            this->studID = studID;
        }

        string getFirstName(string firstName)
        {
            return firstName;
        }

        string getLastName(string lastName)
        {
            return lastName;
        }

        string getID(string studID)
        {
            return studID;
        }

    private:
        string firstName;
        string lastName;
        string studID;
};

class Assignment : public Student
{
    public:
        Assignment(string name, double grade, double maxGrade);

        void setAssignment(string name, double grade, double maxGrade)
        {
            this->name = name;
            this->grade = grade;
            this->maxGrade = maxGrade;
        }

        string getName(string name)
        {
            return name;
        }

        double getGrade(double grade)
        {
            return grade;
        }

        double getMaxGrade(double maxGrade)
        {
            return maxGrade;
        }
    

    private:
        string name;
        double grade;
        double maxGrade;
};

void createStudent()
{
    string preName, surName, id;
    cout << "\nPlease enter the first name of the student:";
    cin >> preName;
    cout << "And now for the last name:\n";
    cin >> surName;
    cout << "Please enter the student's ID number:\n";
    cin >> id;

    Gradebook* student = new Student(preName, surName, id);
}

int main()
{
    Gradebook newGrade(string firstName, string lastName, string studID, string assignName, double pointTotals, double pointActuals);

    createStudent();
}