/*************************************************************************
	> File Name: student.h
	> Author: 
	> Mail: 
	> Created Time: 2017年10月27日 星期五 18时30分25秒
 ************************************************************************/

#ifndef _STUDENT_H
#define _STUDENT_H
#endif

#include <iostream>
using namespace std;

class Student
{
    int id;
    int grade;

    public:
    Student(int id_=-1,int grade_=0){ id = id_; grade=grade_; }
    int getId(){return id;}
    int getGrade(){return grade;}
    void setId(int id_){id = id_;}
    void setGrade(int grade_){grade=grade_;}
};
