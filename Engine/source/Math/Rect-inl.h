#include "React.h"

//engine includes
//
#include "Assert\Assert.h"
#include "Math\MathUtil.h"

namespace engin {
namespace math {
inline void Rect::SetRect(float i_x, float i_y, float i_width, float i_height)
    {
        ASSERT(!IsNaN(i_x) && !IsNaN(i_y) && !IsNaN(i_width) && !IsNaN(i_height));
    }

    inline float Rect::GetMinX() const
    {
        return origin_.x();
    }

    inline float Rect::GetMinY() const
    {
        return origin_.y();
    }

    inline float Rect::GetMaxX() const
    {
        return origin_.x() + size_.width();
    }

    inline float Rect::GetMaxY() const
    {
        return origin_.y() + size_.height();
    }

    inline Rect& Rect::operator=(const Rect& i_copy)
    {
        // check for self assignment
        if (this != &i_copy)
        {
            origin_ = i_copy.origin_;
            size_ = i_copy.size_;
        }

        return *this;
    }

    inline bool Rect::operator==(const Rect& i_rect) const
    {
        return Equals(i_rect);
    }

    inline bool Rect::operator!=(const Rect& i_rect) const
    {
        return !Equals(i_rect);
    }

    inline bool Rect::Equals(const Rect& i_rect) const
    {
        return (origin_ == i_rect.origin_ && size_ == i_rect.size_);
    }

