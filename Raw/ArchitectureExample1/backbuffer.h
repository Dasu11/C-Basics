
#ifndef _BACKBUFFER_H_
#define _BACKBUFFER_H_


#include <windows.h>
class CBackBuffer
{
public:
	CBackBuffer();
	~CBackBuffer();

	bool Initialise(HWND _hwnd, int _iWidht, int _iHeight);
	HDC GetBFDC() const;

	int GetHeight() const;
	int GetWidth()const;

	void Clear();
	void Present();

protected:
	HWND m_hWnd;
	HDC m_hDc;

	HBITMAP m_hSurface;
	HBITMAP m_hOldObject;
	int m_iWidth;
	int m_iHeight;

private:
	CBackBuffer(const CBackBuffer& _kr);
	CBackBuffer& operator= (const CBackBuffer& _kr);


private:


};

#endif // !_BACKBUFFER_H_