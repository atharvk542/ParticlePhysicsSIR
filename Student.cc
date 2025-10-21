#include "Student.hh"
#include <string>
#include <iostream>

Student::Student(int id, const std::string f_name, const std::string l_name, int grade)
    : id(id), f_name(f_name), l_name(l_name), grade(grade) {}

Student::~Student(){}

void Student::setId(int id) {
    this->id = id;
}

void Student::setGrade(int grade) {
    this->grade = grade;
}

void Student::setFirstName(const std::string f_name) {
    this->f_name = f_name;
}

void Student::setLastName(const std::string l_name) {
    this->l_name = l_name;
}

void Student::setFullName(const std::string f_name, const std::string l_name) {
    this->f_name = f_name;
    this->l_name = l_name;
}

int Student::getId() const {
    return id;
}

int Student::getGrade() const {
    return grade;
};

std::string Student::getFirstName() const {
    return f_name;
};

std::string Student::getLastName() const {
    return l_name;
};

std::string Student::getFullName() const {
    std::string full_name = f_name + " " + l_name;
    return full_name;
};

void Student::print_student() {
    std::cout << "Full name: " << this->f_name << " " << this->l_name << ", ";
    std::cout << "Grade: " << this->grade << ", ";
    std::cout << "ID: " << this->id << '\n';
}
