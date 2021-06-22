#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class student
{
    public:
        string name;
        int age;


        bool operator < (student &person)
        {
            return this->age < person.age;
        }

};



int main()
{
    
    student students[5];

    students[0].age=45;
    students[1].age=12;
    students[2].age=24;
    students[3].age=53;
    students[4].age=12;

    students[0].name="a";
    students[1].name="b";
    students[2].name="c";
    students[3].name="d";
    students[4].name="e";

    sort(students,students+5);

    for (int i = 0; i < 5; i++)
    {
        cout<<students[i].name<<" "<<students[i].age<<"\n"; 
    }
    
    
}

