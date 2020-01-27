#pragma once

namespace sf {

	class Window;

}

namespace Display {

	constexpr int WIDTH = 1280;
	constexpr int HEIGHT = 720;

	void init();
	void close();

	void clear();
	void update();

	void checkForClose();

	bool isOpen();

	const sf::Window& get();

}