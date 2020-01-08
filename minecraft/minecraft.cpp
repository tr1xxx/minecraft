#include "Headers/Display.h"

#include "Headers/Application.h"

int main() {

	Display::init();

	Application app;

	app.runMainGameLoop();

	return 0;

}