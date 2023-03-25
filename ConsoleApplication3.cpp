#include <iostream>
using namespace std;

class Person
{
    std::string name;
    int age;
};

int main()
{
    Person p{"Alex",18};
    nlohmann::json j{};
    j["name"] = p.name;
    j["age"] = p.age;
}

