// Create a struct Point, with two float fields x and y. Write a method is_partially_ordered that takes two points, and returns a boolean: true if the first Point x is smaller than the second Points x, and the first Points y is smaller than the second Points y. Create a method distance_to which takes a Point as an argument, calculates and returns the euclidean distance to that Point. Create a function total_path_distance which takes an array of Point and a size n of the array, and it returns the distance of the path between these points (distance between the first and the second, plus the distance between the second and third and so on).
#include <cmath>
#include <iostream>

struct Point
{
    float x, y;
    int size;
    
	
    bool is_partially_ordered(const Point &p2)
    {
        return (x < p2.x && y < p2.y);
    }
    float distance_to(const Point &p2)
    {
        float distance, x_distance, y_distance;
        x_distance = pow(x - p2.x, 2);
        y_distance = pow(y - p2.y, 2);
        distance = sqrt(x_distance + y_distance);
        return distance;
    }
};


float total_path_distance(Point *arr, int len) {
	float distance = 0.0;
	for (int i = 1 ; i < len ; i++) {
		distance += arr[i-1].distance_to(arr[i+1]);
	}

	return distance;
}


int main()
{
	int size;
	std::cout << "Enter array size: ";
	std::cin >> size;
	Point *point_array = new Point[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "------------------------" << std::endl;
		std::cout << "Point for p1(x1,y1) :";
		std::cin >> point_array[i].x;
		std::cin >> point_array[i].y;
	}
	// Point point_array[4] = {{1,2},{3,4}};
	// Point point_array[4] = {x0=1,y0=2,x1=3,y1=4};
	// Point point_array[4] = {1,3};->x
	// Point point_array[4] = {2,4};->y

	std::cout << total_path_distance(point_array, size);

	delete [] point_array;
}
