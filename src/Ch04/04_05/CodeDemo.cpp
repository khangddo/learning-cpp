// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here

    std::string student_str;
    student_str = students[id - 1].get_name(); // Change this to the selected student's name
    float tt_creds = 0;
    float tt_pts = 0;
    for (auto x : grades) {
        float grds = 0;
        float crds = 0;
        if (x.get_student_id() == id) {
            grds = 69 - x.get_grade();
            // std::cout << x.get_grade() << ": " << grds << std::endl;
            crds = courses[x.get_course_id() - 1].get_credits();
            // std::cout << x.get_course_id() << ": " << crds << std::endl;
            tt_pts += grds * crds;
            // std::cout << tt_pts << std::endl;
            tt_creds += courses[x.get_course_id() - 1].get_credits();
            // std::cout << tt_creds << std::endl;
        }
    }
    GPA = tt_pts / tt_creds;
    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
