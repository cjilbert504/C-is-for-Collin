# C is for Collin
Me learning C

## What I'm using to learn as of June 2023

I am reading the third edition of "C Programming - Absolute Beginners Guide" by
Greg Perry and Dean Miller. I purchased this book used for around $11.

### Changes / Workarounds / Notes from the book
So far everything in the book has worked for me. I'm on a 2019 Mac running
Ventura 13.4 currently. The book suggests using an IDE called "Code::Blocks" to
write and compile the C code. I didn't do this. I'm using my normal Vim setup
and compiling my code with `gcc`. I don't remember how I figured out to do it
exactly but pretty sure it was just from some Google-Fu. But to save you the
trouble here is what I do:
```bash
gcc my-c-code-file.c -o name-of-resulting-executable

As a more practical example:
gcc hello-world.c -o hello-world

or:
gcc hello-world.c -o hey
```

In the ending program for Chapter 6 there is an error in the program, at least for
me there was when I went to compile it. I thought it would blow up because the
authors never showed that assigning a string to a variable was possible this way:
char Hero3 = "Batman";
Sure enough it is not. I fixed it in the following way:
char Hero3[] = "Batman";

### Interesting Tidbits
- Apparently floating point numbers consume nearly twice as much memory as integers.
- Both 'X' and "X" have a length of one, however, because all strings get a
    null zero added to the end of them the "X" consumes two characters of
    memory. A bit of clarity here: 'X' is a character and "X" is a string.
- To assign a string to a variable you use a character array. You must
    reserve enough character array space to hold the longest string you will
    need to hold, plus the string terminator (null zero) 🤯.
