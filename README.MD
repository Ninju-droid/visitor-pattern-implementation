## Visitor Pattern in C++:
This project demonstrates the implementation of the Visitor Design Pattern in C++ using:
    1.Abstract classes (interfaces)
    2.Virtual functions
    3.Runtime polymorphism
    4.Separate compilation (.h and .cpp files)
    5.Multiple concrete elements and visitors


 A visitor pattern is a software design pattern that separates the algorithm from the object structure . 
 This helps in adding new operations to existing object structures without modifying the structures. 

The core of this pattern is the Visitor interface. This interface defines a visit operation for each
 type of ConcreteElement in the object structure. Meanwhile, the ConcreteVisitor implements the operations defined in the Visitor interface. The concrete visitor will store local state, typically as it traverses the set of elements. The element interface simply defines an accept method to allow the visitor to run some action over that element — the ConcreteElement will implement this accept method.

# The visitor pattern consists of two parts:
  1. a method called visit() which is implemented by the visitor and is called for every element in the data structure .
  2. visitable classes providing accept() methods that accept a visitor .
