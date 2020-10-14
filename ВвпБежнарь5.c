#include<stdio.h>
#include<math.h>
float coord(float a1, float b1, float a2, float b2) {
	float res = sqrt(pow(b2-b1,2)+pow(a2-a1,2));
	return (res);
}
void main() {
	float x1, x2, y1, y2, x3, y3;
	double res, res1, res2;
	printf("Enter coord: ");
	scanf_s("%f%f%f%f", &x1, &y1, &x2, &y2);
	res = coord(x1,y1,x2,y2);
	printf("your result = %f\n", res);
	printf("Enter coord: ");
	scanf_s("%f%f%f%f%f%f", &x1,&y1,&x2,&y2,&x3,&y3);
	res = coord(x1, y1, x3, y3);
	res1 = coord(x2, y2, x3, y3);
	res2 = coord(x1, y1, x3, y3) + coord(x2, y2, x3, y3);
	printf("your result = %f, len = %f,%f", res2, res, res1);
	printf("Enter coord: ");
	scanf_s("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
	res = coord(x1, y1, x3, y3) * coord(x2, y2, x3, y3);
	printf("your result = %f\n", res);
	printf("Enter coord: ");
	scanf_s("%f%f%f%f", &x1, &y1, &x2, &y2);
	if (y1 > y2){
		res = y2;
		y2 = y1;
		y1 = res;
}
	res1 = 2 * (coord(x1, y1, x1, y2) + coord(x1,y2,x2,y2));
	res2 = coord(x1, y1, x1, y2) * coord(x1, y2, x2, y2);
	printf("P = %f, S = %f", res1, res2);
	printf("Enter coord: ");
	scanf_s("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
	res1 = coord(x1, y1, x3, y3) + coord(x2, y2, x3, y3) + coord(x1, y1, x2, y2);
	res = res1 / 2;
	res2 = sqrt(res * (res - coord(x1, y1, x3, y3)) * (res - coord(x2, y2, x3, y3)) * (res - coord(x1, y1, x2, y2)));
	printf("P = %f , S = %f", res1, res2);
}

