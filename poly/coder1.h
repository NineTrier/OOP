#ifndef PROGR1_H
#define PROGR1_H

#include "student.h"

class Coder1 : public Student
{
public:
    Coder1();

    Programm work(const Task &task);
};

#endif // PROGR1_H
