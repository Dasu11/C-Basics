#pragma once
class CVector3
{

private:
	float x;
	float y;
	float z;
public:
	CVector3();
	CVector3(const CVector3& _kr);
	CVector3(float fx, float fy, float fz);

	//Assignment
	CVector3& operator=(const CVector3& _kr);

	//relational
	bool operator==(const CVector3& _kr)const;
	bool operator!=(const CVector3& _kr)const;

	//vector operations
	void Zero();

	CVector3 operator*(float _f)const;
	CVector3 operator/(float _f)const;
	CVector3 operator+(float _f)const;
	CVector3 operator-(float _f)const;
	CVector3 operator-()const;

	//combined
	CVector3& operator +=(CVector3& _kr);
	CVector3& operator -=(CVector3& _kr);
	CVector3& operator *=(CVector3& _kr);
	CVector3& operator /=(CVector3& _kr);

	//normalise
	void Normalise();

	//vecotrdot product
	float operator*(const CVector3& _kr) const;

	//magnitude
	static inline float Magnitude(const CVector3& _kr);
	static inline CVector3 CrossProduct(const CVector3& krA, const CVector3& krB);
	static inline float Distance(const CVector3& krA, const CVector3& krB);
};

