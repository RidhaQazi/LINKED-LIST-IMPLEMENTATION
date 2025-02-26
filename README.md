# LINKED-LIST-IMPLEMENTATION

COMPANY: CODETECH IT SOLUTIONS

NAME: RIDHA QAZI

INTERN ID: CODHC68

DOMAIN: C PROGRAMMING

DURATION: 4 WEEKS

MENTOR: NEELA SANTOSH

A linked list is one of the most fundamental data structures in programming, offering a way to store and manage data dynamically. Unlike arrays, which require a fixed block of memory, linked lists allow elements to be added or removed efficiently without shifting other elements. A linked list is a way to store data where each item (called a node) is connected to the next one.

For this task, I created a C program that implements a singly linked list with essential operations such as inserting nodes at the beginning and end, deleting specific nodes, and displaying the list's contents. To develop this program, I used Visual Studio Code as my coding environment, mainly because of its user-friendly interface and built-in debugging tools. I compiled and executed the program using the GCC compiler on a Windows OS.

The program follows a menu-driven approach, allowing the user to interactively add, delete, and view nodes in the linked list. The core of the implementation is a structure (struct Node), where each node contains an integer value and a pointer to the next node. I broke down the functionality into modular functions for clarity and efficiency. The addAtStart() function adds a new node to the beginning by dynamically allocating memory using malloc() and linking it correctly. The addAtEnd() function, on the other hand, traverses the list until it finds the last node and links the new node at the end. The delete() function removes a specific node, ensuring that the list remains properly linked afterward. If the node to be deleted is the first node, the head pointer is updated; if it’s somewhere in the middle or end, the previous node’s pointer is adjusted. The display() function prints all the nodes in the list, making it easy to visualize how the data is stored. To prevent memory leaks, I implemented a freeMemory() function that deallocates all dynamically allocated memory when the program exits. Throughout the development process, I handled several edge cases, such as deleting from an empty list, deleting the only node in the list, and trying to remove a value that doesn’t exist. I tested the program thoroughly by inserting and deleting multiple values in different sequences to ensure that all operations worked as expected.

## See task2.txt as an example

Beyond just coding, working on this project helped me appreciate how linked lists form the backbone of many real-world applications. They are widely used in dynamic memory management, undo/redo functionality in applications, file systems, and networking algorithms. Many programming concepts, such as stacks, queues, and even graph structures, are built using linked lists. Additionally, operating systems rely on linked lists for process scheduling, memory allocation, and file directory management. By completing this task, I deepened my understanding of pointers, memory management, and efficient data structures, which are essential for writing optimized code. This project not only reinforced my grasp of linked lists but also highlighted how fundamental they are in software development, forming the basis for more advanced data structures and algorithms used in everything from databases to operating systems.

## Output

