#ifndef DELETE_REPEATS_HPP_INCLUDED
#define DELETE_REPEATS_HPP_INCLUDED
/*****************************************************************************
* Precondition: Array of char                                                *
* Postcondition: Smart pointer to an array that has all of the repeated      *
*                elements from the passed array deleted                      *
******************************************************************************/
std::unique_ptr<char[]> deleteRepeat(char arrayOfChars[])
{
   // Create the unique pointer to a dynamically allocated array
   std::unique_ptr<char[]> charPtr(new char[3]);

   // How to create range based for loops?
   for(int i = 0; i < 3; ++i)
   {
      for(int j = 0; j < 10; ++j)// How can we get access to SIZE
      {
         if (arrayOfChars[j] != charPtr[i])
         {
            charPtr[i] = arrayOfChars[j];
         }
      }
   }
   // Return the array
   return charPtr;
}
#endif
