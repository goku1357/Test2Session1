#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  scanf("%f %f %f %f %f %F",x1,x2,x3,y1,y2,y3);
}


int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  int istriangle;
  float a=(x1*(y2-y3));
  float b=(x2*(y3-y1));
  float c=(x3*(y1-y2));
  float d=a+b+c;
  float area=1/2*d;
  if(area==0)
  {
    istriangle=1;
  }

  
  else
  {
    istriangle=0;
  }
  return istriangle;
}

void output(int istriangle)
{
  if (istriangle==0)
  {
    printf("it is not triangle");
  }
  else if(istriangle==1)
  {
    printf("its a triangle");
  }

}

int main()
{
  float x1,y1,x2,y2,x3,y3;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  float istriangle;
  istriangle=is_triangle(x1,y1,x2,y2,x3,y3);
  output(istriangle);
}