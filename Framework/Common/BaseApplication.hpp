#pragma once

#include "IApplication.hpp"

namespace My
{
	class BaseApplication : implements IApplication
	{
	public:
		virtual int Initialize();
		virtual void Tick();
		virtual void FInitialize();
		virtual bool IsQuit();
		
	protected:
		bool m_bIsQuit;
	};
}