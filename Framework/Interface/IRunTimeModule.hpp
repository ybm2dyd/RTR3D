#pragma once

#include "Interface.hpp"

namespace My
{
	interface IRunTimeModule
	{
	public:
		virtual int Initialize() = 0;
		virtual void Tick() = 0;
		virtual void FInitialize() = 0;

		virtual ~IRunTimeModule() {}
	};
}