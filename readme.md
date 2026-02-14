**Hello There!**

**About:**

This header file serves as a cleaner function for the input stream buffer in a universal manner. That means, it will handle any C standard functions that capture and parse user input.

**Why?**

The ultimate goal of this is to make it easily callable anywhere you need in your code, without worrying about
the method you used to handle user inputs. Removing the need to create a custom cleaner for every program and/ormethod.

**Usage:**

There are instructions inside the .h file.

- If the header is placed inside system headers directory:

    #include clean_iobuffer.h;

- If the header is placed inside a /libs in your project's directory:

    #include "clean_iobuffer.h";

- Calling:

    clean_io(<variable_name>);

**Thank You!**
