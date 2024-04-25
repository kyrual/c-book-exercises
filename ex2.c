#include <stdio.h>

/*
“Exercise 1-2.
Experiment to find out what happens when printf’s argument string contains \c, where c is some character not listed above.”
*/

main(){
printf("hello??? \n");
printf("i'm testing out\t \\characters"); //\t - tab
printf("this is b fo\br backspace "); //b - backspace
printf("what is \" double quote \"mean\""); //\" - double quote
printf("back\\slash its\\elf"); //\\ - backslash
}