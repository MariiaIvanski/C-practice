#include <math.h>

struct Point
{
    int x, y;
};

float Distance( struct Point Point1, struct Point Point2){

    float distn;
	distn = sqrt((Point1.x - Point2.x)* (Point1.x - Point2.x) + (Point1.y - Point2.y) * (Point1.y - Point2.y));        
      
	return distn;
}
