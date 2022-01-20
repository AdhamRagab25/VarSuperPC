#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "var_asm.h"

#define INSTR_COUNT 11

char *INSTRUCTIONS[11] = {"LD", "ST", "MV", "OR", "AND", "XOR", "ADD", "SHR", "SHL", "BR", "CMP"}; 

int main(int argc, char **argv){

  var_asm(argc, argv);

  return 0;
}

int var_asm(int cmd_arg_count, char **cmd_args){
  //As of right now, var_asm will only print out the name of the instruction inserted into command line and will return an error code of 0. 
  //Otherwise, on invalid input, it will return error message and error code of 1.


  if (cmd_arg_count != 2) {
    printf("Invalid Input. Usage: ./var_asm instr\n");
    return 1;
  }
  for (int i = 0; i < INSTR_COUNT; i++){
    if (strcmp(INSTRUCTIONS[i], cmd_args[1]) == 0) {
      printf("COMMAND: %s\n", cmd_args[1]);
      return 0;
    }
  }
  printf("Invalid Instruction\n");
  return 1;
}