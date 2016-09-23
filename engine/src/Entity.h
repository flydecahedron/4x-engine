/*
 * Entity.h
 *
 *  Created on: Sep 22, 2016
 *      Author: eric
 */

#ifndef SRC_ENTITY_H_
#define SRC_ENTITY_H_
#include <string>

class Entity
{
public:
	~Entity(){};
	uint uuid;
	std::string type;
};



#endif /* SRC_ENTITY_H_ */
