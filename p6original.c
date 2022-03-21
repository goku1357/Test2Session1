#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  scanf("%s",a);
  
}
int str_reverse(char *str, char *fnd)
{
	scanf("%s",str);
	scanf("%s",fnd);
	char *opt;
	opt=strstr(str,fnd);
	return opt;
}
void output(char *opt,char *str)
{
  printf("%ld",opt-str);
  
}
int main()
{
	char *str;
  input_string(str);
  char *fnd;
  input_string(fnd);
  char *opt=str_reverse(str,fnd);
  output(opt,str);
}
