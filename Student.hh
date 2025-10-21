#ifndef DATE_HH
#define DATE_HH

#include <string>

class Student {
    public:
        Student(int id, const std::string f_name, const std::string l_name, int grade);
        ~Student();

        void setId(int id);
        void setGrade(int grade);
        void setFirstName(const std::string f_name);
        void setLastName(const std::string l_name);
        void setFullName(const std::string f_name, const std::string l_name);

        int getId() const;
        int getGrade() const;
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getFullName() const;

        void print_student();

    private:
        int id;
        std::string f_name;
        std::string l_name;
        int grade;
};

#endif
