#pragma once
#include "Scene.h"
class LoginScene :
	public Scene
{
public:
	LoginScene();
	LoginScene(HWND);
	~LoginScene();

public:
	virtual void Draw(HDC hdc);
	virtual void Timer(const double count);

	virtual bool KeyProcess(HWND hwnd, UINT iMessage, WPARAM wParam, LPARAM lParam);
	virtual bool MouseProcess(HWND hwnd, UINT iMessage, WPARAM wParam, LPARAM lParam);

public:
	void LoadCImage();

private:

	CImage m_backImg;
	CImage m_logoImg;
	CImage m_pawnImg;
	CImage m_uiImg[2];

	bool m_isDrawLogo{ true };
	bool m_isDrawPawn{ false };
	bool m_isDrawUI{ false };

	int m_logoTimer{ 0 };
	int m_pawnTimer{ 0 };
	int m_uiTimer{ 0 };
	int m_uiOnoff{ 0 };

	TCHAR	m_id[5] = { NULL };
	TCHAR	m_pw[5] = { NULL };
	size_t	m_idLen = 0;
	size_t	m_pwLen = 0;

	int		m_userInsertType{ 0 };// 0일때 미입력, 1일때 아이디입력중, 2일때 비밀번호 입려가능
};

