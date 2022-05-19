#pragma once

//	Question objects

class Question {

private:
	//	Data
	int number;
	int paperComponent;
	int year;
	int syllabus;

protected:
	//	Set data
	void setNumber(int a)			{ this->number			=	a; }
	void setPaperComponent(int a)	{ this->paperComponent	=	a; }
	void setYear(int a)				{ this->year			=	a; }
	void setSyllabus(int a)			{ this->syllabus		=	a; }

public:
	//	Get data
	int getNumber()			{ return this->number; }
	int getPaperComponent()	{ return this->paperComponent; }
	int getYear()			{ return this->year; }
	int getSyllabus()		{ return this->syllabus; }

	//	Constructors
	Question() {
		setNumber(0);
		setPaperComponent(0);
		setYear(0);
		setSyllabus(0);
	}
	Question(int a, int b, int c, int d) {
		setNumber(a);
		setPaperComponent(b);
		setYear(c);
		setSyllabus(d);
	}
};

class CAIEQuestion : Question {

private:
	//	Data
	int paperVariant;
	int season;

protected:
	//	Set data
	void setPaperVariant(int a) { this->paperVariant = a; }
	void setSeason(int a) { this->season = a; }

public:
	//	Get data
	int getPaperVariant()	{ return this->paperVariant; }
	int getSeason()			{ return this->season; }

	//	Constructors
	CAIEQuestion() {
		setNumber(0);
		setPaperVariant(0);
		setPaperComponent(0);
		setSeason(0);
		setYear(0);
		setSyllabus(0);
	}
	CAIEQuestion(int a, int b, int c, int d, int e, int f) {
		setNumber(a);
		setPaperVariant(b);
		setPaperComponent(c);
		setSeason(d);
		setYear(e);
		setSyllabus(f);
	}
};