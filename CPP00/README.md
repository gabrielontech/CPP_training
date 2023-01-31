# C++ 00 knowledges
This guide provides an overview of the essential concepts that i've learned in C++ classes so far.

## What is a C++ Class?
 - A C++ class is a blueprint for creating objects that combine data and behaviors. Classes are used to encapsulate data and operations on that data.
Here is a short code example in C++ that demonstrates how classes work:
 ```cpp
#include <iostream>

class Example
{
public:
    int public_attribute;

private:
    int private_attribute;
};

int main()
{
    Example object;
    object.public_attribute = 42;
    // object.private_attribute = 42; // This line would result in a compile error.

    std::cout << "Public attribute: " << object.public_attribute << std::endl;

    return 0;
}

```
The output of this program will be: <br>

```
Public attribute: 42
```
In this example, the class Example has both public and private attributes.
public_attribute can be accessed from outside the class, while private_attribute can only be accessed from within the class.
<br>
## Constructors and Destructors
 - A constructor is a special member function that is automatically called when an object of a class is created. Constructors are used to initialize the object's data members.
 - A destructor is a special member function that is automatically called when an object of a class goes out of scope or is explicitly deleted. Destructors are used to release any resources that were acquired by the object.
 Here is a short code example in C++ that demonstrates how constructors and destructors work:
 ```cpp
#include <iostream>

class Example
{
   public:
        Example() // Constructor
        {
            std::cout << "Constructor called." << std::endl;
        }
        ~Example() // Destructor
        {
            std::cout << "Destructor called." << std::endl;
        }
};

int main()
{
    Example object; // Constructor is called when object is created.
    return 0;      // Destructor is called when object goes out of scope.
}
  ```
  The output of this program will be: <br>
  ```
  Constructor called.
  Destructor called.
  ```
## Private and Public Attributes
Class members, including data members and member functions, can be declared as either private or public.

- Private members are accessible only within the class and can only be accessed by other class members.
- Public members, on the other hand, can be accessed from outside the class.
By default, class members are private.

## Further Reading
For more information on C++ classes and the concepts discussed in this guide, check out the following resources:

- [C++ Classes and Objects on tutorialspoint.com](https://www.tutorialspoint.com/cplusplus/cpp_classes_objects.htm)
- [C++ Classes and more on cplusplus.com](https://cplusplus.com/doc/tutorial/classes/)
