#include "CVector3.h"

CVector3::CVector3():x(0),y(0),z(0)
{
}

CVector3::CVector3(float fx, float fy, float fz) 
{
	x = fx;
	y = fy;
	z = fz;
}

CVector3& CVector3::operator=(const CVector3& _kr)
{
	x = _kr.x;
	y = _kr.y;
	z = _kr.z;
	return(*this);
}

#pragma region  Relational operator

bool CVector3::operator==(const CVector3& _kr)const
{
	return (x == _kr.x && y == _kr.y && z == _kr.z);
}

bool CVector3::operator!=(const CVector3& _kr)const
{
	return (x != _kr.x && y != _kr.y && z != _kr.z);
}

#pragma endregion

#pragma region Vector Operations

void CVector3::Zero() 
{
	x = y = z = 0;
}

CVector3 CVector3::operator*(float _f)const 
{
	return (CVector3(x*_f, y*_f, z*_f));
}

CVector3 CVector3::operator/(float _f)const
{
	//check if _f is zero
	return (CVector3(x/_f, y/_f, z/_f));
}

CVector3 CVector3::operator+(float _f)const
{
	return (CVector3(x + _f, y + _f, z + _f));
}

CVector3 CVector3::operator-(float _f)const
{
	return (CVector3(x - _f, y - _f, z - _f));
}

#pragma endregion

#pragma region Combined operators

CVector3& CVector3::operator+=(CVector3& _kr) 
{
	x += _kr.x;
	y += _kr.y;
	z += _kr.z;
	return (*this);
}

CVector3& CVector3::operator-=(CVector3& _kr)
{
	x -= _kr.x;
	y -= _kr.y;
	z -= _kr.z;
	return (*this);
}

CVector3& CVector3::operator*=(CVector3& _kr)
{
	x *= _kr.x;
	y *= _kr.y;
	z *= _kr.z;
	return (*this);
}

CVector3& CVector3::operator/=(CVector3& _kr)
{
	//Check if divisible by zero
	x /= _kr.x;
	y /= _kr.y;
	z /= _kr.z;
	return (*this);
}


#pragma endregion

