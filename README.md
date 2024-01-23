# 0x1B. C - Sorting algorithms & Big O

## Background Context

This project is meant to be done by groups of two students. Each group of two should [pair program](https://www.holbertonschool.com/coding-pair-programming-for-holberton-school) for at least the mandatory part.

## Resources

**Read or watch**:

- [Sorting algorithm](https://intranet.hbtn.io/rltoken/-j5MKLBlzZAC2RfJ5DTBIg)
- [Big O notation](https://intranet.hbtn.io/rltoken/WRvrE2BaNVQFssHiUATTrw)
- [Sorting algorithms animations](https://intranet.hbtn.io/rltoken/ol0P7NbYVb5R31iOv4Q40A)
- [15 sorting algorithms in 6 minutes](https://intranet.hbtn.io/rltoken/_I0aEvhfJ66Xyob6dd9Utw) (WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)
- [CS50 Algorithms explanation in detail by David Malan](https://intranet.hbtn.io/rltoken/Ea93HeEYuNkOL7sGb6zzGg)
- [All about sorting algorithms](https://intranet.hbtn.io/rltoken/21X_eaj5RGcLIL9mZv2sqw)

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/b-QhraVUoSGmQ1C4QfNoFw), **without the help of Google**:

### General

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

### Copyright - Plagiarism

- You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the [Betty](https://github.com/alx-tools/Betty) style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like `printf, puts, …` is totally forbidden.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `sort.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.

### GitHub

**There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.**

## More Info

### Data Structure and Functions

- For this project you are given the following `print_array`, and `print_list` functions:

