#include <math.h>//математическая библиотека
#include <stdio.h>//библиотека для работы со строками
#include "task8_lib.h"

namespace task7_liber
{
	float x, rezylt;

	void task8_f::f(void)
	{
		rezylt = (1 - (1 / 4) * sin(2 * x) * sin(2 * x) + cos(2 * x));
	}
}