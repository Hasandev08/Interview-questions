## 1- OOP
- Object-oriented programming (OOP) is a style of programming characterized by the identification of classes of objects closely linked with the methods (functions) with which they are associated. It also includes ideas of inheritance of attributes and methods.
- Real life example of oop is: A car is having multiple parts.. like steering,wheels,engine...etc..which binds together to form a single object that is car. So, Here multiple parts of cars encapsulates itself together to form a single object that is Car.
- OOP stands for Object-Oriented Programming. As you can guess from it's name it breaks the program on the basis of the objects in it. It mainly works on Class, Object, Polymorphism, Abstraction, Encapsulation and Inheritance. Its aim is to bind together the data and functions to operate on them.

## 2- Pillars of OOP
- Abstraction
- Encapsulation
- Inheritance
- Polymorphism

## 3- Encapsulation
- Encapsulation is hiding of the sensitive data from the user. To achieve this the class attributes are declared as private. To make it readable for the users getters and setter are provided e.g., a capsule which hides the medicine within it.

## 4- Abstraction
- It means that displaying only the essential information and hiding the other details e.g., a coffee machine.
- Real life example of Abstraction is ATM Machine; All are performing operations on the ATM machine like cash withdrawal, money transfer, retrieve mini-statement…etc. but we can't know internal details about ATM. Note: Data abstraction can be used to provide security for the data from the unauthorized methods.

## 5- Inheritance
The capability of a class to derive properties and characteristics from another class is called Inheritance. A child class or derived class can access all the public , protected , internal and protected internal member. Private member cannot be accessed by child class however it is inherited and still present in child class and can be accessed using public property (GET SET modifier) .

### Types of Inheritance in C++
- Single Inheritance: In single inheritance, a class is allowed to inherit from only one class. i.e. one sub class is inherited by one base class only.
- Multiple Inheritance: Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes. i.e one sub class is inherited from more than - one base classes.
- Multilevel Inheritance: In this type of inheritance, a derived class is created from another derived class.
- Hierarchical Inheritance: In this type of inheritance, more than one sub class is inherited from a single base class. i.e. more than one derived class is created from a single base class.
- Hybrid (Virtual) Inheritance: Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance.
- A special case of hybrid inheritance : Multipath inheritance: A derived class with two base classes and these two base classes have one common base class is called multipath inheritance. An ambiguity can arrise in this type of inheritance.
- To see the examples of the inheritances visit the link below.

https://www.dotnettricks.com/learn/oops/understanding-inheritance-and-different-types-of-inheritance

## 6- Polymorphism
The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form.
feature that allows us to perform a single action in different ways.
Example:
A real-life example of polymorphism, a person at the same time can have different characteristics. Like a man at the same time is a father, a husband, an employee. So the same person posses different behavior in different situations.

In C++ polymorphism is mainly divided into two types:

- Compile time Polymorphism
- Runtime Polymorphism
#### 1- Compile time polymorphism:
This type of polymorphism is achieved by function overloading or operator overloading.

- Function Overloading: When there are multiple functions with same name but different parameters then these functions are said to be overloaded. Functions can be overloaded by change in number of arguments or/and change in type of arguments.
- Operator Overloading: C++ also provide option to overload operators. For example, we can make the operator (‘+’) for string class to concatenate two strings. We know that this is the addition operator whose task is to add two operands. So a single operator ‘+’ when placed between integer operands , adds them and when placed between string operands, concatenates them.
#### 2- Runtime polymorphism:
This type of polymorphism is achieved by Function Overriding.

- Function overriding on the other hand occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.

## 7- Class
Class is a blueprint for creating objects (a particular data structure), providing initial values for state (member variables or attributes), and implementations of behavior (member functions or methods). The user-defined objects are created using the class keyword.

## 8- Object
An object is an instance of a class. It has its own state, behavior, and identity
