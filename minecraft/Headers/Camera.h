#pragma once

#include "Entity.h"

class Camera : public Entity {

public:
	void input(float dt);

private:
	void mouseInput();

};