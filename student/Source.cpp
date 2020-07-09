#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "student.h"
using namespace std;

int main(int argc, const char * argv[]) {

	string action = argv[1];
	if (action == "add") {
		string filePath = argv[2];
		ifstream ifs(filePath, ios::in);
		vector<Student> students;
		if (ifs.is_open()) {
			string line = "";
			while (getline(ifs, line)) {
				Student student = stringToStudent(line);
				students.push_back(student);
			}
		}
		ifs.close();
		if (saveStudents(students))
			cout << "successed!" << endl;
		else
			cout << "failed!" << endl;
	}
	if (action == "find") {
		string keyword = argv[2];
		vector<Student> students = loadStudents();
		vector<Student> foundStudents;
		for (size_t i = 0; i < students.size(); i++) {
			if (students[i].id == keyword || students[i].name == keyword) {
				foundStudents.push_back(students[i]);
			}
		}
		if (foundStudents.size() > 0) {
			cout << "Found Students:" << endl;
			for (size_t i = 0; i < foundStudents.size(); i++) {
				cout << (i + 1) << " " << studentToString(foundStudents[i]) << endl;
			}
		}
		else {
			cout << "Not found!" << endl;
		}
	}
	if (action == "passed") {
		vector<Student> students = loadStudents();
		vector<Student> foundStudents;
		for (size_t i = 0; i < students.size(); i++) {
			if (students[i].gpa >= 5) {

				foundStudents.push_back(students[i]);
			}
		}
		if (foundStudents.size() > 0) {
			cout << "Passed Students:" << endl;
			for (size_t i = 0; i < foundStudents.size(); i++) {
				cout << (i + 1) << " " << studentToString(foundStudents[i]) << endl;
			}
		}
	}

	return 0;
}
