#include <iostream>

#include "person.h"
#include "employee.h"
#include "student.h"
#include "faculty.h"
#include "staff.h"
#include "research_assistant.h"


int main(){

	Faculty cenk = Faculty(12346, "Murat Cenk Cavusoglu", 50000., "Computer Science", "Professor", "Surgical Robotics");
	Faculty orhan = Faculty(12347, "Orhan Ozguner", 50000., "Computer Science", "Adjunct Professor", "Surgical Robotics");
	Faculty wyatt = Faculty(12348, "Wyatt Newman", 50000., "Electrical Engineering", "Professor", "Surgical Robotics");
	Faculty mehmet = Faculty(12349, "Mehmet Koyuturk", 50000., "Computer Science", "Professor", "Bioinformatics");

	Staff cynthia = Staff(12350, "Cynthia Hatcher", 20000., "Computer Science", "Assistant to the Chair");
	Staff david = Staff(12351, "David Jarvi", 20000., "Computer Science", "Technician");
	Staff julie = Staff(12352, "Julie Martinez", 30000., "Biomedical Engineering", "Regulatory Compliance Director");


	Student tom = Student(12360, "Tom Shkurti", 2022, "Computer Science", 4.0);
	Student iayn = Student(12361, "Iayn Bogdanov", 1974, "Computer Science", 3.5);
	Student test_student = Student();

	ResearchAssistant ammar = ResearchAssistant("Robotics", "Computer Science", 3.0, 2022, 12362, "Ammar Nahari");
	ResearchAssistant russel = ResearchAssistant("Robotics", "Lab Manager", "Computer Science", 1000., 12375, "Russel Jackson");
	ResearchAssistant pod_person = ResearchAssistant("Robotics", "Consulting Engineer", "Computer Science", 1000., 12375, "Hugh Mann");
	pod_person.setGPA(5.0);

	std::cout << "FACULTY:" << "\n";
	std::cout << cenk.print() << "\n";
	std::cout << orhan.print() << "\n";
	std::cout << wyatt.print() << "\n";
	std::cout << mehmet.print() << "\n";

	std::cout << "STAFF:" << "\n";
	std::cout << cynthia.print() << "\n";
	std::cout << david.print() << "\n";
	std::cout << julie.print() << "\n";

	std::cout << "STUDENTS:" << "\n";
	std::cout << tom.print() << "\n";
	std::cout << iayn.print() << "\n";
	std::cout << test_student.print() << "\n";

	std::cout << "RA's:" << "\n";
	std::cout << ammar.print() << "\n";
	std::cout << russel.print() << "\n";
	std::cout << pod_person.print() << "\n";

	return 0;
}
