# calcupiler

A Compile Time Math API

This project has just started and will be extended over time.

I use Visual Studio for coding and debugging and GCC as compiler.

Important Note!

You need a compiler with the minimum support of C++20

GCC > 8 should do it.

if you get compile time out of memory exception consider increasing the memory depth of constexpr with the option -fconstexpr-depth
e.g. -fconstexpr-depth=1024