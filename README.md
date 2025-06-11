[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/0vTQr2B2)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=18739647)
# 2024-Lab1: Getting familiar with Unix commands and git

## Solve the following tasks with Unix commands
**1. Log files.** 
 The file `access.log` lists requests to an Apache web server.
 - Requests to the file called `passwd` most likely come from a hacker bot.
   Use `grep` to find out all lines that attempt to access this file (i.e., 
   mention the name of this file). Write down the IP addresses of these 
   requests somewhere.
 - Now use grep to find all requests that come from these IP addresses.
    Write these lines to a file `hacked.log`.
 - Use `wc` to count these requests.
 - Create a new directory `reqs` and move the file `hacked.log` in there.

**2. Genomes.**
 The file `cov2.txt` contains the genome of SARS-CoV-2.
 - Bioinformaticians report that the pattern AAC- - -T is unique to this
    virus (where - can be any letter). Use Unix commands to filter out all
    such patterns, and write them to a file `patterns.txt`.
 - Now filter out all *unique* patterns of this shape, write them into another
   file. How many are there?

## Perform the following changes to the git repository
 - Add the files created before to git, i.e. `reqs/hacked.log`, `patterns.txt`,
    etc, and commit the change.
 - Change the string printed in `hello.c` and commit the change.
 - Copy the file `access.log` to a new file `accesscopy.log`, add it and
    commit the change.
 - Remove the file `access.log` from git.
Push your changes! (You can also push after each sub-task.)

## Small tasks using gcc
 - Compile `hello.c `and run it. Use `-o` to change the name of the executable.
 - Run the executable, using `>` to redirect its output into a file
    `output.txt`. Commit this file to git and push it.
 - Copy `hello.c` to another file, say `hello2.c`.
    In the new file, change the return type of main from `int` to `void`, and
    remove the `return` statement.
    Then compile both versions of the program with and without option `-Wall`.
    Is there any difference in the output of the compiler?

## Basic data types 
- Compile `exint.c` the program should print out the sum of the numbers a = 3, b = 4.5, and c = 5.25. Based on the knowledge of basic data types select the approriate data type for a, b and c.

- Compile `integerex.c`, explain the output in comments and comit.

- Compile `charex.c`, what will happen if you assign the char c = 100? Explain the output in comments and commit.

- Compile `charex1.c`, explain the output in comments and comit.
  
- Compile `floatex.c`, explain the output in comments and comit.
