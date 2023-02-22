This is a C++ program that calculates the semester grade point average (SGPA) of a student based on their grades and credits earned in each subject. The program consists of a class named "Subject" that has four  methods: read(), calculate(), and sum(), and a function named "display()".

The read() method reads the grade and credits of each subject from the user. The calculate() method finds the corresponding grade point average (GPA) for each subject based on the grade entered. The sum() method calculates the total GPA and total credits earned by the student.

The main() function initializes an array of Subject objects named "S". It prompts the user to enter the number of subjects they have taken. It then calls the read(), calculate(), and sum() methods of each Subject object in the array to calculate the total GPA and total credits earned. Finally, it calls the display() function to find and display the SGPA.

The display() function calculates the SGPA by dividing the total GPA by the total credits earned and displays it on the screen.

This program considers "O"(oh) grade for 90 to 100 marks in each subject.
Similarly,A+ for 80 to 89 marks, A for 70 to 79 marks, B+ for 60 to 69 marks,B for 50 to 59 marks,C for 40 to 49 marks, F for 0 to 39 marks
