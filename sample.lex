%{
/* need this for the call to atof() below */
#include <math.h>
int num_lines = 0, num_chars = 0;
%}

%%
\n      ++num_lines; ++num_chars;
.       ++num_chars;
fin     return 0;
%%
main()
{
yylex();
printf( "# of lines = %d, # of chars = %d\n",
        num_lines, num_chars );
}
