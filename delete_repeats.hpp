#ifndef DELETE_REPEATS_HPP_INCLUDED
#define DELETE_REPEATS_HPP_INCLUDED
/*****************************************************************************
* Precondition:  Array of char                                               *
* Postcondition: Smart pointer to an array that contains the unique values   *
*                of the passed array                                         *
******************************************************************************/
std::unique_ptr<char[]> deleteRepeat(char arrayOfChars[])
{
   // Create a unique_ptr to a new dynamic array of chars
   std::unique_ptr<char[]> charPtr(new char[3]); // How to determine how many elements in the array you need without hard coding it

   // Move through the passed array to determine what elements to add to the new array
   int j = 0;
   for(int i = 0; i < 10; ++i)
   {
         if ((arrayOfChars[i] != charPtr[0]) && (arrayOfChars[i] != charPtr[1]) && (arrayOfChars[i] != charPtr[2]))
         {
            charPtr[j] = arrayOfChars[i];
            j++;
         }
   }
   return charPtr;
}
#endif
