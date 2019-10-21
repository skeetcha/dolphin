#include "JuliaInterface.h"
#include <julia.h>

void JuliaInterface::Init()
{
  jl_init();
}

void JuliaInterface::Shutdown()
{
  jl_atexit_hook(0);
}
