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
		mBase = other.mBase;
		mHeight = other.mHeight;


	}

	return *this;
}

TriangleHeap::TriangleHeap(const TriangleHeap& other)
{
	this->mBase = other.mBase;
	this->mHeight = other.mHeight;
}


TriangleHeap::~TriangleHeap()
{

}

void TriangleHeap::SetBase(float _mBase)
{
	mBase = &_mBase);
}

void TriangleHeap::SetHeight(float _mHeight)
{
	mHeight = &_mHeight;
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