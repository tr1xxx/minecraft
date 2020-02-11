#include "Headers/Display.h"

#include "Headers/Application.h"
#include "Headers/Util/Random.h"

#include <iostream>

int main() {

	Random::init();

	Display::init();

	Application app;

	app.runMainGameLoop();
	
	return 0;

}