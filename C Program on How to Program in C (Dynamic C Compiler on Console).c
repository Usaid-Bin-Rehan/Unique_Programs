// C Program on How to Program in C AND Console turned into Dynamic C Compiler //

#include <stdio.h>
#include <conio.h>

void compare(char original[], char input[])
{
	
	if( strcmp(original,input) != 0 )
	{
		printf("\nPlease restart the program and type correctly\n");
	}
	
}

int main()
{
	char h_o[] = "#include <stdio.h>";
	char h_i[19];
	printf("ENTER '#include <stdio.h>' : ");
	gets(h_i);
	compare(h_o,h_i);
	
	char m_o[] = "int main() {";
	char m_i[19];
	printf("ENTER 'int main() {' : ");
	gets(m_i);
	compare(m_o,m_i);
	
	char i_o[] = "int a=2, b=3, c=0;";
	char i_i[19];
	printf("ENTER 'int a=2, b=3, c=0;' : ");
	gets(i_i);
	compare(i_o,i_i);
	
	char s_o[] = "c = a + b;";
	char s_i[19];
	printf("ENTER 'c = a + b;' : ");
	gets(s_i);
	compare(s_o,s_i);
	
	char o_o[] = "return c;";
	char o_i[19];
	printf("ENTER 'return c;' : ");
	gets(o_i);
	compare(o_o,o_i);
	
	char b_o[] = "}";
	char b_i[19];
	printf("ENTER '}' : ");
	gets(b_i);
	compare(b_o,b_i);
	
	printf("\nProcess exited after 42.3 seconds with return value 5\nPress any key to continue. . .\n\n\n");
	
	getch();
}

