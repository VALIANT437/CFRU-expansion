#include "../defines.h"
#include "../../include/decompress.h"
#include "../../include/malloc.h"
#include "../../include/party_menu.h"
#include "../../include/script.h"
#include "../../include/script_menu.h"
#include "../../include/sprite.h"
#include "../../include/new/Vanilla_functions.h"

static void Task_WaitPssIcon(u8 taskId);
void CloseMuseumFossilPic(void);

extern const u8 gPssIcon_KazTiles[];
extern const u16 gPssIcon_KazPal[];
extern const u8 gPssIcon_Kaz2Tiles[];
extern const u16 gPssIcon_Kaz2Pal[];
extern const u8 gPssIcon_Kaz3Tiles[];
extern const u16 gPssIcon_Kaz3Pal[];
extern const u8 gPssIcon_Kaz4Tiles[];
extern const u16 gPssIcon_Kaz4Pal[];
extern const u8 gPssIcon_Kaz5Tiles[];
extern const u16 gPssIcon_Kaz5Pal[];
extern const u8 gPssIcon_Kaz6Tiles[];
extern const u16 gPssIcon_Kaz6Pal[];
extern const u8 gPssIcon_Kaz7Tiles[];
extern const u16 gPssIcon_Kaz7Pal[];
extern const u8 gPssIcon_ZinniaTiles[];
extern const u16 gPssIcon_ZinniaPal[];
extern const u8 gPssIcon_Zinnia2Tiles[];
extern const u16 gPssIcon_Zinnia2Pal[];
extern const u8 gPssIcon_Zinnia3Tiles[];
extern const u16 gPssIcon_Zinnia3Pal[];
extern const u8 gPssIcon_Zinnia4Tiles[];
extern const u16 gPssIcon_Zinnia4Pal[];
extern const u8 gPssIcon_Zinnia5Tiles[];
extern const u16 gPssIcon_Zinnia5Pal[];
extern const u8 gPssIcon_Zinnia6Tiles[];
extern const u16 gPssIcon_Zinnia6Pal[];
extern const u8 gPssIcon_Zinnia7Tiles[];
extern const u16 gPssIcon_Zinnia7Pal[];
extern const u8 gPssIcon_Zinnia8Tiles[];
extern const u16 gPssIcon_Zinnia8Pal[];
extern const u8 gPssIcon_ZyreeTiles[];
extern const u16 gPssIcon_ZyreePal[];
extern const u8 gPssIcon_Zyree2Tiles[];
extern const u16 gPssIcon_Zyree2Pal[];
extern const u8 gPssIcon_Zyree3Tiles[];
extern const u16 gPssIcon_Zyree3Pal[];
extern const u8 gPssIcon_Zyree4Tiles[];
extern const u16 gPssIcon_Zyree4Pal[];
extern const u8 gPssIcon_Zyree5Tiles[];
extern const u16 gPssIcon_Zyree5Pal[];
extern const u8 gPssIcon_Zyree6Tiles[];
extern const u16 gPssIcon_Zyree6Pal[];
extern const u8 gPssIcon_ZyroTiles[];
extern const u16 gPssIcon_ZyroPal[];
extern const u8 gPssIcon_Zyro2Tiles[];
extern const u16 gPssIcon_Zyro2Pal[];
extern const u8 gPssIcon_Zyro3Tiles[];
extern const u16 gPssIcon_Zyro3Pal[];
extern const u8 gPssIcon_Zyro4Tiles[];
extern const u16 gPssIcon_Zyro4Pal[];
extern const u8 gPssIcon_Zyro5Tiles[];
extern const u16 gPssIcon_Zyro5Pal[];
extern const u8 gPssIcon_Zyro6Tiles[];
extern const u16 gPssIcon_Zyro6Pal[];
extern const u8 gPssIcon_AizenTiles[];
extern const u16 gPssIcon_AizenPal[];
extern const u8 gPssIcon_Aizen2Tiles[];
extern const u16 gPssIcon_Aizen2Pal[];
extern const u8 gPssIcon_Aizen3Tiles[];
extern const u16 gPssIcon_Aizen3Pal[];
extern const u8 gPssIcon_Aizen4Tiles[];
extern const u16 gPssIcon_Aizen4Pal[];
extern const u8 gPssIcon_Aizen5Tiles[];
extern const u16 gPssIcon_Aizen5Pal[];
extern const u8 gPssIcon_Aizen6Tiles[];
extern const u16 gPssIcon_Aizen6Pal[];
extern const u8 gPssIcon_AbsolTiles[];
extern const u16 gPssIcon_AbsolPal[];
extern const u8 gPssIcon_AbsolDizzyTiles[];
extern const u16 gPssIcon_AbsolDizzyPal[];
extern const u8 gPssIcon_AbsolHappyTiles[];
extern const u16 gPssIcon_AbsolHappyPal[];
extern const u8 gPssIcon_AbsolMadTiles[];
extern const u16 gPssIcon_AbsolMadPal[];
extern const u8 gPssIcon_AbsolPainTiles[];
extern const u16 gPssIcon_AbsolPainPal[];
extern const u8 gPssIcon_AbsolSpecialTiles[];
extern const u16 gPssIcon_AbsolSpecialPal[];
extern const u8 gPssIcon_AbsolReadyTiles[];
extern const u16 gPssIcon_AbsolReadyPal[];
extern const u8 gPssIcon_CharizardYTiles[];
extern const u16 gPssIcon_CharizardYPal[];
extern const u8 gPssIcon_GarchompTiles[];
extern const u16 gPssIcon_GarchompPal[];
extern const u8 gPssIcon_GarchompDizzyTiles[];
extern const u16 gPssIcon_GarchompDizzyPal[];
extern const u8 gPssIcon_GarchompHappyTiles[];
extern const u16 gPssIcon_GarchompHappyPal[];
extern const u8 gPssIcon_GarchompJoyTiles[];
extern const u16 gPssIcon_GarchompJoyPal[];
extern const u8 gPssIcon_GarchompMadTiles[];
extern const u16 gPssIcon_GarchompMadPal[];
extern const u8 gPssIcon_GarchompPainTiles[];
extern const u16 gPssIcon_GarchompPainPal[];
extern const u8 gPssIcon_GarchompReadyTiles[];
extern const u16 gPssIcon_GarchompReadyPal[];
extern const u8 gPssIcon_GarchompSurprisedTiles[];
extern const u16 gPssIcon_GarchompSurprisedPal[];
extern const u8 gPssIcon_KeldeoTiles[];
extern const u16 gPssIcon_KeldeoPal[];
extern const u8 gPssIcon_LucarioDizzyTiles[];
extern const u16 gPssIcon_LucarioDizzyPal[];
extern const u8 gPssIcon_LucarioHappyTiles[];
extern const u16 gPssIcon_LucarioHappyPal[];
extern const u8 gPssIcon_LucarioJoyTiles[];
extern const u16 gPssIcon_LucarioJoyPal[];
extern const u8 gPssIcon_LucarioMadTiles[];
extern const u16 gPssIcon_LucarioMadPal[];
extern const u8 gPssIcon_LucarioPainTiles[];
extern const u16 gPssIcon_LucarioPainPal[];
extern const u8 gPssIcon_LucarioReadyTiles[];
extern const u16 gPssIcon_LucarioReadyPal[];
extern const u8 gPssIcon_LucarioShoutTiles[];
extern const u16 gPssIcon_LucarioShoutPal[];
extern const u8 gPssIcon_LucarioSpecialTiles[];
extern const u16 gPssIcon_LucarioSpecialPal[];
extern const u8 gPssIcon_LucarioSurprisedTiles[];
extern const u16 gPssIcon_LucarioSurprisedPal[];
extern const u8 gPssIcon_YveltalTiles[];
extern const u16 gPssIcon_YveltalPal[];
extern const u8 gPssIcon_YveltalAttackTiles[];
extern const u16 gPssIcon_YveltalAttackPal[];
extern const u8 gPssIcon_YveltalChargeTiles[];
extern const u16 gPssIcon_YveltalChargePal[];
extern const u8 gPssIcon_YveltalDizzyTiles[];
extern const u16 gPssIcon_YveltalDizzyPal[];
extern const u8 gPssIcon_YveltalMadTiles[];
extern const u16 gPssIcon_YveltalMadPal[];
extern const u8 gPssIcon_YveltalPainTiles[];
extern const u16 gPssIcon_YveltalPainPal[];
extern const u8 gPssIcon_YveltalProudTiles[];
extern const u16 gPssIcon_YveltalProudPal[];
extern const u8 gPssIcon_YveltalReadyTiles[];
extern const u16 gPssIcon_YveltalReadyPal[];
extern const u8 gPssIcon_YveltalSurprisedTiles[];
extern const u16 gPssIcon_YveltalSurprisedPal[];
extern const u8 gPssIcon_NullTiles[];
extern const u16 gPssIcon_NullPal[];


#define PSS_KAZ 1
#define PSS_KAZ_2 2
#define PSS_KAZ_3 3
#define PSS_KAZ_4 4
#define PSS_KAZ_5 5
#define PSS_KAZ_6 6
 #define PSS_KAZ_7 7
#define PSS_ZINNIA 8
#define PSS_ZINNIA_2 9
#define PSS_ZINNIA_3 10
#define PSS_ZINNIA_4 11
#define PSS_ZINNIA_5 12
#define PSS_ZINNIA_6 13
#define PSS_ZINNIA_7 14
#define PSS_ZINNIA_8 15
#define PSS_ZYRO 16
#define PSS_ZYRO_2 17
#define PSS_ZYRO_3 18
#define PSS_ZYRO_4 19
#define PSS_ZYRO_5 20
#define PSS_ZYRO_6 21
#define PSS_ZYREE 22
#define PSS_ZYREE_2 23
#define PSS_ZYREE_3 24
#define PSS_ZYREE_4 25
#define PSS_ZYREE_5 26
#define PSS_ZYREE_6 27
#define PSS_AIZEN 28
#define PSS_AIZEN_2 29
#define PSS_AIZEN_3 30
#define PSS_AIZEN_4 31
#define PSS_AIZEN_5 32
#define PSS_AIZEN_6 33
#define PSS_ABSOL 34
#define PSS_ABSOL_DIZZY 35
#define PSS_ABSOL_HAPPY 36
#define PSS_ABSOL_MAD 37
#define PSS_ABSOL_PAIN 38
#define PSS_ABSOL_SPECIAL 39
#define PSS_ABSOL_READY 40
#define PSS_CHARIZARD_Y 41
#define PSS_GARCHOMP 42
#define PSS_GARCHOMP_DIZZY 43
#define PSS_GARCHOMP_HAPPY 44
#define PSS_GARCHOMP_JOY 45
#define PSS_GARCHOMP_MAD 46
#define PSS_GARCHOMP_PAIN 47
#define PSS_GARCHOMP_READY 48
#define PSS_GARCHOMP_SURPRISED 49
#define PSS_KELDEO 50
#define PSS_LUCARIO 51
#define PSS_LUCARIO_DIZZY 52
#define PSS_LUCARIO_HAPPY 53
#define PSS_LUCARIO_JOY 54
#define PSS_LUCARIO_MAD 55
#define PSS_LUCARIO_PAIN 56
#define PSS_LUCARIO_READY 57
#define PSS_LUCARIO_SHOUT 58
#define PSS_LUCARIO_SPECIAL 59
#define PSS_LUCARIO_SURPRISED 60
#define PSS_YVELTAL 61
#define PSS_YVELTAL_ATTACK 62
#define PSS_YVELTAL_CHARGE 63
#define PSS_YVELTAL_DIZZY 64
#define PSS_YVELTAL_MAD 65
#define PSS_YVELTAL_PAIN 66
#define PSS_YVELTAL_PROUD 67
#define PSS_YVELTAL_READY 68
#define PSS_YVELTAL_SURPRISED 69
#define PSS_NULL  70


#define GFXTAG_PSSICON 0x7000

struct CustomPicEntry
{
    const u8 *gfx;
    const u16 *palette;
};

static const struct CustomPicEntry gCustomPicTable[] =
{
    [PSS_KAZ] = {gPssIcon_KazTiles, gPssIcon_KazPal},
    [PSS_KAZ_2] = {gPssIcon_Kaz2Tiles, gPssIcon_Kaz2Pal},
    [PSS_KAZ_3] = {gPssIcon_Kaz3Tiles, gPssIcon_Kaz3Pal},
    [PSS_KAZ_4] = {gPssIcon_Kaz4Tiles, gPssIcon_Kaz4Pal},
    [PSS_KAZ_5] = {gPssIcon_Kaz5Tiles, gPssIcon_Kaz5Pal},
    [PSS_KAZ_6] = {gPssIcon_Kaz6Tiles, gPssIcon_Kaz6Pal},
    [PSS_KAZ_7] = {gPssIcon_Kaz7Tiles, gPssIcon_Kaz7Pal},
    [PSS_ZINNIA] = {gPssIcon_ZinniaTiles, gPssIcon_ZinniaPal},
    [PSS_ZINNIA_2] = {gPssIcon_Zinnia2Tiles, gPssIcon_Zinnia2Pal},
    [PSS_ZINNIA_3] = {gPssIcon_Zinnia3Tiles, gPssIcon_Zinnia3Pal},
    [PSS_ZINNIA_4] = {gPssIcon_Zinnia4Tiles, gPssIcon_Zinnia4Pal},
    [PSS_ZINNIA_5] = {gPssIcon_Zinnia5Tiles, gPssIcon_Zinnia5Pal},
    [PSS_ZINNIA_6] = {gPssIcon_Zinnia6Tiles, gPssIcon_Zinnia6Pal},
    [PSS_ZINNIA_7] = {gPssIcon_Zinnia7Tiles, gPssIcon_Zinnia7Pal},
    [PSS_ZINNIA_8] = {gPssIcon_Zinnia8Tiles, gPssIcon_Zinnia8Pal},
    [PSS_ZYRO] = {gPssIcon_ZyroTiles, gPssIcon_ZyroPal},
    [PSS_ZYRO_2] = {gPssIcon_Zyro2Tiles, gPssIcon_Zyro2Pal},
    [PSS_ZYRO_3] = {gPssIcon_Zyro3Tiles, gPssIcon_Zyro3Pal},
    [PSS_ZYRO_4] = {gPssIcon_Zyro4Tiles, gPssIcon_Zyro4Pal},
    [PSS_ZYRO_5] = {gPssIcon_Zyro5Tiles, gPssIcon_Zyro5Pal},
    [PSS_ZYRO_6] = {gPssIcon_Zyro6Tiles, gPssIcon_Zyro6Pal},
    [PSS_ZYREE] = {gPssIcon_ZyreeTiles, gPssIcon_ZyreePal},
    [PSS_ZYREE_2] = {gPssIcon_Zyree2Tiles, gPssIcon_Zyree2Pal},
    [PSS_ZYREE_3] = {gPssIcon_Zyree3Tiles, gPssIcon_Zyree3Pal},
    [PSS_ZYREE_4] = {gPssIcon_Zyree4Tiles, gPssIcon_Zyree4Pal},
    [PSS_ZYREE_5] = {gPssIcon_Zyree5Tiles, gPssIcon_Zyree5Pal},
    [PSS_ZYREE_6] = {gPssIcon_Zyree6Tiles, gPssIcon_Zyree6Pal},
    [PSS_AIZEN] = {gPssIcon_AizenTiles, gPssIcon_AizenPal},
    [PSS_AIZEN_2] = {gPssIcon_Aizen2Tiles, gPssIcon_Aizen2Pal},
    [PSS_AIZEN_3] = {gPssIcon_Aizen3Tiles, gPssIcon_Aizen3Pal},
    [PSS_AIZEN_4] = {gPssIcon_Aizen4Tiles, gPssIcon_Aizen4Pal},
    [PSS_AIZEN_5] = {gPssIcon_Aizen5Tiles, gPssIcon_Aizen5Pal},
    [PSS_AIZEN_6] = {gPssIcon_Aizen6Tiles, gPssIcon_Aizen6Pal},
    [PSS_ABSOL] = {gPssIcon_AbsolTiles, gPssIcon_AbsolPal},
    [PSS_ABSOL_DIZZY] = {gPssIcon_AbsolDizzyTiles, gPssIcon_AbsolDizzyPal},
    [PSS_ABSOL_HAPPY] = {gPssIcon_AbsolHappyTiles, gPssIcon_AbsolHappyPal},
    [PSS_ABSOL_MAD] = {gPssIcon_AbsolMadTiles, gPssIcon_AbsolMadPal},
    [PSS_ABSOL_PAIN] = {gPssIcon_AbsolPainTiles, gPssIcon_AbsolPainPal},
    [PSS_ABSOL_SPECIAL] = {gPssIcon_AbsolSpecialTiles, gPssIcon_AbsolSpecialPal},
    [PSS_ABSOL_READY] = {gPssIcon_AbsolReadyTiles, gPssIcon_AbsolReadyPal},
    [PSS_CHARIZARD_Y] = {gPssIcon_CharizardYTiles, gPssIcon_CharizardYPal},
    [PSS_GARCHOMP] = {gPssIcon_GarchompTiles, gPssIcon_GarchompPal},
    [PSS_GARCHOMP_DIZZY] = {gPssIcon_GarchompDizzyTiles, gPssIcon_GarchompDizzyPal},
    [PSS_GARCHOMP_HAPPY] = {gPssIcon_GarchompHappyTiles, gPssIcon_GarchompHappyPal},
    [PSS_GARCHOMP_JOY] = {gPssIcon_GarchompJoyTiles, gPssIcon_GarchompJoyPal},
    [PSS_GARCHOMP_MAD] = {gPssIcon_GarchompMadTiles, gPssIcon_GarchompMadPal},
    [PSS_GARCHOMP_PAIN] = {gPssIcon_GarchompPainTiles, gPssIcon_GarchompPainPal},
    [PSS_GARCHOMP_READY] = {gPssIcon_GarchompReadyTiles, gPssIcon_GarchompReadyPal},
    [PSS_GARCHOMP_SURPRISED] = {gPssIcon_GarchompSurprisedTiles, gPssIcon_GarchompSurprisedPal},
    [PSS_KELDEO] = {gPssIcon_KeldeoTiles, gPssIcon_KeldeoPal},
    [PSS_LUCARIO_DIZZY] = {gPssIcon_LucarioDizzyTiles, gPssIcon_LucarioDizzyPal},
    [PSS_LUCARIO_HAPPY] = {gPssIcon_LucarioHappyTiles, gPssIcon_LucarioHappyPal},
    [PSS_LUCARIO_JOY] = {gPssIcon_LucarioJoyTiles, gPssIcon_LucarioJoyPal},
    [PSS_LUCARIO_MAD] = {gPssIcon_LucarioMadTiles, gPssIcon_LucarioMadPal},
    [PSS_LUCARIO_PAIN] = {gPssIcon_LucarioPainTiles, gPssIcon_LucarioPainPal},
    [PSS_LUCARIO_READY] = {gPssIcon_LucarioReadyTiles, gPssIcon_LucarioReadyPal},
    [PSS_LUCARIO_SHOUT] = {gPssIcon_LucarioShoutTiles, gPssIcon_LucarioShoutPal},
    [PSS_LUCARIO_SPECIAL] = {gPssIcon_LucarioSpecialTiles, gPssIcon_LucarioSpecialPal},
    [PSS_LUCARIO_SURPRISED] = {gPssIcon_LucarioSurprisedTiles, gPssIcon_LucarioSurprisedPal},
    [PSS_YVELTAL] = {gPssIcon_YveltalTiles, gPssIcon_YveltalPal},
    [PSS_YVELTAL_ATTACK] = {gPssIcon_YveltalAttackTiles, gPssIcon_YveltalAttackPal},
    [PSS_YVELTAL_CHARGE] = {gPssIcon_YveltalChargeTiles, gPssIcon_YveltalChargePal},
    [PSS_YVELTAL_DIZZY] = {gPssIcon_YveltalDizzyTiles, gPssIcon_YveltalDizzyPal},
    [PSS_YVELTAL_MAD] = {gPssIcon_YveltalMadTiles, gPssIcon_YveltalMadPal},
    [PSS_YVELTAL_PAIN] = {gPssIcon_YveltalPainTiles, gPssIcon_YveltalPainPal},
    [PSS_YVELTAL_PROUD] = {gPssIcon_YveltalProudTiles, gPssIcon_YveltalProudPal},
    [PSS_YVELTAL_READY] = {gPssIcon_YveltalReadyTiles, gPssIcon_YveltalReadyPal},
    [PSS_YVELTAL_SURPRISED] = {gPssIcon_YveltalSurprisedTiles, gPssIcon_YveltalSurprisedPal},
    [PSS_NULL] = {gPssIcon_NullTiles, gPssIcon_NullPal},
};

#define TASK_NONE 0xFF

static const struct OamData sOamData_PssIcon =
{
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0, // 4bpp
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .priority = 1,
    .paletteNum = 13,
};

struct SpriteTemplate sPSSIconTemplate =
{
    .tileTag = GFXTAG_PSSICON,
    .paletteTag = 0xFFFF,
    .oam = &sOamData_PssIcon,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

#define tState        data[0]
#define tSpecies      data[1]
#define tSpriteId     data[2]
#define tWindowId     data[5]

void ShowPssIconFromTable(void)
{
    u8 spriteId;
    u8 taskId;
    u8 index = VarGet(Var8008);
    u8 x = 0xff;
    u8 y = 0x6;

    CloseMuseumFossilPic();

    if (index >= ARRAY_COUNT(gCustomPicTable))
        return;

    const struct CustomPicEntry *entry = &gCustomPicTable[index];
    
    LoadCompressedSpriteSheet(&(struct CompressedSpriteSheet){
        .data = entry->gfx,
        .size = 0x800,
        .tag = GFXTAG_PSSICON,
    });

    LoadCompressedPalette(entry->palette,
                          OBJ_PLTT_ID(13),
                          32);

    spriteId = CreateSprite(&sPSSIconTemplate, x * 8 + 40, y * 8 + 35, 0);
    gSprites[spriteId].oam.paletteNum = 13;
    taskId = CreateTask(Task_WaitPssIcon, 80);
    gTasks[taskId].tState = 0;
    gTasks[taskId].tSpriteId = spriteId;
    gSprites[spriteId].oam.priority = 0;
    ScheduleBgCopyTilemapToVram(0);
}

void CloseMuseumFossilPic(void)
{
    u8 taskId = FindTaskIdByFunc(Task_WaitPssIcon);
    if (taskId != 0xFF)
    {
        u8 spriteId = gTasks[taskId].tSpriteId;

        if (spriteId < MAX_SPRITES)
        {
            struct Sprite *sprite = &gSprites[spriteId];

            FreeSpriteOamMatrix(sprite);
            DestroySprite(sprite);
            FreeSpriteTiles(sprite);
            FreeSpritePalette(sprite);
        }
        FreeSpriteTilesByTag(GFXTAG_PSSICON);
        DestroyTask(taskId);
    }
}

static void Task_WaitPssIcon(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    switch (task->tState)
    {
    case 0:
        task->tState++;
        break;
    case 1:
        break;
    case 2:
        DestroySprite(&gSprites[task->tSpriteId]);
        FreeSpriteTilesByTag(GFXTAG_PSSICON);
        task->tState++;
        break;
    case 3:
        DestroyScriptMenuWindow(task->tWindowId);
        DestroyTask(taskId);
        break;
    }
}