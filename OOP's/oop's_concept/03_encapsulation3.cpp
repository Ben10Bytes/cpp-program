#include<iostream>
using namespace std;

class Student{

private:

    string name;
    int rollNo;

public:

    void setName(string name){

        if(name != ""){

            this->name = name;
        }

        else{

            cout << "Invalid Name" << endl;
        }
    }

    void setRollNo(int rollNo){

        if(rollNo > 0){

            this->rollNo = rollNo;
        }

        else{

            cout << "Roll no must be positive" << endl;
        }
    }

    string getName(){

        return name;
    }

    int getRollNo(){

        return rollNo;
    }
};

int main(){

    Student s1;

    s1.setName("Rahul");
    s1.setRollNo(101);

    cout << "Name: " << s1.getName() << endl;
    cout << "Roll no: " << s1.getRollNo() << endl;

    s1.setName("");
    s1.setRollNo(-5);

    return 0;
}