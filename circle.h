#ifndef CIRCLE_H
#define CIRCLE_H

#include <math.h>


class Circle
{
protected:
    double x, y, R;
public:

    /*!
    перемещение окружности
    \param[in] dx  приращение x
    \param[in] dy приращение y
    */
    void Move(double dx, double dy)
    {
        x += dx;
        y += dy;
    }

    /*!
    Нахождение площади
    \return
    */
    double Area()
    {
        return M_PI * R *R;
    }

    /*!
    конструктор
    \param[in] dx  приращение x
    \param[in] dy приращение y
    */
    Circle(double x, double y, double R)
    {
        this->x = x;
        this->y = y;
        this->R = R;
    }
};


#endif // CIRCLE_H
