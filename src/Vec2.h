//
// Created by jahre on 11/21/2025.
//

#ifndef CMAKESFMLPROJECT_VEC2_H
#define CMAKESFMLPROJECT_VEC2_H
#include <cmath>
#include "precision.h"

struct Vec2 {
    real x;
    real y;

    Vec2() : x(0.0f), y(0.0f) {}
    Vec2(real x, real y) : x(x), y(y) {}

    Vec2 Zero() {
        return {0.0f, 0.0f};
    }

    Vec2 operator+(Vec2& a) {
        return {this->x + a.x, this->y + a.y};
    }

    Vec2 operator+=(Vec2& a) {
        this->x += a.x;
        this->y += a.y;
        return *this;
    }

    Vec2 operator-(Vec2& a) {
        return {this->x - a.x, this->y - a.y};
    }

    Vec2 operator-() {
        return {-this->x, -this->y};
    }

    Vec2 operator-=(Vec2& a) {
         return *this - a;
    }

    Vec2 operator*(real scalar) {
        return {this->x * scalar, this->y * scalar};
    }

    Vec2 operator*=(real scalar) {
        this->x *= scalar;
        this->y *= scalar;
        return *this;
    }

    Vec2 operator/(real scalar) {
        return {this->x / scalar, this->y / scalar};
    }

    Vec2 operator/=(real scalar) {
        this->x /= scalar;
        this->y /= scalar;
        return *this;
    }

    // We need an Epsilon for floating point comparisons
    // with the "==" operator

    float epsilon = 0.005f;
    bool operator==(Vec2& a) {
        return std::abs(this->x - a.x) < epsilon &&
               std::abs(this->y - a.y) < epsilon;
    }
};


#endif //CMAKESFMLPROJECT_VEC2_H