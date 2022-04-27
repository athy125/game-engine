#ifndef COLLIDER_H_
#define COLLIDER_H_

// library includes
#include <mutex>
#include <vector>

// engine includes
#include "Math\Vec3D.h"
#include "Memory\WeakPointer.h"

// forward declarations
namespace engine {
namespace math {
    struct AABB;
    class Mat44;
    class Transform;
}
namespace physics {
    class PhysicsObject;
}
}

namespace engine {
namespace physics {

struct CollisionPair
{
    float                                                       time;
    engine::math::Vec3D                                         normal;
    engine::memory::WeakPointer<PhysicsObject>                  object_a;
    engine::memory::WeakPointer<PhysicsObject>                  object_b;
};

class InterfaceCollisionListener
{
public:
    virtual void OnCollision(const CollisionPair& i_collision_pair) = 0;
};

class Collider
{
private:
    Collider();
    ~Collider();
    static Collider* instance_;

    // disable copy constructor & copy assignment operator
    Collider(const Collider& i_copy) = delete;
    Collider& operator=(const Collider& i_other) = delete;

    // public code in progress
