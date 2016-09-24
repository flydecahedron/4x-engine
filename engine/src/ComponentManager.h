/*
 * ComponentManager.h
 *
 *  Created on: Sep 23, 2016
 *      Author: eric
 */

#ifndef SRC_COMPONENTMANAGER_H_
#define SRC_COMPONENTMANAGER_H_

#include "Component.h"
#include <map>

class ComponentManager {
public:
	ComponentManager();
	virtual ~ComponentManager();
	void addComponent(Entity entity, Component component);
	void removeComponent(Entity entity, Component component);
	void removeEntity(Entity entity);
	void addFamily();
	void removeFamily();

private:
	std::map<uint, Component> components;
};

#endif /* SRC_COMPONENTMANAGER_H_ */
