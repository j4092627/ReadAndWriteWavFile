#include <stdio.h>
#include <stdlib.h>


int main()
{
	int count = 0, exper_count = 0, count_total = 0;
	float e = 0, sum = 0, rand_x;

	while(exper_count < 10000000)
	{
		count = 0;
		sum = 0;
		while(sum < 1)
		{
			rand_x = (float) rand()/RAND_MAX;
			sum = sum + rand_x;
			count++;
		}
		count_total = count_total + count;
		exper_count++;
		e = (float)count_total / exper_count;
	}
	printf("e is approch to %f\n", e);

}