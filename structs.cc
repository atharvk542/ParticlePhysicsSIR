#include <iostream>
#include <vector>

struct Student {
	std::string fname;
	std::string lname;
	int id; 
};

std::vector<Student> full_name_search(std::vector<Student> students, std::string full_name);
std::vector<Student> first_last_search(std::vector<Student> students, std::string name);

int main() {
	Student a = {"a", "b", 1};
	Student b = {"a", "c", 2};
	Student c = {"d", "e", 3};
	Student d = {"b", "e", 4};
	Student e = {"a", "g", 5};
	Student f = {"HARIHARAN", "ANANTHAKRISHNAN", 6};
	Student g = {"h", "g", 7};
	Student h = {"c", "c", 8};
	Student i = {"c", "c", 9};


	std::vector<Student> students = {a, b, c, d, e, f, g, h, i};

	std::vector<Student> full_name_search_out = full_name_search(students, "c c");
	for (Student student : full_name_search_out) {
		std::cout << student.id << '\n';
	}

	std::cout << "-----------------------------------------------------" << '\n';

	std::vector<Student> first_last_search_out = first_last_search(students, "a");
	for (Student student : first_last_search_out) {
		std::cout << student.id << '\n';
	}
}

std::vector<Student> full_name_search(std::vector<Student> students, std::string full_name) {
	std::vector<Student> out;

	for (Student student : students) {
		std::string student_full_name = student.fname + " " + student.lname;
		if (student_full_name == full_name) {
			out.push_back(student);
		}
	}

	return out; 

}

std::vector<Student> first_last_search(std::vector<Student> students, std::string name) {
	std::vector<Student> out;
	for (Student student : students) {
		if (student.fname == name || student.lname == name) {
			out.push_back(student);
		}
	}

	return out; 
}

