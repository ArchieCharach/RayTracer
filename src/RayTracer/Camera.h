#ifndef CAMERA_H
#define CAMERA_H

#include <glm.hpp>

class Ray;

class Camera
{
public:
	Camera();

	Ray CreateRay(glm::vec3 _position);
};

#endif // !CAMERA_H
