# Flight Booking System
## Task ##
Develop a console-based airplane ticket booking system. The system should read input
configuration from a text file and allow users to book tickets via a command-line user interface.
Emphasis should be placed on encapsulating the data and behavior within well-organized classes.
!Attention!
The config file during passing the assignment will be different to what is mentioned in this
document. New config file will contain more flights, rows inside a flight, different prices for
different rows etc.
## Requirements ##
1. Class Decomposition:
o Create a class for representing an Airplane with attributes like the number of
seats, seat availability, and any other relevant information.
o Create a class for representing a Ticket with attributes like passenger name, seat
number, flight information, and booking status.
o Encapsulate the data members in these classes using appropriate access specifiers
(e.g., private or protected).
o Define clear responsibilities for each class. For example, the Airplane class
should manage seat availability and bookings, while the Ticket class should
handle ticket-related information.
2. Input Configuration (see example below):
o Read the input configuration (e.g., airplane details, flight data) from a text file.
o Encapsulate the logic for reading and processing this configuration in a separate
class to keep the main program clean.
3. Command-line Interface:
o Develop a user interface that allows users to perform the following commands:
▪ Check seat availability.
▪ Book a ticket.
▪ Return a ticket.
▪ View booked tickets.
o Each of these commands should be implemented as methods in the main program,
which interact with the Airplane and Ticket classes.
4. Encapsulation:
o Ensure that the Airplane and Ticket classes encapsulate their data members and
provide public methods to interact with them. For instance, booking a ticket
should be done through a method in the Airplane class that ensures the
encapsulated seat availability data is updated correctly.
5. Data Validation:
o Implement data validation within the classes. For example, when booking a ticket,
validate that the requested seat is available.
6. File Handling:
o Encapsulate file reading operations in a separate class (e.g., FileReader) to
promote encapsulation and separation of concerns, also to allow working with
different file formats in the future by replacing only 1 class in the code.
7. Error Handling:
o Implement error handling to gracefully handle situations like invalid input or file
not found errors.
8. Documentation / theory learning:
o Include clear comments and documentation to explain how encapsulation
principles are applied within the project.
## Task milestones ##
1. Design your system on the paper or by using some online tools, please use squares and
arrows to draw classes and their relations, no specific notation is needed in this task, think
in advance how would your system look like.
2. Implement the I/O system to parse input file, create a class for user input processing
3. Implement logic to book the ticket, create appropriate classes and relations between them,
consider effective data structures
4. Implement logic to view booking results
5. Test the solution, develop your own input data files
## Control questions ##
1. Explain data abstraction and encapsulation programming technique.
2. What is an interface?
3. Which access specifiers do you know?
4. What is the difference between struct and class in C++?
5. What is this pointer?
6. How can you initialize fields in the object?
7. What is constructor?
8. What is destructor?
9. What is a friend class?
10. What is const member function?
11. What does mutable data member?
12. What is objects composition?
## Evaluation ##
- Encapsulation and data abstraction
principles usage: 3
- Correct view functionality and optimal
data structures usage: 3
- Effective memory usage: 1
- System design (test description, photo of
your notes or some diagrams): 1
- Git (3+ meaningful commits): 1
- Extra: RAII wrapper around system file
calls (winapi/posix): 1
