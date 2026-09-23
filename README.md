# Queue Line System

A console-based queue (ticket) management system built with C++ using Object-Oriented Programming (OOP).
Clients take a numbered ticket and wait for their turn. The first client who takes a ticket is the first one served (FIFO).

## Features
- Issue tickets with a prefix and a number (example: A1, A2, A3)
- Each ticket shows: ticket number, issue date and time, number of waiting clients, and expected serve time
- Expected serve time is calculated from the average serve time and the number of waiting clients
- Show who is next in the line
- Serve the next client
- Show queue information: prefix, total tickets, served clients, and waiting clients
- Print the tickets line from right to left and from left to right
- Print all waiting tickets

## Tech
- Language: C++
- Data structures: `queue` for the line and `stack` to reverse the printing order
- OOP concepts: classes and objects, encapsulation, and a nested class (`clsTicket`) inside `clsQueueLine`
- Custom helper classes: `clsDate` and `clsString`

## Project Structure
- `Queue Line.cpp`: main program
- `clsQueueLine.h`: the queue line class and its ticket class
- `clsDate.h`: date and time helper class
- `clsString.h`: string helper class

## How to Run
1. Clone the repository:
   `git clone https://github.com/abdalrhman-atef/Queue-Line-System.git`
2. Open `Queue Line.sln` in Visual Studio.
3. Build and run the project.

## What I Learned
- How the queue data structure works and when to use it
- How to use a stack to reverse the order of a queue
- How to design a class with a nested class and clear responsibilities

## Author
Abdelrhman Atef
LinkedIn: https://www.linkedin.com/in/abdalrhman-atef-6a5080375
