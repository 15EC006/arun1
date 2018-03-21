#include<stdio.h>
int main ()
{
  char ap;
 
  printf ("Enter a character :");
  scanf ("%c", &ap);
  
  if((ap>='a'&& ap<='z')||(ap>='A'&& ap<='Z'))
  {
  printf("Entered character %c is an Alphabet");
  }
  else
  {
  printf("Entered character %c is not an Alphabet");
  }
  return 0;
}
