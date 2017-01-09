/******************************************************************
* Copyright (C) 2016 Jordi Serrano Berbel <jsberbel95@gmail.com> *
* This can not be copied, modified and/or distributed without    *
* express permission of the copyright owner.                     *
******************************************************************/

#include "GUI.hh"
#include "System.hh"
#include "Logger.hh"
#include "MenuScene.hh"
#include "GameScene.hh"
using namespace Logger;

MenuScene::MenuScene(void) {
	m_background = { { 0, 0, W.GetWidth(), W.GetHeight() }, ObjectID::BG_00 };
}

MenuScene::~MenuScene(void) {
}

void MenuScene::OnEntry(void) {
}

void MenuScene::OnExit(void) {
}

void MenuScene::Update(void) {
	static MouseCoords mouseCoords(0, 0);
	if (IM.IsMouseDown<MOUSE_BUTTON_LEFT>()) {
		Println("===============");
		Println("mxp: ", mouseCoords);
		mouseCoords = IM.GetMouseCoords();
	}
	else if (IM.IsMouseUp<MOUSE_BUTTON_LEFT>()) {
		Println("mxn: ", IM.GetMouseCoords());
		if ((mouseCoords.x > (W.GetWidth()/2) - 50) && (mouseCoords.x < (W.GetWidth()/2) + 50)) {
			SM.SetCurScene<GameScene>();
			Println("Scene changed.");
		}
	}
	//m_grid.Update(m_score); // Update grid
							// Test InputManager key methods
	if (IM.IsKeyHold<'a'>()) Println("a hold");
	if (IM.IsKeyDown<'0'>()) Println("0 down");
//	if (IM.IsKeyUp<KEY_BUTTON_DOWN>());
}

void MenuScene::Draw(void) {
	m_background.Draw(); // Render background
	
	GUI::DrawTextShaded<FontID::FACTORY>("YetAnotherSnake",
	{ W.GetWidth() >> 1, int(W.GetHeight()*.1f), 1, 1 },
	{ 190, 0, 160 }, { 50, 200, 230 }); // Render score that will be different when updated
	GUI::DrawTextBlended<FontID::CANDY>("Play",
	{ W.GetWidth()/2, W.GetHeight()/2 , 1, 1 },
	{ 115, 0, 180 }); // R,G,B
}
