# Admission-test-C

This was my first project in University. #It basically is a admission test, and the admins can see the scores of the individual people.

Student Exam Management System in C
This C program is designed as a simple Exam Management System with two main roles: Admin and Student. It allows an administrator to manage students' information and exam questions, while students can register, log in, and take an exam. Key functionalities include file operations for saving data, sorting algorithms for ranking students, and a quiz module with predefined questions.

Key Modules and Functionalities:
Admin Module:

The Admin has exclusive access to student data and can view scores and rankings.
Admin authentication is required to access this module, verified against a hardcoded Admin ID and password.
Once logged in, the Admin can view a ranked list of students based on their exam scores, using bubble sort to organize this list in descending order.
Student Module:

Student Registration: New users can register by providing a username and password, which are stored in separate files for authentication.
Student Login: Students authenticate using their registered username and password. Upon successful login, they are directed to the exam section.
Exam Module: The system presents a series of multiple-choice questions stored in separate files. Students input their answers, and the program verifies each response against an answer file to calculate the score.
Score Recording: After the exam, each student's score and name are appended to a file, allowing the Admin to view all student scores and ranks.
File Management:

Questions, options, and answers are read from separate files, and the scores are recorded in a separate file for easy management and retrieval.
The system uses file handling functions to read from and write to files for persistent storage of student details and exam questions.
Sorting and Ranking:

A bubble sort algorithm is implemented to rank students by score, allowing the Admin to view the highest scorers first.
Menu Navigation:

The main menu provides options for Admin and Student access, facilitating easy navigation between modules and ensuring role-based access to different parts of the program.
Purpose:
The program serves as a simple demonstration of how file management, sorting algorithms, and user authentication can be combined to create a basic educational management tool. It is intended for educational use, showcasing core concepts in C programming.

This project can be expanded further by incorporating more complex features, such as a GUI, dynamic question loading, or enhanced security for user credentials.

![image](https://github.com/user-attachments/assets/86927664-ed39-40a8-a37f-da825ad8d9f9)

