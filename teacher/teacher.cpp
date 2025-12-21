#include <iostream>
using namespace std;

class teacher
{
private:
    string name;
    int age;
    string sex;
    string id;
    string password;
public:
    teacher(string name, int age, string sex, string id, string password)
    {
        this->name = name;
        this->age = age;
        this->sex = sex;
        this->id = id;
        this->password = password;
    }
};