//
// Created by jahre on 11/21/2025.
//

#ifndef CMAKESFMLPROJECT_VEC2_H
#define CMAKESFMLPROJECT_VEC2_H
#include <cmath>

struct Vec2f {
    float x;
    float y;

    Vec2f() : x(0.0f), y(0.0f) {}
    Vec2f(float x, float y) : x(x), y(y) {}

    Vec2f Zero() {
        return {0.0f, 0.0f};
    }

    Vec2f operator+(Vec2f& a) {
        return {this->x + a.x, this->y + a.y};
    }

    Vec2f operator+=(Vec2f& a) {
        this->x += a.x;
        this->y += a.y;
        return *this;
    }

    Vec2f operator-(Vec2f& a) {
        return {this->x - a.x, this->y - a.y};
    }

    Vec2f operator-() {
        return {-this->x, -this->y};
    }

    Vec2f operator-=(Vec2f& a) {
         return *this - a;
    }

    Vec2f operator*(float scalar) {
        return {this->x * scalar, this->y * scalar};
    }

    Vec2f operator*=(float scalar) {
        this->x *= scalar;
        this->y *= scalar;
        return *this;
    }

    Vec2f operator/(float scalar) {
        return {this->x / scalar, this->y / scalar};
    }

    Vec2f operator/=(float scalar) {
        this->x /= scalar;
        this->y /= scalar;
        return *this;
    }

    // We need an Epsilon for floating point comparisons
    // with the "==" operator

    float epsilon = 0.005f;
    bool Vec2f operator==(Vec2f& a) {
        return std::abs(this->x - a.x) < epsilon &&
               std::abs(this->y - a.y) < epsilon;
    }
};


#endif //CMAKESFMLPROJECT_VEC2_H