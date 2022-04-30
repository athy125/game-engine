#ifndef RECT_H_
#define RECT_H_

#include "Vec2D.h"
#include "Size.h"

namespace engine {
namespace math {

    /*
        Rect
        - A class that represents a rectangle
        - Overloads basic arithmetic operators, validates against bad floats
    */

    class Rect
    {
    public:
        explicit Rect(float i_x = 0.0f, float i_y = 0.0f, float i_width = 0.0f, float i_height = 0.0f);
        explicit Rect(const Vec2D& i_origin = Vec2D::ZERO, const Size& i_size = Size::ZERO);
        Rect(const Rect& i_copy);

        ~Rect()
        {}

