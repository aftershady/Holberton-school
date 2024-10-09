## hello world

# this directory contain script bash relative to gcc and projects in C

# scripts

0preprocessor : gcc E $CFILE  c
1compiler : gcc c $CFILE  $CFILE.o
2assembler : gcc S $CFILE  $CFILE.s
3name : gcc o $CFILE  cisfun


# C code

4puts.c

puts("\"Programming is like building a multilingual puzzle");
//display text in console by puts command

5printf.c

printf("with proper grammar, but the outcome is a piece of art,\n")
//display text in console by printf command

6size.c

display size of char, int, long int, long long int, float with the commands printf and sizeof
