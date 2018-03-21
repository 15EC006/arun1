#include<stdio.h>
int main ()
{
  char c;
  int caps,small;
  printf ("Enter a character :");
  scanf ("%c", &c);
  caps=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
  small =(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
  if(caps||small)
  {
  printf("Vowel");
  }
  else
  {
  printf("Consonant");
  }
  return 0;
}
