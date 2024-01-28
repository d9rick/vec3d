#include "vec3d.h"
#include <cmath>

vec3d::vec3d(float x, float y, float z)
    : x{ x }
    , y{ y }
    , z{ z }
{
}

float vec3d::get_x()
{
    return x;
}

float vec3d::get_y()
{
    return y;
}

float vec3d::get_z()
{
    return z;
}

void vec3d::set_x(float x)
{
    this->x = x;
}

void vec3d::set_y(float y)
{
    this->y = y;
}

void vec3d::set_z(float z)
{
    this->z = z;
}

float vec3d::length()
{
    return sqrt(x * x + y * y + z * z);
}

float vec3d::dot(vec3d v)
{
    return x * v.get_x() + y * v.get_y() + z * v.get_z();
}

vec3d vec3d::cross(vec3d v)
{
    return vec3d(y * v.get_z() - z * v.get_y(), z * v.get_x() - x * v.get_z(), x * v.get_y() - y * v.get_x());
}

vec3d vec3d::add(vec3d v)
{
    return vec3d(x + v.get_x(), y + v.get_y(), z + v.get_z());
}

vec3d vec3d::subtract(vec3d v)
{
    return vec3d(x - v.get_x(), y - v.get_y(), z - v.get_z());
}

vec3d vec3d::normalize()
{
    float len = length();
    return vec3d(x / len, y / len, z / len);
}