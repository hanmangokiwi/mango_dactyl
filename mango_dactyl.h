#pragma once
#define XXX KC_NO

#include "quantum.h"

#define LAYOUT_mirror( \
    k00, k01, k02, k03, k04, k05, k06, \
    k10, k11, k12, k13, k14, k15, k16, \
    k20, k21, k22, k23, k24, k25, k26, \
    k30, k31, k32, k33, k34, k35, \
    k40, k41, k42, k43, k44, k45, k46, k47, \
    k50, k51, \
    k60, k61, k62, k63, k64, k65, k66, \
    k70, k71, k72, k73, k74, k75, k76, \
    k80, k81, k82, k83, k84, k85, k86, \
    k90, k91, k92, k93, k94, k95, \
    k100, k101, k102, k103, k104, k105, k106, k107, \
    k110, k111 \
  ) { \
    { k00, k01, k02, k03, k04, k05, k06, XXX }, \
    { k10, k11, k12, k13, k14, k15, k16, XXX }, \
    { k20, k21, k22, k23, k24, k25, k26, XXX }, \
    { k30, k31, k32, k33, k34, k35, XXX, XXX }, \
    { k40, k41, k42, k43, k44, k45, k46, k47 }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, k50, k51 }, \
    { XXX, k60, k61, k62, k63, k64, k65, k66 }, \
    { XXX, k70, k71, k72, k73, k74, k75, k76 }, \
    { XXX, k80, k81, k82, k83, k84, k85, k86 }, \
    { XXX, XXX, k90, k91, k92, k93, k94, k95 }, \
    { k100, k101, k102, k103, k104, k105, k106, k107 }, \
    { k110, k111, XXX, XXX, XXX, XXX, XXX, XXX }  \
}


#define LAYOUT_rev( \
    k00, k01, k02, k03, k04, k05, k06, \
    k10, k11, k12, k13, k14, k15, k16, \
    k20, k21, k22, k23, k24, k25, k26, \
    k30, k31, k32, k33, k34, k35, \
    k40, k41, k42, k43, k44, k45, k46, k47, \
    k50, k51, \
    k60, k61, k62, k63, k64, k65, k66, \
    k70, k71, k72, k73, k74, k75, k76, \
    k80, k81, k82, k83, k84, k85, k86, \
    k90, k91, k92, k93, k94, k95, \
    k100, k101, k102, k103, k104, k105, k106, k107, \
    k110, k111 \
  ) { \
    { k66, k65, k64, k63, k62, k61, k60, XXX }, \
    { k76, k75, k74, k73, k72, k71, k70, XXX }, \
    { k86, k85, k84, k83, k82, k81, k80, XXX }, \
    { k95, k94, k93, k92, k91, k90, XXX, XXX }, \
    { k107, k106, k105, k104, k103, k102, k101, k100 }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, k111, k110 }, \
    { XXX, k06, k05, k04, k03, k02, k01, k00 }, \
    { XXX, k16, k15, k14, k13, k12, k11, k10 }, \
    { XXX, k26, k25, k24, k23, k22, k21, k20 }, \
    { XXX, XXX, k35, k34, k33, k32, k31, k30 }, \
    { k47, k46, k45, k44, k43, k42, k41, k40 }, \
    { k51, k50, XXX, XXX, XXX, XXX, XXX, XXX }  \
}
