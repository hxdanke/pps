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
	void setNumber(int a);
	void setPaperComponent(int a);
	void setYear(int a);
	void setSyllabus(int a);
	void setMark(int a);

public:
	//	Get data
	int getNumber();
	int getPaperComponent();
	int getYear();
	int getSyllabus();
	int getMark();

	//	Constructors
	Question();
	Question(int a, int b, int c, int d, int e);

};

class CAIEQuestion : Question {

private:
	//	Data
		int season;

protected:
	//	Set data
	void setSeason(int a);

public:
	//	Get data
	int getSeason();

	//	Constructors
	CAIEQuestion();
	CAIEQuestion(int a, int b, int c, int d, int e, int f);

};