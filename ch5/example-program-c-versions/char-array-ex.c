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

/* If we wanted to assign a new string to the month variable from above, we
   would either have to assign it one element at a time and add the null zero
   like this:

   month[0] = 'J'; // note the use of characters(single quotes) vs a string
   month[0] = 'u'; // (double quotes). This will save on memory as it only
   month[0] = 'n'; // consumes one space vs the two spaces a one character
   month[0] = 'e'; // string would consume bc of the added null zero!

   Or we would have to use the strcpy() function like this:

   strcpy(month, "April"); // Puts new string in month array
   */
   

