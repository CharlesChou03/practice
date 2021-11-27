#include <stdio.h>
#include <stdlib.h>

struct commands
{
  void (*fptr) ();
  int key;
};
typedef struct commands commands;


void do_a(void), do_b(void), do_c(void);

int main()
{
  char ch, key;

  commands commandlist[] =
  {
    {do_a, 'a'},
    {do_b, 'b'},
    {do_c, 'c'},
    {NULL, '\0'}
  };
  commands *commandPtr;
    
  while (1)
  {
    scanf("%c", &ch);
    if (ch == 'q')
      break;

    commandPtr = commandlist;
    while(commandPtr->key) {
        key = commandPtr->key;
        if (ch == key)
        {
            commandPtr->fptr();
            break;
        }
        commandPtr++;
    }
  }

  return 0;
}


void do_a()
{
  printf("你按了 a 這個鍵\n");
}

void do_b()
{
  printf("你按了 b 這個鍵\n");
}

void do_c()
{
  printf("你按了 c 這個鍵\n");
}
