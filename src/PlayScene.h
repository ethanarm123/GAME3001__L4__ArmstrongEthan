#pragma once
#ifndef __PLAY_SCENE__
#define __PLAY_SCENE__

#include "Obstacle.h"
#include "Scene.h"
#include "StarShip.h"
#include "Target.h"
#include "Tile.h"


class PlayScene : public Scene
{
public:
	PlayScene();
	~PlayScene();

	// Scene LifeCycle Functions
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	virtual void handleEvents() override;
	virtual void start() override;

	//void moveStarShip() const;
private:
	// IMGUI Function
	void GUI_Function();
	std::string m_guiTitle;
	
	glm::vec2 m_mousePosition;

	// Game Objects
	Target* m_pTarget;
	StarShip* m_pStarShip;

	// UI Controls
	bool m_bToggleGrid;

	// Pathfinding functions and objects
	std::vector<Tile*> m_pGrid;

	void m_buildGrid();
	void m_setGridEnabled(bool state);
	bool m_getGridEnabled() const;
	bool m_isGridEnabled;
	
	
	
};

#endif /* defined (__PLAY_SCENE__) */