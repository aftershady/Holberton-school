## init files, variables and expansions

# this directory contain executable script :

0-alias : alias ls="rm *"
define an alias

1-hello_you : echo "hello $USER"
printf string in console

2-path : PATH=$PATH:/action
modifies the PATH environment variable by appending the directory /action to its existing value. This change affects how the system searches for executable files when you run a command from the shell.

3-paths : echo $PATH | tr -s ':' '\n' | wc -l
print path variable & change : by \n & wc numbers of lines

4-global_variables : printenv
printf environement variables

5-local_variables : set
print locales variables

6-create_local_variable : BEST="School"
create a local varialbe

7-create_global_variable : export BEST="School"
creat a environement variable

8-true_knowledge : echo $((128+$TRUEKNOWLEDGE))
add 128 to var

9-divide_and_rule : echo $((POWER/DIVIDE))
divide 2 variables

10-love_exponent_breath : echo $((BREATH ** LOVE))
calculate and print BREATH by the power of LOVE

11-binary_to_decimal : echo $((2$BINARY))
change type of print from base 2 to base 10

12-combinations : echo {a..z}{a..z} | tr " " "\n" | grep -v "oo"
print all combinaisons from aa to zz exept oo and changes spaces by line returns

13-print_float : echo $(printf "%.2f" "$NUM")
printf float number in echo

14-decimal_to_hexadecimal : printf '%X\n' $DECIMAL
print in hexadecimal
