#include <stdio.h>
#include <math.h>
#define PI 3.14


double circle_area(double radius) {
	double circle_area;
	circle_area = PI * pow(radius, 2);
	return(circle_area);
}	


double calc_hypotenuse(int side1, int side2) {
	double hypotenuse;
	hypotenuse = sqrt(pow((double)side1, 2) + pow((double)side2, 2));
	return(hypotenuse);
}


double calc_radius_of_smallest_circle(int side1,int side2) {
	double radius_of_smallest_circle;
	radius_of_smallest_circle = calc_hypotenuse(side1, side2) / 2;
	return(radius_of_smallest_circle);
}


double calc_radius_of_largest_circle(int side1,int side2) {
	double radius_of_largest_circle;
	
	if(side1 < side2) {
		radius_of_largest_circle = (double)side1 / 2;
	}
	else {
		radius_of_largest_circle = (double)side2 / 2;
	}
	
	return(radius_of_largest_circle); 
}


double calc_area_of_smallest_circle(int side1,int side2) {
	double smallest_circle;
	smallest_circle = circle_area(calc_radius_of_smallest_circle(side1, side2));
	return(smallest_circle);
}


double calc_area_of_largest_circle(int side1, int side2) {
	double largest_circle;
	largest_circle = circle_area(calc_radius_of_largest_circle(side1, side2));
	return(largest_circle);
}


double calc_area_of_square(int side) {
	double area_of_square;
	area_of_square = pow(side, 2);
	return(area_of_square);
}


double calc_area_of_smallest_square(int side1,int side2) {
	double smallest_square; 
	
	if(side1 < side2) {
		smallest_square = calc_area_of_square(side2);
	}
	else {
		smallest_square = calc_area_of_square(side1);
	}
	
	return(smallest_square);
}


double calc_area_of_largest_square(int side1,int side2) {
	int largest_square;

	if(side1 < side2) {
		largest_square = calc_area_of_square(side1);
	}
	else {
		largest_square = calc_area_of_square(side2);
	}
	
	return(largest_square);
}


void display_results(
	double largest_circle,
	double largest_square,
	double smallest_circle,
	double smallest_square
) 
{		
	printf("The area of the largest circle that fits inside a rectangle: %.2f\n", largest_circle);
	printf("The area of the largest square that fits inside a rectangle: %.2f\n", largest_square);	
	printf("The area of the smallest circle that surrounds the same rectangle: %.2f\n", smallest_circle);
	printf("The area of the smallest square that surrounds the same rectangle: %.2f\n", smallest_square);
}


int main() {
	int side1, side2;
	double largest_circle;
	double largest_square;
	double smallest_circle;
	double smallest_square;
	
	printf("Enter first side for rectangle: ");
	scanf("%d", &side1);

	printf("Enter second side for rectangle: ");
	scanf("%d", &side2);
	
	largest_circle = calc_area_of_largest_circle(side1, side2);
	largest_square = calc_area_of_largest_square(side1, side2);
	smallest_circle = calc_area_of_smallest_circle(side1, side2);
	smallest_square = calc_area_of_smallest_square(side1, side2);

	display_results(
		largest_circle,
		largest_square,
		smallest_circle,
		smallest_square
	);
	
	return 0;	
}
