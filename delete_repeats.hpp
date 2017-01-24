#ifndef DELETE_REPEATS_HPP_INCLUDED
#define DELETE_REPEATS_HPP_INCLUDED
/*****************************************************************************
* Precondition:  Array of char                                               *
* Postcondition: Smart pointer to an array that contains all unique values   *
******************************************************************************/
std::unique_ptr<char[]> deleteRepeat(char arrayOfChars[])
{
   // Create the unique pointer to a dynamically allocated array
   std::unique_ptr<char[]> charPtr(new char[3]);

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
