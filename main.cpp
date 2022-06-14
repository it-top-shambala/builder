#include <iostream>

#include "Student.h"
#include "StudentBuilder.h"

#include "Teacher.h"
#include "TeacherBuilder.h"

using namespace std;

int main() {

    Student* student = StudentBuilder::Build("", "", "", "", "", "");

    TeacherBuilder* teacherBuilder =  new TeacherBuilder();
    teacherBuilder->UsePersonInfo("", "");
    teacherBuilder->UseSubject("");
    Teacher* teacher = teacherBuilder->CreateTeacher();


    /*
    Contacts* contacts = new Contacts(phone, email, address);
    Person* person = new Person(firstName, lastName, *contacts);
    Student* student2 = new Student(*person, faculty);
    */

    return 0;
}
