// Win32CriticalSection.cpp
//
/////////////////////////////////////////////////////////////////////////////

#include "Win32CriticalSection.h"

/////////////////////////////////////////////////////////////////////////////
// initialization and cleanup
/////////////////////////////////////////////////////////////////////////////

Win32CriticalSection::Win32CriticalSection()
{
}

Win32CriticalSection::~Win32CriticalSection()
{
}

/////////////////////////////////////////////////////////////////////////////
// ICriticalSection interface
/////////////////////////////////////////////////////////////////////////////

void Win32CriticalSection::init()
{
	InitializeCriticalSection(&cs);
}

void Win32CriticalSection::destroy()
{
	DeleteCriticalSection(&cs);
}

void Win32CriticalSection::enter()
{
	EnterCriticalSection(&cs);
}

void Win32CriticalSection::leave()
{
	LeaveCriticalSection(&cs);
}