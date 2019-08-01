#include "IApplication.hpp"

namespace My
{
	extern IApplication * g_pApp;
}

int main(int argc, char ** argv)
{
	int ret = My::g_pApp->Initialize();

	if (ret != 0)
	{
		return ret;
	}

	while (!My::g_pApp->IsQuit())
	{
		My::g_pApp->Tick();
	}

	My::g_pApp->FInitialize();

	return 0;
}
