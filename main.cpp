// Orion Davis 3003072
// The University of Akron, CS II
// ASSGN1-A Delete Repeat

// INCLUDED FILES AND LIBRARIES
#include <iostream>
#include <memory>

#include "delete_repeats.hpp"
#include "constants.hpp"

// FUNCTIONS
std::unique_ptr<char[]> deleteRepeat(char[]);

int main()
{
   using std::cout;
   using std::endl;
   //using constants::SIZE

   // This array will be passed into the function and edited
   char originalArray[SIZE];
   originalArray[0] = 'a';
   originalArray[1] = 'b';
   originalArray[2] = 'b';
   originalArray[3] = 'c';
   originalArray[4] = 'a';
   originalArray[5] = 'c';
   originalArray[6] = 'a';
   originalArray[7] = 'c';
   originalArray[8] = 'b';
   originalArray[9] = 'c';

   // Displaying the array before
   cout << "Before: ";
   for(int i = 0; i < SIZE; ++i)
   {
      cout << "[" << originalArray[i] << "] ";
   }
   cout << endl;

   // noRepeats is a unique_ptr returned from the funciton call
   std::unique_ptr<char[]> noRepeats(deleteRepeat(originalArray));

   // Display the new array
   cout << "After: ";
   for(int i = 0; i < 3; ++i)
   {
      cout << "[" << noRepeats[i] << "] ";
   }
   cout << endl;
   return 0;
}
