# Overloading-in-Cpp
# Name: Rajeev Ramesh Reddy E
# PRN: 24070123081

Aim: To study and implement the concept of Overloading in C++, demonstrating function overloading and operator overloading.

Software Used: VS code

Theory:
Overloading in C++ allows multiple functions or operators to share the same name but behave differently based on parameter types or counts. It enhances code readability and flexibility. Function overloading defines multiple versions of a function, while operator overloading customizes how operators work with user-defined types. Overloading must differ in signature—not just return type.

Constructor overloading syntax:
    
    class Student {
    public:
    // Default constructor
    Student() {
        // Initialization logic
    }

    // Parameterized constructor
    Student(string name, int roll) {
        // Initialization logic
    }

    // Another parameterized constructor
    Student(string name, int roll, string branch) {
        // Initialization logic
    }
    };


Functional overloading syntax:

    void print(int x);
    void print(double y);
    void print(string z);

Operator overloading syntax:

    class Complex {
    public:
    Complex operator + (const Complex& obj);
    };


1) Algorithm of constructor overloading.

Step 1: Input Collection

Prompt the user to enter two integers and two floating-point numbers. Store them in variables a, b, p, and q.

Step 2: Define Class with Overloaded Constructors

Create a class Sum with two constructors—one accepting integers and another accepting floats. Each constructor calculates and displays the sum.

Step 3: Create Integer Object

Instantiate object s1 using integer values a and b. This invokes the integer constructor and displays the result.

Step 4: Create Float Object

Instantiate object s2 using float values p and q. This invokes the float constructor and displays the result.

Step 5: Program Termination

After displaying both sums, the program ends successfully.


2) Algorithm of functional overloading.

Step 1: Define Class with Overloaded Functions

Create a class Area containing three overloaded calc() functions to compute the area of a square, rectangle, and circle based on different parameter types.

Step 2: Declare Variables

In main(), declare variables for square side (side), rectangle dimensions (length, width), and circle radius (radius).

Step 3: Take User Input

Prompt the user to enter values for each shape: side of square, length and width of rectangle, and radius of circle.

Step 4: Compute Areas

Call the appropriate overloaded calc() function for each shape using the input values. Display the computed areas.

Step 5: Terminate Program

End the program after displaying all area results.

3) Algorithm of operator overloading.

Step 1: Define Class with Overloaded Operator

Create a class Number with a private integer value. Overload the == operator to compare two Number objects based on their value.

Step 2: Take User Input

Prompt the user to enter two integers. Store them in variables a and b.

Step 3: Create Objects

Instantiate two objects n1 and n2 of class Number using the input values.

Step 4: Display Values

Call the display() function for both objects to show their stored values.

Step 5: Compare and Output Result

Use the overloaded == operator to compare n1 and n2. Display whether the numbers are equal or not.


Conclusion:
Overloading in C++ enhances flexibility by allowing multiple functions or operators with the same name to perform different tasks based on parameter types or counts, improving code clarity and reuse.



