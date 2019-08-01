#pragma once

#include "IRunTimeModule.hpp"

namespace My
{
	interface IApplication : implements IRunTimeModule
	{
	public:
		virtual int Initialize() = 0;
		virtual void Tick() = 0;
		virtual void FInitialize() = 0;
		virtual bool IsQuit() = 0;
	};
}