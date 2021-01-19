#pragma once
#include <string>
#include <list>
using namespace std;
#include "..\DEFs.h"

#include "../GUI/Drawable.h"

//Base class for all types of courses
class Course : public Drawable
{
	const Course_Code code;	//course code: e.g. "CIE202". This is the course ID
	const string Title;		//course title: e.g. "Fundamentals of Computer Programming"
	int credits;	//no. of course credits
	string type;	//Univ, track, or major.....etc.
	ChangeColor coloFilled= ChangeColordefault;    //to change color of the course if there is an error
	bool Done;		//Done or not yet?
	list<Course_Code> PreReq;	//list of prerequisites
	list<Course_Code> CoReq;	//list of prerequisites
	double x, y;
public:
	Course(Course_Code r_code, string r_title, int crd);
	string getTitle() const;
	string getCode() const;
	int getCredits() const;
	string getType() const;
	void setcoloFilled(ChangeColor CB); 
	ChangeColor getcoloFilled() const;
	void setpositionofcourse(double x_point, double y_point);  //set the position of the course 
	int* getpositionofcourse() const;
	void DrawMe(GUI*) const;
	/*void DrawMeModerate(GUI*) const;
	void DrawMeCritical(GUI*) const;*/
	virtual ~Course();

};
