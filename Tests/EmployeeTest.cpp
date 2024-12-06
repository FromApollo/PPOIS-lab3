#include "pch.h"

#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Employee.h"

TEST(EmployeeTest, ConstructorAndGetters) {
    Employee employee("John Doe", "Developer", 5000.0);

    EXPECT_EQ(employee.getName(), "John Doe");
    EXPECT_EQ(employee.getRole(), "Developer");
    EXPECT_EQ(employee.getSalary(), 5000.0);
}

TEST(EmployeeTest, AssignTaskTest) {

    Employee employee("John Doe", "Developer", 5000.0);

    std::stringstream output;
    std::streambuf* original = std::cout.rdbuf(output.rdbuf()); 

    employee.assignTask("Write code");

    EXPECT_NE(output.str().find("Task \"Write code\" has been assigned to John Doe (Developer)."), std::string::npos);

    std::cout.rdbuf(original);
}
