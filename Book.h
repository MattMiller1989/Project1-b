//book.h

#pragma once

//include header files
#include <string>
#include "PriorityQueue.h"
#include "PriorityQueue.cpp"
#include <list>
#include "Date.h"
#include "employee.h"
using namespace std;

//declare class Book
class Book
{
private:

	string name;
	Date startDate;
	Date endDate;
	bool archived;
	PriorityQueue<Employee> wa;
	Date lastHeld;

public:

	
	Book(string bookName);
	Book(string bookName, Date start);
	

	string getname();

	Date getstartDate();
	Date getendDate();
	bool getarchived();
	Date getHeld();
	void setname(string newName);
	void setstartDate(Date newDate);
	//void setendDate(Date newDate);
	//void setarchived(bool newBool);
	//void setHeld(Date date);
	void populate_queue(vector<Employee> empList);
	void circulate(Date circ_date);
	bool to_archive();
	void pass(int days_passed);

	

};


