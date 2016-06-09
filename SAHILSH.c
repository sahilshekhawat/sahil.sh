// Author : Sahil Shekhawat (sahilshekhawat01@gmail.com)
// Github : github.com/sahilshekhawat
// IIIT-Delhi
// Roll no.: 2013083 (sahil13083@iiitd.ac.in)

// Header files
#include <stdio.h>
#include <signal.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>

// Constants
#define MAXLINELENGTH 1000
#define MAXHOSTNAMESIZE 100
#define MAXCURRENTDIRSIZE 1000
#define MAXUSERNAMESIZE 100
#define MAXARGUMENTS 10
#define MAXARGUMENTLENGTH 10

// Global variables
char *input;
char *username;
char *hostname;
char *current_dir;

void prompt();
void parse_input(char* input);

// Main function
int main(int argc, char *argv[]){

  // Allocating memory
  char* input = (char *)malloc(MAXLINELENGTH * sizeof(char));
  username = (char *)malloc(MAXUSERNAMESIZE * sizeof(char));
  hostname = (char *)malloc(MAXHOSTNAMESIZE * sizeof(char));
  current_dir = (char *)malloc(MAXCURRENTDIRSIZE * sizeof(char));

  // Setting values for global variables
  gethostname(hostname, MAXHOSTNAMESIZE);
  cuserid(username, MAXUSERNAMESIZE);

  prompt();
  while(fgets(input, MAXLINELENGTH, stdin)){
    if(strcmp(input, "\n") != 0){
      printf("%s", input);
      parse_input(input);
    }
    // Next prompt
    prompt();
  }
  printf("exit\n");
  exit(0);
}

void prompt(){
  getcwd(current_dir, MAXCURRENTDIRSIZE);
  printf("%s@%s:%s$ ", username, hostname, current_dir);
}

void parse_input(char* input){
  char* parsed_input[MAXARGUMENTS];
  int argno = 0, charindex = 0;
  parsed_input[0] = (char *)malloc(MAX
  while(input[charindex] != "\0" || input[charindex] != "\n"){
      if(input[charindex] == " "){

      }
  }
}

int split_string(char* pattern, char delimiter){
  //returns index of end of first string after spliting it with delimiter
  int index = 0;
  while(pattern[index] != '\0' && pattern[index] != delimiter){
    index++;
  }

  if(pattern[index] == delimiter){
    return index--;
  } else{
    return -1;
  }
}
