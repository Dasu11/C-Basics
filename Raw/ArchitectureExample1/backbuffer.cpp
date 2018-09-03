#include "backbuffer.h"

CBackBuffer::CBackBuffer()
	: m_hSurface(0)
	, m_hOldObject(0)
	, m_iWidth(0)
	, m_iHeight(0)
{
}

CBackBuffer::~CBackBuffer() 
{
	SelectObject(m_hDc, m_hOldObject);
	DeleteObject(m_hSurface);
	DeleteObject(m_hDc);
}

bool CBackBuffer::Initialise(HWND _hWnd,int _iWidth,int _iHeight) 
{
	m_hWnd = _hWnd;

	m_iWidth = _iWidth;
	m_iHeight = _iHeight;

	HDC	hWindowDC = ::GetDC(m_hWnd);

	m_hDc = CreateCompatibleDC(hWindowDC);
	m_hSurface = CreateCompatibleBitmap(hWindowDC, m_iWidth,m_iHeight);
	ReleaseDC(m_hWnd, hWindowDC);

	m_hOldObject = static_cast<HBITMAP>(SelectObject(m_hDc, m_hSurface));

	HBRUSH brushWhite = static_cast<HBRUSH> (GetStockObject(LTGRAY_BRUSH));
	HBRUSH oldBrush = static_cast<HBRUSH> (SelectObject(m_hDc,brushWhite));

	Rectangle(m_hDc, 0, 0, m_iWidth, m_iHeight);

	SelectObject(m_hDc, oldBrush);

	return true;
}

void CBackBuffer::Clear()
{
	HBRUSH holdBrush = static_cast<HBRUSH>(SelectObject(GetBFDC(), GetStockObject(LTGRAY_BRUSH)));
	Rectangle(GetBFDC(), 0, 0, GetWidth(), GetHeight());	SelectObject(GetBFDC(), holdBrush);
}

HDC CBackBuffer::GetBFDC() const
{
	return (m_hDc);
}

int CBackBuffer::GetWidth() const
{
	return m_iWidth;
}

int CBackBuffer::GetHeight() const
{
	return m_iHeight;
}

void CBackBuffer::Present() 
{
	HDC hWndDC = ::GetDC(m_hWnd);
	BitBlt(hWndDC, 0, 0, m_iWidth, m_iHeight, m_hDc, 0, 0, SRCCOPY);
	ReleaseDC(m_hWnd, hWndDC);
}