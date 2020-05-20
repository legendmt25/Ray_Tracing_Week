#include "camera.h"
ray camera::get_ray(float u, float v)
{
	return ray(origin, lower_left_corner + u * horizontal + v * vertical - origin);
}