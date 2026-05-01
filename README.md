# Library System - Part 1 (Design and Planning)

## Overview

This project is a simple library system developed in C++ using Object-Oriented Programming (OOP).  
The goal is to manage basic book information and allow users to borrow books based on availability.

The system works with a fixed collection of 5 books.

---

## Class Design

### Class: `Book`

The `Book` class represents a book in the library and is responsible for storing its data and controlling its availability.

---

## Attributes

The class contains the following private attributes:

- `title` (string): Book title  
- `author` (string): Book author  
- `isbn` (string): Unique identifier  
- `available` (bool): Availability status  

---

## Methods

### Getters
- `getTitle()` → returns the book title  
- `getAuthor()` → returns the author  
- `getISBN()` → returns the ISBN  
- `isAvailable()` → returns availability status  

### Behavior Methods
- `borrowBook()` → marks the book as borrowed if available  
- `returnBook()` → marks the book as available again  

### Display Method
- `displayInfo()` → shows book information to the user  

---

## Business Rules

- A book can only be borrowed if it is available  
- If the book is not available, an error message must be displayed  
- After borrowing, the book becomes unavailable  
- After returning, the book becomes available again  
- Books are searched using their ISBN  

---

## Main Application Structure

The main program will:

1. Initialize an array with 5 `Book` objects  
2. Ask the user to input an ISBN  
3. Search for the book in the array  
4. Check availability  
5. Borrow the book or show an error message  
6. Exit when the user enters `"0"`  

---

## Execution Flow

1. Start program  
2. Prompt user for ISBN  
3. Read input  
4. Check:
   - If ISBN = `"0"` → exit  
   - If not found → show error  
   - If found:
     - available → borrow  
     - not available → show error  
5. Repeat  

---

## Data Structure

- Static array of 5 `Book` objects  

No dynamic memory or database is used in this stage.

---

## Design Considerations

- Object-Oriented Programming improves organization  
- Encapsulation protects book data  
- Separation of responsibilities simplifies maintenance  
- ISBN ensures unique identification  

---

## Limitations

- Fixed number of books  
- No data persistence  
- No user management  

---

## Future Improvements

- Dynamic book registration  
- User system  
- Borrow history  
- Graphical interface  
