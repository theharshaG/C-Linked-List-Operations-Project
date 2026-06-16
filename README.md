# C-Linked-List-Operations-Project

## Overview

This repository contains a menu-driven Linked List project developed in C. The project demonstrates dynamic memory allocation and basic linked list operations using structures and pointers.

This project helps in understanding:

- Linked List fundamentals
- Dynamic memory allocation
- Node insertion and deletion
- Searching techniques
- Traversing linked lists
- Memory management using `malloc()` and `free()`

The project is useful for:

- Beginners learning Data Structures
- College laboratory exercises
- DSA interview preparation
- Logic-building practice
- Understanding pointers deeply

---

## Features Included

### 1. Insert at Beginning

This feature inserts a new node at the beginning of the linked list.

#### Example

```text
Enter data:
10

Inserted
```

#### Concepts Used

- Dynamic memory allocation
- Pointer manipulation
- Head node update

---

### 2. Insert at End

This feature inserts a node at the end of the linked list.

#### Example

```text
Enter data:
20

Inserted
```

#### Concepts Used

- Traversing list
- Tail insertion
- Node linking

---

### 3. Delete Node

Deletes a node by searching its value.

#### Example

```text
Enter value to delete:
20

Deleted
```

If value is not available:

```text
Value Not Found
```

#### Concepts Used

- Node deletion
- Pointer redirection
- Memory release using free()

---

### 4. Search Node

Searches for a node and displays its position.

#### Example

```text
Enter value to search:
15

Found at position 2
```

If not found:

```text
Not Found
```

#### Concepts Used

- Linear search
- Traversal
- Position tracking

---

### 5. Count Nodes

Counts total nodes present in the linked list.

#### Example

```text
Total Nodes: 5
```

#### Concepts Used

- Traversing linked list
- Counting logic

---

### 6. Display Linked List

Displays all elements stored in the linked list.

#### Example

```text
10 -> 20 -> 30 -> NULL
```

#### Concepts Used

- Traversal
- Pointer movement

---

### 7. Free Memory and Exit

Before exiting, all dynamically allocated memory is released.

#### Example

```text
Exit
```

#### Concepts Used

- Memory cleanup
- Avoiding memory leaks

---

## Technologies Used

- C Programming Language
- GCC Compiler
- VS Code
- CodeBlocks
- Turbo C

---

## Project Structure

```text
c-linked-list-project/
│
├── linked_list.c
└── README.md
```

---

## How to Compile

Compile:

```bash
gcc linked_list.c -o linkedlist
```

Run:

```bash
./linkedlist
```

---

## Sample Program Flow

```text
===== LINKED LIST =====

1.Insert Beginning
2.Insert End
3.Delete Node
4.Search Node
5.Count Nodes
6.Display
7.Exit

Enter choice: 1

Enter data:
10

Inserted
```

---

## Learning Outcomes

After completing this project, you will understand:

- Linked List structure
- Dynamic memory allocation
- Node insertion techniques
- Node deletion logic
- Traversing nodes
- Pointer operations
- Memory management

---

## Future Improvements

Possible future additions:

- Insert at Position
- Delete by Position
- Reverse Linked List
- Sort Linked List
- Doubly Linked List
- Circular Linked List
- Save data to file

---

## Author

**Harsha G**

Learning:

- C Programming
- Data Structures
- Embedded Systems
- Embedded C
- Problem Solving
