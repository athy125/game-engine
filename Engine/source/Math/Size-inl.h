#include "Size.h"

// engine includes
#include "Assert\Assert.h"
#include "Math\MathUtil.h"

namespace engine {
namespace math {

    inline float Size::width() const
    {
        return width_;
    }

    inline void Size::width(float i_width)
    {
        ASSERT(!IsNaN(i_width));
        width_ = i_width;
    }

    inline float Size::height() const
    {
        return height_;
    }

    inline void Size::height(float i_height)
    {
        ASSERT(!IsNaN(i_height));
        height_ = i_height;
    }

