#ifndef __BOTCH_PRINT__
   #define __BOTCH_PRINT__

   #ifdef __linux__
      #define __debugbreak() // msvc specific
   #endif

   //simple debug print macros
   #ifdef __BOTCH__

      // a simple single charater symbol with a sneaky semi-colon

      #define τ ; std::cout << std::endl <<


      // a bit more verbose than normal tau print:

      #define ττ(n,v) std::cout       \
         << std::endl << n            \
         << ": »" << v                \
         << "«; typeid(:).name: »"    \
         << typeid(v).name() << "«"; //


      // try to do something, then break and print some info.

      #define print_break(stuff)                                     \
      try {                                                          \
         stuff ;                                                     \
      } catch(std::exception& e) {                                   \
         std::cout << std::endl << " { PRINT_BREAK"                  \
         << std::endl << "typeid.name: »" << typeid(e).name() << "«" \
         << std::endl << "what: " << e.what()                        \
         << std::endl << "   PRINT_BREAK }";                         \
         __debugbreak();                                             \
      } // ----------------------------------------------------------\
      
   #else

      // this is... yes.
      #define τ PLEASE REMOVE ALL TAU PRINTS BEFORE BUILDING RELEASE
      #define ττ PLEASE REMOVE ALL TAU PRINTS BEFORE BUILDING RELEASE
      #define print_break(stuff) PLEASE REMOVE ALL TAU PRINTS BEFORE BUILDING RELEASE

   #endif

#endif
