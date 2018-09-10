#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)


{


int *data; 


  const int datacount = 50;
  
  data = malloc(sizeof(int) * datacount); 
  
  if (!data) { 
    perror("Error allocating memory");
    
    abort();
  }
  
 
  memset(data, 0, sizeof(int)*datacount);
  data[0]=1;
  data[2]=15;
  data[49]=66;
  for(int i=0;i<datacount;++i)
  {
  printf("Elements %d:%d\n",i,data[i]);
  }
  }

 
