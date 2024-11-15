#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
typedef struct {
	float x;
	float y;

}point;

int main()
{
	point p;

	scanf("%f %f", &p.x, &p.y);

	point re;

	if(p.x==0){

		if (p.y <=125)
		{
			re.x = fabs(31250 / (250 - p.y));
			re.y = 250 - re.x;
		}
		else
		{
			re.x = fabs(31250 / (p.y));
			re.y = 0;
		}
		
	}
	else if(p.y==0){

		if (p.x <= 125)
		{
			re.y = fabs(31250 / (250 - p.x));
			re.x = 250 - re.y;
		}
		else
		{
			re.y = fabs(31250 / (p.x));
			re.x = 0;
		}

	}
	else
	{

		if (p.y <= 125)
		{
			re.x = 0;
			re.y = 250 - fabs(31250 / (250 - p.y));
		
		}
		else
		{
			re.y = 0;
			re.x = 250 - fabs(31250 / (250 - p.x));

		}
	}
	printf("%.2f %.2f",re.x, re.y);

	return 0;

}