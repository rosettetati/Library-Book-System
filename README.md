# Library System in C++

This project is a **Library Book Management System** implemented in **C++**.  
It simulates a simple library where you can **store books, borrow and return them, update book information**, and check availability.  

The project demonstrates **object-oriented programming (OOP) concepts** such as:

- Private attributes (encapsulation)
- Constructors (default, parameterized, copy)
- Public methods
- User interaction

---

## Features

- **Default, Parameterized, and Copy Constructors**  
- **Display Book Information**  
- **Update Book Title and Copies**  
- **Borrow and Return Books**  
- **Check Availability**  
- **Interactive Console Menu**  
- **Display Internal Parameters for Demonstration**

---

## Code Structure

- `LibraryBook` class:
  - Private attributes: `title`, `copies`
  - Public methods:
    - `displayInfo()` – displays book info
    - `updateBook(title, copies)` – updates book info
    - `isAvailable()` – returns availability status
    - `borrowBook()` – simulates borrowing a book
    - `returnBook()` – simulates returning a book
    - `displayParameters()` – shows internal attributes
  - Constructors:
    - Default constructor
    - Parameterized constructor
    - Copy constructor

- `main()` function:
  - Demonstrates all constructors
  - Interactive menu for borrowing, returning, updating, and displaying books


