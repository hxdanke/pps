#include "question.h"

void Question::setNumber(int a) { this->number = a; }
void Question::setPaperComponent(int a) { this->paperComponent = a; }
void Question::setYear(int a) { this->year = a; }
void Question::setSyllabus(int a) { this->syllabus = a; }
void Question::setMark(int a) { this->mark = a; }

void CAIEQuestion::setSeason(int a) { this->season = a; }

int Question::getNumber() { return this->number; }
int Question::getPaperComponent() { return this->paperComponent; }
int Question::getYear() { return this->year; }
int Question::getSyllabus() { return this->syllabus; }
int Question::getMark() { return this->mark; }

int CAIEQuestion::getSeason() { return this->season; }

Question::Question() {
	setNumber(0);
	setPaperComponent(0);
	setYear(0);
	setMark(0);
	setSyllabus(0);
}

Question::Question(int a, int b, int c, int d, int e) {
	setNumber(a);
	setPaperComponent(b);
	setYear(c);
	setMark(d);
	setSyllabus(e);
}

CAIEQuestion::CAIEQuestion() {
	setNumber(0);
	setPaperComponent(0);
	setSeason(0);
	setYear(0);
	setMark(0);
	setSyllabus(0);
}

CAIEQuestion::CAIEQuestion(int a, int b, int c, int d, int e, int f) {
	setNumber(a);
	setPaperComponent(b);
	setSeason(c);
	setYear(d);
	setMark(e);
	setSyllabus(e);
}