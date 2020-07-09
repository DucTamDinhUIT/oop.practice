#pragma once
//
//  student.hpp
//  studentman
//
//  Created by Toan Nguyen on 3/22/20.
//  Copyright © 2020 Toan Nguyen. All rights reserved.
//

#ifndef student_h
#define student_h
#define SYMBOL '|'
#define FILESYSTEM "students.txt"
#include <string>
#include <vector>
using namespace std;
struct Student {
	string id;
	string name;
	float math;
	float liter;
	float eng;
	float gpa;
};
vector<string> splitString(const string&, char);
Student stringToStudent(const string&);
bool saveStudents(const vector<Student>);
string studentToString(const Student&);
vector<Student> loadStudents();
#endif /* student_hpp */

