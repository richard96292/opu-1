#ifndef OBJEKTINIO_PROGRAMAVIMO_UZDUOTIS_STUDENT_H
#define OBJEKTINIO_PROGRAMAVIMO_UZDUOTIS_STUDENT_H

#include <string>
#include <vector>

struct student {
  std::string firstName, lastName;
  std::vector<int> grades;
  int examGrade = 0;
  double finalGradeAvg = 0, finalGradeMedian = 0, finalGradeMean = 0;
};

#endif  // OBJEKTINIO_PROGRAMAVIMO_UZDUOTIS_STUDENT_H
