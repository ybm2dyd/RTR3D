#include "BaseApplication.hpp"

int My::BaseApplication::Initialize()
{
	m_bIsQuit = false;
	return 0;
}

void My::BaseApplication::Tick()
{
	
}

void My::BaseApplication::FInitialize()
{

}

bool My::BaseApplication::IsQuit()
{
	return m_bIsQuit;
}
