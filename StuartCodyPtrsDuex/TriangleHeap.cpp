#include <iostream>
#include "TriangleHeap.h"

TriangleHeap::TriangleHeap()
{

}

TriangleHeap::TriangleHeap(const float* _mBase, const float* _mHeight)
{
	SetBase(*_mBase);
	SetHeight(*_mHeight);
}

TriangleHeap& TriangleHeap::operator=(const TriangleHeap& other)
{
	if (this != &other)
	{
		delete mBase;
		delete mHeight;
		mBase = new float(*other.mBase);
		mHeight = new float(*other.mHeight);
	}

	return *this;
}

TriangleHeap::TriangleHeap(const TriangleHeap& other)
{
	*this = other;
}


TriangleHeap::~TriangleHeap()
{
	delete mBase;
	delete mHeight;
}

void TriangleHeap::SetBase(float _mBase)
{ 
	delete mBase;
	
	mBase = new float(_mBase);
}

void TriangleHeap::SetHeight(float _mHeight)
{
	delete mHeight;
	mHeight = new float(_mHeight);
}

float TriangleHeap::GetArea(float mBase, float mHeight)
{
	float area = (mBase * mHeight) / 2;
	return area;
}

void TriangleHeap::Print(TriangleHeap triangle)
{
	float* height = triangle.mHeight;
	float* base = triangle.mBase;
	std::cout << "Height: " << *height << "\nBase: " << *base << "\nArea: " << triangle.GetArea(*height, *base) << std::endl;
}