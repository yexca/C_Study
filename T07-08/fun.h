#include <stdio.h>
#define SHUI_300 0.15
#define SHUI_450 0.20
#define SHUI_OTHER 0.25
#define SHUI_300_MONEY 300 * SHUI_300
#define SHUI_450_MONEY SHUI_300_MONEY + 150 * SHUI_450

void ui(void);
float choice(int n);
float money_basic(float money_hr, int time);
float calculate(float money_basics);