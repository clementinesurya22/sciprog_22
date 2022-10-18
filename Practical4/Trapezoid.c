#include<stdio.h>
#include<math.h>

float degtorad(float degang);
float traprule(int N, float TanArr[N+1]);

int main(){
  int N=12,i;
  float TanArr[N+1],deg,rad;

  // Calculate the values of f(xi) where i = 0,...,12
  // and xi are in radians (as array elements)
  for (i=0;i<=N;i++){
    deg=i*5.0;
    rad=degtorad(deg);
    TanArr[i]=tan(rad);
    printf("TanArr[%d]=%f (f(x) at x=%d)\n",i,TanArr[i],i);
  }

  float area = traprule(N,TanArr);
  

  // Approximated result
  printf("\nTrapezoidal result is: %f\n",area);
  // Actual result
  // Integral of tan is ln(2)
  printf("Real result is: %f\n", log(2.0));

  return 0;
 }

 float degtorad(float degang){
  return ((M_PI * degang)/180.0);
 }
 
 float traprule(int N, float TanArr[N+1])
{

  float area;
  int i;
  // Find the area by trapezodial rule
  area = TanArr[0] + TanArr[N];
  // Calculate the area at pts x1, x2, ..., x11 and add them up
  // as in the formula using loops
  for (i=1;i<N;i++)
  {
    area=area+2.0*TanArr[i];
  }

  // Multiply area by (pi/3)/2(12) after converting it to radians
  float mult_rad = degtorad((60.0 - 0.0)/(2*N));
  area = mult_rad * area;

  return area;
  }
