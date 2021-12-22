#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class abstract_employee {
	virtual void AskForPromotion()=0; // this is bascially the rule for the abstract class 
};


class employee : abstract_employee{
private:
	int m_age;
	int m_salary;
protected:
	string m_name;
public:
	employee(string name, int age, int salary) : m_name(name), m_age(age), m_salary(salary) {}
	
	void print() {
		cout << m_name << endl;
		printf("%d\n", m_salary);
		printf("%d\n", m_age);
	}


	void AskForPromotion() {
		if (m_age > 18) {
			cout << m_name << " Get promoted" << endl;
		}
		else {
			cout << m_name << " No promoted" << endl;

		}

	}

	// getters and setters 
	string getName() { return m_name; }

	virtual void work() {
		cout << m_name << " is checking the email, task backlog, performing tasks ..." << endl;
	}
};


class developer:public employee { 
public:
	string m_favPL;
	
	developer(string name, int age, int salary, string favPL) : employee(name,age,salary), m_favPL(favPL) {}
	void fixBug() {
		cout << m_name << " is fixing the bug using " << m_favPL<<endl;
	}

	void work() {
		cout << m_name << " is writing " <<m_favPL<<" code"<< endl;
	}
};


class teacher:public employee { 
public:	
	string m_subject;
	void prepareLesson() {
		cout << m_name << " is prepareing the " << m_subject << " lesson" << endl;
	}
	teacher(string name, int age, int salary, string subject):employee(name,age,salary),m_subject(subject){}

	void work() {
		cout << m_name << " is preparing " << m_subject << endl;
	}


};

int main() {

//	employee e1("taimour", 21, 8000);
//	employee e2("ali", 16, 8000);
//	e1.print();
//	e1.AskForPromotion();
	developer d("ali",34,4000,"c++");
//	d.fixBug();
//	d.AskForPromotion();
	
	teacher t("alison", 22, 5000, "physics");
	//t.prepareLesson();
	//t.AskForPromotion();
	//d.work();
	//t.work();

	employee* e3 = &d;
	employee* e4 = &t;

	e3->work();
	e4->work();


	return 0;
}






