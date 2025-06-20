#include <iostream>
#include <cstring>
class Person
{

    int age;

public:
    char name[50];
    void print()
    {
        std::cout << name << " ";
        std::cout << age << std::endl;
    }
    void set_age(int age)
    {
        this->age = age;
    }
    int get_age()
    {
        return age;
    }
    friend void change_age(Person &person);
};
void change_name(Person &person)
{
    person.name[0] = 'R';
    std::cout << "hii" << std::endl;
}
void change_age(Person &person)
{
    person.age = 38;
    std::cout << person.age << std::endl;
}
int main()
{
    Person person;
    strcpy(person.name, "Sita");
    person.set_age(32);
    change_name(person);
    // error: ‘int Person::age’ is private within this context
    // change_age needs to be method or friend function
    // inorder to access its private members
    change_age(person);
    person.print();
    return 0;
}