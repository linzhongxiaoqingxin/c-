#include <stdio.h>
#include <stdlib.h>
#include <iostream.h> 
#define NUM_START 100
#define NUM_END 10000
#define MAX_LINE_NUMS 5 
int isPrime( unsigned int val ){
unsigned int i;
for( i=2; i<=(val/2); i++ ){
if( val % i == 0 ) return 0;
}
return 1;
}

int main( void ){
unsigned int num, cnt=0;
for( num= NUM_START; num<=NUM_END; num++ ){
if( isPrime( num ) ) {
printf( "%u, ", num ); //输出素数的值
cnt++;
//以下判断是否需要另起新行输出
if( cnt % MAX_LINE_NUMS == 0 ) printf( "\n" );
}
}
printf( "\n" );
return 0;
}
