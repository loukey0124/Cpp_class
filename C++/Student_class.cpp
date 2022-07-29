#include <iostream>
using namespace std;

class Student {
private:
	char name[30];
	int id;

public:
	Student(const char* name, int id) {
		strcpy_s(this->name, 30, name);
		this->id = id;
	}

	void setname(const char* name) {
		strcpy_s(this->name, 30, name);
	}

	void setid(int id) {
		this->id = id;
	}

	char* getname() {
		return name;
	}

	int getid() {
		return id;
	}
};

class Studnet_Java : public Student {
private:
	int score;

public:
	Studnet_Java(const char* name, int id, int score) : Student(name, id) {
		this->score = score;
	}
};

class Student_C : public Student {
private:
	int score;

public:
	Student_C(const char* name, int id, int score) : Student(name, id) {
		this->score = score;
	}
};