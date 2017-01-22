// Orion Davis 3003072
// The University of Akron, CS II
// ASSGN1-A Delete Repeat

#include <iostream>
#include <memory>

#include "delete_repeats.hpp"
#include "constants.hpp"

using constants::SIZE;
using std::unique_ptr;

unique_ptr deleteRepeat(char[]);

int main()
{
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

   noRepeats

}
