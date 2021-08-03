#include<stdio.h>
#include<math.h>

int main()
{	printf("calculadora de promedios de venta \n\n");
	float v1,v2,v3,L1,L2,L3,M1,M2,M3,MI1,MI2,MI3,J1,J2,J3,V1,V2,V3,sum1,sum2,sum3;


		printf("ingrese monto de venta del dia ");
	printf("Lunes \n");
	printf("vendedor 1: ");
	scanf("%f",&L1);
	printf("vendedor 2: ");
	scanf("%f",&L2);
	printf("vendedor 3: ");
	scanf("%f",&L3);
		printf("ingrese monto de venta del dia ");
	printf("Martes \n");
	printf("vendedor 1: ");
	scanf("%f",&M1);
	printf("vendedor 2: ");
	scanf("%f",&M2);
	printf("vendedor 3: ");
	scanf("%f",&M3);
		printf("ingrese monto de venta del dia ");
	printf("Miercoles \n");
	printf("vendedor 1: ");
	scanf("%f",&MI1);
	printf("vendedor 2: ");
	scanf("%f",&MI2);
	printf("vendedor 3: ");
	scanf("%f",&MI3);
		printf("ingrese monto de venta del dia ");
	printf("Jueves \n");
	printf("vendedor 1: ");
	scanf("%f", &J1);
	printf("vendedor 2: ");
	scanf("%f", &J2);
	printf("vendedor 3: ");
	scanf("%f", &J3);
		printf("ingrese monto de venta del dia ");
	printf("Viernes \n");
	printf("vendedor 1: ");
	scanf("%f", &V1);
	printf("vendedor 2: ");
	scanf("%f",&V2);
	printf("vendedor 3: ");
	scanf("%f",&V3);
	sum1=L1+M1+MI1+J1+V1;
	sum2=L2+M2+MI2+J2+V2;
	sum3=L3+M3+MI3+J3+V3;
	v1=sum1/5;
	v2=sum2/5;
	v3=sum3/5;
	printf("\nel promedio semanal de venderor 1 es : %.2f$\n" ,v1);
	printf("el promedio semanal de venderor 2 es : %.2f$\n" ,v2);
	printf("el promedio semanal de venderor 3 es : %.2f$\n" ,v3);

	return 0;}
