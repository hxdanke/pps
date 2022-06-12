#include "question.h"

//	Set
void Question::setNumber(int a) { this->number = a; }
void Question::setPaperComponent(int a) { this->paperComponent = a; }
void Question::setSeason(int a) { this->season = a; }
void Question::setYear(int a) { this->year = a; }
void Question::setSyllabus(int a) { this->syllabus = a; }
void Question::setMark(int a) { this->mark = a; }
void Question::setTopics(vector<int> a) { this->topics = a; }

//	Get
int Question::getNumber() { return this->number; }
int Question::getPaperComponent() { return this->paperComponent; }
int Question::getSeason() { return this->season; }
int Question::getYear() { return this->year; }
int Question::getSyllabus() { return this->syllabus; }
int Question::getMark() { return this->mark; }
vector<int> Question::getTopics() { return this->topics; }

//	Constructors
Question::Question() {
	setNumber(0);
	setPaperComponent(0);
	setSeason(0);
	setYear(0);
	setMark(0);
	setSyllabus(0);
	setTopics(vector<int> {0});
}

Question::Question(int a, int b, int c, int d, int e, int f, vector<int> g) {
	setNumber(a);
	setPaperComponent(b);
	setSyllabus(c);
	setYear(d);
	setMark(e);
	setSyllabus(f);
	setTopics(g);
}