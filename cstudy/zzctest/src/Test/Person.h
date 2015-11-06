/*
 * Person.h
 *
 *  Created on: 2015-11-4
 *      Author: libin
 */

#ifndef PERSON_H_
#define PERSON_H_

class Person {
public:
	Person();
	Person(char name,int age);
	virtual ~Person();

	void print();
	Person getPerson();
private:
	char name;
	int age;
};

#endif /* PERSON_H_ */
