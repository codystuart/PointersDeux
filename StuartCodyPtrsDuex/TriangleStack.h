#pragma once
class TriangleStack
{
private:
	float mBase;
	float mHeight;
public: 
	TriangleStack();
	~TriangleStack();

	void SetBase(float _mBase);
	void SetHeight(float _mHeight);
	float GetArea(float mBase, float mHeight);

	void Print(TriangleStack Triangle);
};

