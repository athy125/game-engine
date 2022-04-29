#ifndef MATH_UTIL_H_
#define MATH_UTIL_H_

// library includes
#include <math.h>

#define M_PI                    3.14159265358979323846f  /* pi */
#define MIN_EPSILON             0.000000001f
#define MAX_EPSILON             0.0001f

namespace engine {
namespace math {

// forward declarations
struct AABB;
class Mat44;
class Transform;
class Vec2D;
class Vec3D;
class Vec4D;

namespace optimized {
class Mat44;
class Vec3D;
}

inline float RadiansToDegrees(float i_radians)
{
    return (i_radians * 180.0f / M_PI);
}

inline float DegreesToRadians(float i_degrees)
{
    return (i_degrees * M_PI / 180.0f);
}

