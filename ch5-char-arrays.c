char month[10]; // Defines a character array
char month[10] = "January"; // Defines a character array and assigns a string to it.

/* If you define a character array and initialize the array at the same time,
   you do not have to put the number in brackets.
   
   This:
   char month[8] = "January";

   Is the same as:
   char month[] = "January";

   C counts the number of characters in January and adds one for the null zero.

   You cannot however store a longer string in month later. In order to store
   a longer variable later you would need to define and initialize with room
   to spare like so:

   char month[25] = "January";
   */

