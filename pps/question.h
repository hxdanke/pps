#pragma once

//	Question objects

class Question {

private:
	//	Data
	int number;
	int paperComponent;
	int year;
	int syllabus;
	int mark;

protected:
	//	Set data
	void setNumber(int a)			{ this->number			=	a; }
	void setPaperComponent(int a)	{ this->paperComponent	=	a; }
	void setYear(int a)				{ this->year			=	a; }
	void setSyllabus(int a)			{ this->syllabus		=	a; }
	void setMark(int a)				{ this->mark			=	a; }

public:
	//	Get data
	int getNumber()			{ return this->number; }
	int getPaperComponent()	{ return this->paperComponent; }
	int getYear()			{ return this->year; }
	int getSyllabus()		{ return this->syllabus; }
	int getMark()			{ return this->mark; }

	//	Constructors
	Question() {
		setNumber(0);
		setPaperComponent(0);
		setYear(0);
		setMark(0);
		setSyllabus(0);
	}
	Question(int a, int b, int c, int d, int e) {
		setNumber(a);
		setPaperComponent(b);
		setYear(c);
		setMark(d);
		setSyllabus(e);
	}
};

class CAIEQuestion : Question {

private:
	//	Data
		int season;

protected:
	//	Set data
		void setSeason(int a) { this->season = a; }

public:
	//	Get data
		int getSeason()			{ return this->season; }

	//	Constructors
	CAIEQuestion() {
		setNumber(0);
		setPaperComponent(0);
		setSeason(0);
		setYear(0);
		setMark(0);
		setSyllabus(0);
	}
	CAIEQuestion(int a, int b, int c, int d, int e, int f) {
		setNumber(a);
		setPaperComponent(b);
		setSeason(c);
		setYear(d);
		setMark(e);
		setSyllabus(e);
	}
};