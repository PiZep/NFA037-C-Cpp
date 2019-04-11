#include <stdio.h>

int main() {
	enum colors     {Green,         White,          Red         };
	enum colors2    {Green2 = 'A',  White2 = 'B',   Red2 = 'C'  };

	int i;

	printf("Enum value for Green, in colors:\t%d\t and in colors2:\t%c\n", \
			Green, Green2);
	return 0;
}
