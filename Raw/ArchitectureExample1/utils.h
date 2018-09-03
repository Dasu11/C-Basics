#pragma once

#ifndef _UTILS_H_
#define _UTILS_H_

#include <time.h>
#include "config.h"

#define VALIDATE(a) if(!a) return false
#define SHOW_CURSOR true
#define RANDNUM(a) return ((a/2) - (rand()% a) + 1)
#endif	