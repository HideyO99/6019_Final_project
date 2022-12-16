#pragma once
#include <vector>
#include <map>
#include "cObject.h"
#include "cTriangle.h"
#include "../VAOManager/cModelDrawInfo.h"
#include "cBoundingBox.h"

#define LO -1
#define HI  1
class cPhysicSystem
{
public:
	cPhysicSystem();
	~cPhysicSystem();

	//void createEnvironment(cModelDrawInfo drawInfo);
	void createObject(cMeshObj* meshObj, cModelDrawInfo* DrawInfo);
	void updateSystem(float dt);

	bool collisionCheck(cObject* pObj, cTriangle* t);

	bool gameUpdate();

	bool objPosUpdate();

	//cBoundingBox boundingBox;
	//cModelDrawInfo* pDrawInfo;
	//std::vector<cObject*> vec_Objects;
	//std::map<int, std::vector<cTriangle*>> mapEnvironmentAABBStructure;
	//std::map<int, std::vector<cTriangle*>> mapObjAABBStructure;
	std::map<std::string, cObject*> mapOBJ;
};

