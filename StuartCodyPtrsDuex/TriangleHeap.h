#pragma once
class TriangleHeap
{
private:
	float* mBase;
	float* mHeight;

public:
	//default constructor
	TriangleHeap();
	//overloaded constructor
	TriangleHeap(const float* _mBase, const float* _mHeight);
	//assignment operator
	TriangleHeap& operator=(const TriangleHeap& other);
	//copy operator
	TriangleHeap(const TriangleHeap& other);
	//destructor
	~TriangleHeap();
	//allow main to set member fields which are private
	void SetBase(float _mBase);
	void SetHeight(float _mHeight);
	//calculate area
	float GetArea(float mBase, float mHeight);

	void Print(TriangleHeap triangle);
};

