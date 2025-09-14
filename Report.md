# Report

1. In C, do you use printf or print?

   In C, you use `printf` to print formatted output to the console.

2. What operating system do you use?

   Windows 10 (version 10.0.19045)

3. Explain the `-Wall` option for your C compiler.

   The `-Wall` option enables all the generally useful warnings that the compiler can produce. It helps catch potential bugs and issues in the code by showing warnings for common programming mistakes, unused variables, missing return statements, and other problematic patterns.

    3a. Copy and paste the `SYNOPSIS` section from the gcc manual page (Hint: what is the linux command to get this?). Make sure to use a preformatted text block below

        ```
        gcc [-c|-S|-E] [-std=standard]
            [-g] [-pg] [-Olevel]
            [-Wwarn...] [-pedantic]
            [-Idir...] [-Ldir...]
            [-Dmacro[=defn]...] [-Umacro]
            [-foption...] [-mmachine-option...]
            [-o outfile] [@file] infile...
        ```

4. How would you list all files in a directory using the long format, but exclude the `.`. and `..` file?

    ```console
    $ ls -la | grep -v "^\.$\|^\.\.$"
    ```

5. Complete the table below based on linux permission sets for files.

    | Permission |  Owner             | Group               | World               | Directory? |
    | ---------- | ------------------ | ------------------  | ------------------  | ---------- |
    | -rw-r--r-- | read,write         |  read               | read                |  no        |
    | -rwx------ | read,write,execute |  none               | none                |  no        |
    | -r--r--r-- | read               | read                | read                |  no        |
    | drwxr-xr-x | read,write,execute | read,execute        | read,execute        |  yes       |
    | -rw-rw---- | read,write         | read,write          | none                |  no        |
    | dr-xr-xr-x | read,execute       | execute             | execute             |  yes       |

6. Permissions for files are often set by binary values. For example 111 is read, write, execute. When all of them are converted and put together, that is an octal. For example: `700` is `rwx------` or `644` is `rw-r--r--` (common for web pages).
   Convert the following numeric representation to permissions.

   | Octal |  Binary     | Permission |
   |  ---  |  ---------- | ---------- |
   |  700  |  111000000  | rwx------  |
   |  644  |  110100100  | rw-r--r--  |
   |  444  |  100100100  | r--r--r--  |
   |  622  |  110010010  | rw--w--w-  |
   |  660  |  110110000  | rw-rw----  |
   |  770  |  111111000  | rwxrwx---  |
   |  111  |  001001001  | --x--x--x  |

> While we rarely will deal with permissions in this course, the above was to help you practice thinking about how to represent information.

7. Pick three linux commands. List them below using bullets (inset under this number). In your own words describe what each command does.

   * *example:* `ls` - lists directory contents
   * `cd` - changes the current directory to the specified path
   * `grep` - searches for patterns in text files or input streams
   * `chmod` - changes file permissions for files and directories

8. Fix the following C code. You are free to write a small program to help figure it out.

    ```c
    int input;
    scanf("%d", &input);
    printf("The answer to the question is: %d\n", input);
    ```

9. In line two of the three C code lines above, what is being passed into scanf? Is it the value or is it the address of a memory location?

   In line two, the address of the memory location is being passed into scanf. The `&` operator gets the address of the `input` variable, which is what scanf needs to store the value that the user enters.

10. Thinking back to CS 5001 - you should have briefly covered a linear and binary search algorithms, if you didn't cover them, that is fine!
    
      10a. In your own words describe a linear search algorithm.

      A linear search algorithm goes through each element in a list or array one by one, starting from the beginning, until it finds the target value or reaches the end of the list. It's like looking for a specific book on a shelf by checking each book from left to right until you find the one you want [1].

      10b. In your own words describe a binary search algorithm.

      A binary search algorithm works on sorted data by repeatedly dividing the search space in half. It compares the target value with the middle element, and if they don't match, it eliminates half of the remaining elements and continues searching in the appropriate half. This process continues until the target is found or the search space is empty [2].

      10c. Which one is faster? And is it situational?

      Binary search is generally faster with a time complexity of O(log n) compared to linear search's O(n), but it's situational. Binary search only works on sorted data and requires random access to elements, while linear search works on any data structure and doesn't require sorting. For small datasets, the overhead of sorting might make linear search more practical, but for large sorted datasets, binary search is significantly faster [1][2].
    
> [!IMPORTANT]
  > Whether you covered them or not, I would like you to look up at least two (2) references for them online, and include them in your answer for question 10 using in-text citations.
  
> **Example of in-text citations:**
  > 
  > Strings in C are sequences of characters stored in an array structure, ended by the null terminator [1]. In order to use them, most systems provide access to <string.h> to provide functions such as `strlen()` and `strcpy()` [2].

## Deeper Thinking

Computer science ends up becoming more "exploration" based as you progress. This assignment required a lot of exploration and learning the correct thing to setup / install - which is all unique based on your systems. This is common in the industry, even if it can be frustrating for a student just learning.

Reflect a bit on why that would be the case for computer science? Include in your reflection some "habits" you can develop to help better that process of exploration and learning. Please include at least a paragraph for this reflection. You should not just give your answer with bullet points. Doing so will have it returned. Prose writing is important. While you can include proper use of bullet points in prose, you still need to format your writing as a paragraph!

Computer science becomes increasingly exploration-based as you progress because the field is constantly evolving with new technologies, frameworks, and tools emerging regularly. Unlike more static disciplines, computer science requires practitioners to continuously adapt to changing environments, different operating systems, various programming languages, and diverse development tools. This exploration-driven nature stems from the fact that technology solutions are rarely one-size-fits-all, and what works on one system may not work on another. The industry demands this adaptability because real-world problems often require creative solutions that go beyond textbook examples. To better navigate this exploration process, I can develop several key habits. First, maintaining a systematic approach to problem-solving by breaking down complex issues into smaller, manageable components helps prevent overwhelm. Second, building a strong foundation in fundamental concepts allows for easier adaptation to new technologies. Third, developing effective research skills and knowing where to find reliable documentation and community support is crucial. Fourth, practicing patience and persistence when encountering unfamiliar systems or tools, understanding that initial struggles are part of the learning process. Finally, keeping detailed notes and documentation of solutions found during exploration helps build a personal knowledge base that can be referenced for future similar challenges.

## References

Place your references here using [ACM format](https://www.acm.org/publications/authors/reference-formatting).

>[!TIP]
   > if you are unsure how to format something in ACM, this is a good case of using [claude](https://claude.northeastern.edu/) or other LLM - you can paste it in and ask it to format the link into ACM format. If you can't find all the info, we won't hold you to strict formatting, just a proper attempt.

1. GeeksforGeeks. 2021. Linear Search Algorithm. Retrieved January 15, 2025 from <https://www.geeksforgeeks.org/linear-search/>

2. GeeksforGeeks. 2021. Binary Search Algorithm. Retrieved January 15, 2025 from <https://www.geeksforgeeks.org/binary-search/>

3. GeeksforGeeks. 2025. Strings in C. Retrieved January 15, 2025 from <https://www.geeksforgeeks.org/strings-in-c/>

4. GeeksforGeeks. 2025. C String Functions. Retrieved January 15, 2025 from <https://www.geeksforgeeks.org/string-functions-in-c/>
