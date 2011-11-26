// includes
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <signal.h>
#include <assert.h>

// defines
#define yes 1
#define no  0
#define easy_come   0
#define easy_go     1
#define little_high 2
#define little_low  3

// types
typedef int is;
typedef char up;

struct look {
  char k;
};

// globals
char title[25];
int real_life, fantasy;
int This, poor_boy=101, mama=1;
look l[1][1];
int galileo, figaro, magnifico;
int thunderbolt=0, lightning=1;

// methods
void caught_in( char *t )
{
  int count = strlen(t);
  title[0] = 55 + count;
}
 
int reality() {
  title[1] = 'o';
  return yes;
}
	
void and_see(char c)
{
  title[2] = c;
}

void wind_blows(int a)
{
  title[3] = a;
}

void begin(int l)
{
  title[4] = l*100+9;
}

int pull(int t)
{
  title[5] = t+96;
  return 1;
}

void as_if(char *c)
{
  int count = strlen(c);
  title[6]=count+75;
  title[7]=c[0];
  title[8]=' ';
}

void ic(char *c)
{
  title[9] = toupper( c[2]-1 );
}

void scaramouche(char c, int a)
{
  title[10+a]=c;
}

void fandango() {}

void so_you_think(char *c, int a)
{
  if(a==0)
	 title[12+a]='p';
  else
	 title[12+a]='s';
}

void just_gotta( char *c )
{
  if( strlen(c) < 10 )
	 title[14] = c[4];
  else
	 title[15] = c[13];
}

void done()
{
  title[16] = 'y';
  printf("%s\n",title);
}

