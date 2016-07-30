#include"math.h"

#include"stdio.h"

void main()

{

	float a,b,c;

	float E,x,x1,x2;

	printf("请按顺序输入二次项系数a、一次项系数b和常数项c：\n");

	scanf("%f,%f,%f",&a,&b,&c);

	if(a == 0)

		{	x = - c / b;

			printf("此方程的解为x=%f.\n",x);

		}

	else

		{	E = b * b -4 * a * c;

			if(E == 0)

				{	x = -b / (2 * a);

					printf("方程的根唯一，为x=%f.", x);

				}

			else

				{	x1 = ( -b + sqrt(E)) / (2 * a),	x2 = ( -b + sqrt(E) ) / (2 * a);

					printf("方程的一个根为x1=%f,另一个根为x2=%f.\n", x1,x2);

				}

		}

}

