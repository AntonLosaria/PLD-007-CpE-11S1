#include <stdio.h>

int main(void)
{

int xValue=5;

int yValue=9;

int result;

int bigResult;

xValue += 3; //8
yValue -= xValue; //1
result = xValue * yValue; //8
result += result; //16
result-=1; //15
yValue=result%result; //0
result += (result + xValue); //15+(15+8) 
bigResult = result *result * result; //54872
result = result + (xValue * yValue); //38 + (8 * 0)

 /*  

increment xValue by 3 

decrement yValue by xValue 

multiply xValue times yValue giving result 

increment result by result 

decrement result by 1 

assign result modulo result to yValue 

increment result by result added to xValue 

assign result times result times result to bigResult  increment result by xValue times yValue 

*/

 

printf("result: %d\n", result);

printf("big result: %d\n", bigResult);

return 0;

}
