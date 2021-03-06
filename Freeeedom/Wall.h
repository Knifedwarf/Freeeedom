#pragma once

#include "Solid.h"

class GameObject;

class Wall : public Solid
{
public:
	Wall(sf::Vector2f p_position, sf::Vector2f p_size, bool p_connectedsides[4]);
	~Wall(void);
	void Update(GameObject* p_player);
	void Draw(sf::RenderWindow& p_renderer);
	void DrawShadows(sf::RenderWindow& p_renderer);
	string GetType() {return "Wall";};

	sf::RectangleShape GetWall();

private:
	bool m_connectedsides[4];
};

