# Movie Collection Project

## Introduction

The "Movie Collection" project is a simple command-line application developed in C++ using object-oriented principles. The purpose of this project is to provide a user-friendly interface for managing a personal collection of movies. Users can add, edit, and delete movies from their collection, as well as search for specific movies.

## Objectives

The main objectives of this project are:

* To create a user-friendly interface for managing a movie collection.
* To implement basic object-oriented programming concepts like classes and objects.
* To provide functionalities for adding, editing, and deleting movies.
* To allow users to search for movies based on title.

## File Structure

The project consists of three main files:

* `Movie.h`: The header file that defines the `Movie` class, including its properties and method declarations.
* `Movie.cpp`: The implementation file that contains the logic for the `Movie` class's constructor and other functions.
* `main.cpp`: This is the main driver file. It uses the `Movie` class to create the database, handle user input, and manipulate the movie collection.

## Features

Using this program, you can:

1.  Access and display the movie database.
2.  Change data (like earnings or watch count) for a movie in the database.
3.  Add new movies to the database.
4.  Search for a particular movie by its name.
5.  Delete the entire database and start fresh.

## How to Compile and Run

To compile and run the program:

1.  Download all three `.cpp` and `.h` files into the same folder.
2.  Open a terminal or command prompt in that folder.
3.  Compile the project by running the following command:

    ```bash
    g++ main.cpp Movie.cpp -o main
    ```

4.  Once it's compiled, run the executable file:
    * On Windows: `.\main.exe`
    * On macOS/Linux: `./main`

---

Thanks for reading!
