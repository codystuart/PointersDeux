#include <iostream>
#include "TriangleStack.h"

TriangleStack::TriangleStack() : mBase(0), mHeight(0)
{

}

//TriangleStack::TriangleStack(float mBase, float mHeight)
//{
//	SetBase(mBase);
//	SetHeight(mHeight);
//}

TriangleStack::~TriangleStack()
{

}

void TriangleStack::SetBase(float _mBase)
{
	mBase = _mBase;
}

void TriangleStack::SetHeight(float _mHeight)
{
	mHeight = _mHeight;
}

float TriangleStack::GetArea(float mBase, float mHeight)
{
	float area = (mBase * mHeight) / 2;
		return area;
}

void TriangleStack::Print(TriangleStack triangle)
{
	float height = triangle.mHeight;
	float base = triangle.mBase;
	std::cout << "Height: " << height << "\nBase: " << base << "\nArea: " << triangle.GetArea(height, base) << std::endl;
}
