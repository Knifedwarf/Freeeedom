// InputManager
#pragma once

enum EMouseButton
{
	MB_LEFT,
	MB_RIGHT,
	MB_COUNT
};

class Core;

class InputManager
{
public:
	InputManager();

	void UpdateEvents(sf::Event event);
	//Keyboard
	bool IsReleasedK(int key) const;
	bool IsDownK(int key) const;
	bool IsDownOnceK(int key) const;
	void PostUpdateKeyboard();

	//Mouse
	float GetX() const;
	float GetY() const;
	bool IsDown(EMouseButton button) const;
	bool IsDownOnce(EMouseButton button) const;
	bool IsReleased(EMouseButton Button) const;
	void PostUpdateMouse();

private:
	//Keyboard
	bool m_Current[sf::Keyboard::Key::KeyCount];
	bool m_Previous[sf::Keyboard::Key::KeyCount];

	//Mouse
	bool m_current[MB_COUNT];
	bool m_previous[MB_COUNT];
	float m_x, m_y;
};