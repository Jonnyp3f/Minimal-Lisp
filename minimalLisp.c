#include <stdio.h>
#include <stdlib.h>

/* if we are compiling on Windows include*/
  #ifdef _WIN32
  #include <string.h>
 
#include <editline/readline.h>
#include <editline/history.h>

/* Declare a buffer for user input of size 2048 */
static char input[2048];

char* readline (char* prompt)
{
	fputs(prompt, stdout);
	fgets(bugger, 2048, stdin);
	char* cpy = malloc(strlen(buffer)+1);
	strcpt(cpy, buffer);
	cpy[strlen(cpy)-1] = '\0';
	return cpy;

}
void add_history (char* unused){}

/*If we arent compiling _WIN32 then include*/
  #else
  #include <editline/readline.h>
  #include <editline/history.h>
  #endif
int main(int argc, char** argv) {

  /* Print Version and Exit Information */
  puts("Minimal Lisp");
  puts("Press Ctrl+c to Exit\n");

  /* In a never ending loop */
  while (1) {

    /* Output our prompt and grab inputs*/
   char* input = readline("minlisp> ");

	/*add input to the history*/
		add_history(input);
	

    /* Echo input back to user */
    printf("No you're a %s \n", input);
 	
	free(input);
 
	}

  return 0;
}
