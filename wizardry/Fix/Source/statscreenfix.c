#include "gbafe.h"

struct SSTextDispInfo const sPage1TextInfoRe[] =
{
    { gStatScreen.text + STATSCREEN_TEXT_BSATKLABEL, gUiTmScratchA + TILEMAP_INDEX(2, 13), TEXT_COLOR_SYSTEM_GOLD, 4, &gMid_Atk },
    { gStatScreen.text + STATSCREEN_TEXT_BSHITLABEL, gUiTmScratchA + TILEMAP_INDEX(2, 15), TEXT_COLOR_SYSTEM_GOLD, 4, &gMid_Hit },
    { gStatScreen.text + STATSCREEN_TEXT_BSRANGE,    gUiTmScratchA + TILEMAP_INDEX(9, 11), TEXT_COLOR_SYSTEM_GOLD, 4, &gMid_Rng },
    { gStatScreen.text + STATSCREEN_TEXT_BSCRTLABEL, gUiTmScratchA + TILEMAP_INDEX(9, 13), TEXT_COLOR_SYSTEM_GOLD, 4, &gMid_Crt },
    { gStatScreen.text + STATSCREEN_TEXT_BSAVOLABEL, gUiTmScratchA + TILEMAP_INDEX(9, 15), TEXT_COLOR_SYSTEM_GOLD, 4, &gMid_Avo },

    { }, // end
};
