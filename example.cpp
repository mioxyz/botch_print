#include<iostream>


// set if doing development debugging work. Should be unset when testing hot.
#define __BOTCH__

#include "botch_print.hpp" 


int main()
{
   int stuff = 123;

   std::cout << std::endl << "ττ =================================";

   ττ("stuff", stuff);

   std::cout << std::endl << std::endl << "τ ==================================";

   // debug print

   τ "stuff: " τ stuff;

   std::cout << std::endl << std::endl << "print_break ========================";

   print_break(
      for(int k = 3; k > 0; --k) std::cout << std::endl << "count down: " << k;
      throw std::out_of_range("blah")
   );

}

/*
   // ❰ ❱
   // ❬ ❭
   // ❮ ❯
   // ⟦ ⟧ ⟨ ⟩ ⟪ ⟫ ⟮ ⟯ ⟬ ⟭ ⌈ ⌉ ⌊ ⌋ ⦇ ⦈ ⦉ ⦊
   //⧘ ⧙

   #define ｟  try {
   #define  ｠ ;} catch(std::exception& e) { \
                     std::cout << std::endl << " --- PRINT_FAIL ---"\
                     << std::endl << "typeid.name: " << typeid(e).name() \
                     << std::endl << "what: " << e.what()\
                     << std::endl << " --- PRINT_FAIL END ---";\
                     __debugbreak()\
   }
*/
