#pragma once
struct Vector2 { float x, y; };

class Vector3
{
public:
	float x, y, z;

	Vector3() {}
	Vector3(const float x, const float y, const float z) :x(x), y(y), z(z) {}
	Vector3 operator + (const Vector3& rhs)const { return Vector3(x + rhs.x, y + rhs.y, z + rhs.z); }
	Vector3 operator - (const Vector3& rhs)const { return Vector3(x - rhs.x, y - rhs.y, z - rhs.z); }
	Vector3 operator * (const float& rhs)const { return Vector3(x * rhs, y * rhs, z * rhs); }
	Vector3 operator / (const float& rhs)const { return Vector3(x / rhs, y / rhs, z / rhs); }
	Vector3& operator +=(const Vector3& rhs) { return *this = *this + rhs; }
	Vector3& operator -=(const Vector3& rhs) { return *this = *this - rhs; }
	Vector3& operator *=(const float& rhs) { return *this = *this * rhs; }
	Vector3& operator /=(const float& rhs) { return *this = *this / rhs; }
	float Length()const { return sqrtf(x * x + y * y + z * z); }
	Vector3 Normalize()const { return *this * (1 / Length()); }
	float Distance(const Vector3& rhs)const { return (*this - rhs).Length(); }
};

struct Vector4
{
	float x, y, z, w;
};

using Vec3 = Vector3;
using vec3 = Vector3;
using Vec = Vector3;
using vec = Vector3;
using vec3_t = Vector3;
using vec4 = Vector4;
using vec2 = Vector2;

enum Bone
{
	Head,
	LeftToe,
	RightToe,
	LeftAnkle,
	RightAnkle,
	LeftHand,
	RightHand,
	Neck,
	Abdomen
};