#include <vector>

using namespace std;

//	Question objects

class Question {

private:
	//	Data
	int number;
	int paperComponent;
	int year;
	int season;
	int syllabus;
	int mark;
	int difficulty;
	vector<int> topics;

protected:
	//	Set data
	void setNumber(int a);
	void setPaperComponent(int a);
	void setYear(int a);
	void setSeason(int a);
	void setSyllabus(int a);
	void setMark(int a);
	void setTopics(vector<int> a);
	

public:
	//	Get data
	int getNumber();
	int getPaperComponent();
	int getYear();
	int getSeason();
	int getSyllabus();
	int getMark();
	vector<int> getTopics();

	//	Constructors
	Question();
	Question(int a, int b, int c, int d, int e, int f, vector<int> g);

};