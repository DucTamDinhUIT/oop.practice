//
//  student.cpp
//  studentman
//
//  Created by Toan Nguyen on 3/22/20.
//  Copyright © 2020 Toan Nguyen. All rights reserved.
//

#include "student.h"
#include <iostream>
#include <fstream>
using namespace std;
vector<string> splitString(const string& str, char c) {
	vector<string> parts;
	size_t start = 0;
	size_t symbolPos = str.find(c, start);
	while (symbolPos != string::npos) {
		//found
		string part = str.substr(start, symbolPos - start);
		parts.push_back(part);
		start = symbolPos + 1;
		symbolPos = str.find(c, start);
	}
	string lastPart = str.substr(start, str.length() - start);
	parts.push_back(lastPart);
	return parts;
}
Student stringToStudent(const string& str) {
	vector<string> parts = splitString(str, SYMBOL);
	Student student;
	student.id = parts[0];
	student.name = parts[1];
	student.math = stof(parts[2]);
	student.liter = stof(parts[3]);
	student.eng = stof(parts[4]);
	if (parts.size() == 5) {
		student.gpa = (student.math + student.liter + student.eng) / 3;
	}
	else
		if (parts.size() == 6) {
			student.gpa = stof(parts[5]);
		}
	return student;
}

bool saveStudents(const vector<Student> students) {
	ofstream ofs(FILESYSTEM, ios::out | ios::app);
	bool status = false;
	if (ofs.is_open()) {
		for (size_t i = 0; i < students.size(); i++) {
			string strStudent = studentToString(students[i]);
			ofs << strStudent << endl;
		}
		status = true;
	}
	ofs.close();
	return status;
}
string studentToString(const Student& student) {
	return student.id + SYMBOL + student.name + SYMBOL + to_string(student.math) + SYMBOL + to_string(student.liter) + SYMBOL + to_string(student.eng) + SYMBOL + to_string(student.gpa);
}
vector<Student> loadStudents() {
	ifstream ifs(FILESYSTEM, ios::in);
	vector<Student> students;
	if (ifs.is_open()) {
		string line = "";
		while (getline(ifs, line)) {
			Student student = stringToStudent(line);
			students.push_back(student);
		}
	}
	ifs.close();
	return students;
}

