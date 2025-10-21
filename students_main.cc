#include "Student.hh"
#include <string>
#include <vector>

std::vector<Student> full_name_search(std::vector<Student> students, std::string full_name);
std::vector<Student> first_last_search(std::vector<Student> students, std::string name);

int main(void) {
    Student a(1, "alpha", "beta", 9);
    Student b(2, "alpha", "gamma", 10);
    Student c(3, "delta", "beta", 12);
    Student d(4, "epsilon", "zeta", 3);
    Student e(5, "epsilon", "gamma", 1);
    Student f(6, "iota", "eta", 7);
    Student g(7, "epsilon", "gamma", 14);
    Student h(8, "delta", "alpha", 11);

    std::vector<Student> students = {a, b, c, d, e, f, g, h};

    std::vector<Student> res = full_name_search(students, "epsilon gamma");
    for (Student s : res) s.print_student();

    res = first_last_search(students, "alpha");
    for (Student s : res) s.print_student();

    return 0;
}

std::vector<Student> full_name_search(std::vector<Student> students, std::string full_name)
{
    std::vector<Student> out = {};
    for (Student person : students)
    {
        if (person.getFullName() == full_name) {
            out.push_back(person);
        }
    }

    return out;
}

std::vector<Student> first_last_search(std::vector<Student> students, std::string name)
{
    std::vector<Student> out = {};
    for (Student person : students)
    {
        if (person.getFirstName() == name || person.getLastName() == name) {
            out.push_back(person);
        }
    }

    return out;
}
