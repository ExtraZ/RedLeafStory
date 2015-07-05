#pragma once
class RenderObject
{
public:
	RenderObject(/*WZNode node*/) {}
	virtual ~RenderObject() {}
	void Initialize();
	void Render();

protected:
	int x, y, z, width, height;
	
private:

};

