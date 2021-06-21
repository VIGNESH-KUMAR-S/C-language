# Library in C
- In general, library contains set of resources to study.
- Also, In C language **library contains set of codes that may be a function, variable, etc,**.
- It helps us to avoid timings to write a program.

### Two types of libraries in C language
  1. Static Library
  2. Shared Library (Dynamic Library)

## Static Library
- Static library is a file contains a **collection of object files**, that are linked during linking phase.

![](https://res.cloudinary.com/practicaldev/image/fetch/s--m6UdcE24--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/i/l38vk6qbwisj20wzcbjz.PNG)

- It's recommended to use **`lib`** in prefix.
- Extension is **`.a` or `.lib`**

### Creation of static library

**` gcc -c *.c`**
or
**` gcc -c name1.c name1.o`**
**` gcc -c name2.c name2.o`***

- The flag c (-c) is for **Compile and Assemble but don't line**.
- Now we have multiple object files.
- We have to bundle all these object files in one static library.

**`ar -rcs lib_name.a *.o`**

- Flag r (-r) used to insert object files or to replace the existing object file with new object file in the library.
- Flag c (-c) used to create the **lib_name.a** library if it's not present.
- Flag s (-s) acting as **ranlib**.

- Now we want to use the created libraries

**`gcc -o output main.o -L. -l_name`**
or
**`gcc -o output main.o -L. lib_name.a`**

- Flag L (-L) used to specify the path, here (`.` representing current directory).
- Flag l (-l) used to omit the prefix and suffix of library name.

- Now run the program => **`./output`**

# Resource
[Static libraries](https://dev.to/iamkhalil11/all-you-need-to-know-about-c-static-libraries-1o0b)
