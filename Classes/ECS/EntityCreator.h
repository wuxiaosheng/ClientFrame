#ifndef __ENTITY_CREATOR_H__
#define __ENTITY_CREATOR_H__

class EntityCreator
{
public:
	EntityCreator();
	~EntityCreator();

public:
	//长方形
	static unsigned int createRectShape();
	//正方形
	static unsigned int createSquare();
	//L形
	static unsigned int createLShape();
};
#endif
