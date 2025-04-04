#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGenMidwest[] =
{
#endif

#if P_FAMILY_POSSUMONE
    [SPECIES_POSSUMONE] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 62,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 61,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("POSSUMONE"),
        .cryId = CRY_FENNEKIN,
        .natDexNum = NATIONAL_DEX_POSSUMONE,
        .categoryName = _("PossumONE"),
        .height = 4,
        .weight = 94,
        .description = COMPOUND_STRING(
            "it baby. that all there is to it. \n"
            "it baby"),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Possumone,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Possumone,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Possumone,
        .shinyPalette = gMonShinyPalette_Possumone,
        .iconSprite = gMonIcon_Possumone,
        .iconPalIndex = 0,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Possumone)
        OVERWORLD(
            sPicTable_Possumone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Possumone,
            gShinyOverworldPalette_Possumone
        )
        .levelUpLearnset = sPossumoneLevelUpLearnset,
        .teachableLearnset = sPossumoneTeachableLearnset,
        .eggMoveLearnset = sPossumoneEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_POSSUMTWO}),
    },

    [SPECIES_POSSUMTWO] =
    {
        .baseHP        = 59,
        .baseAttack    = 59,
        .baseDefense   = 58,
        .baseSpeed     = 73,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 143,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("possumtwo"),
        .cryId = CRY_FENNEKIN,
        .natDexNum = NATIONAL_DEX_POSSUMTWO,
        .categoryName = _("Fox"),
        .height = 10,
        .weight = 145,
        .description = COMPOUND_STRING(
            "possumtwo has a twig stuck in its tail.\n"
            "When the twig is plucked from its tail,\n"
            "friction sets the twig alight. The flame\n"
            "is used to send signals to its allies."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Possumtwo,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Possumtwo,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Possumtwo,
        .shinyPalette = gMonShinyPalette_Possumtwo,
        .iconSprite = gMonIcon_Possumtwo,
        .iconPalIndex = 0,
        SHADOW(-2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Possumtwo)
        OVERWORLD(
            sPicTable_Possumtwo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Possumtwo,
            gShinyOverworldPalette_Possumtwo
        )
        .levelUpLearnset = sPossumtwoLevelUpLearnset,
        .teachableLearnset = sPossumtwoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_POSSUMTHREE}),
    },

    [SPECIES_POSSUMTHREE] =
    {
        .baseHP        = 75,
        .baseAttack    = 69,
        .baseDefense   = 72,
        .baseSpeed     = 104,
        .baseSpAttack  = 114,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_FIRE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 267 : 240,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("possumthree"),
        .cryId = CRY_FENNEKIN,
        .natDexNum = NATIONAL_DEX_POSSUMTHREE,
        .categoryName = _("Fox"),
        .height = 15,
        .weight = 390,
        .description = COMPOUND_STRING(
            "It gazes into the flame at the tip of its\n"
            "branch to achieve a focused state, which\n"
            "allows it to see into the future. It uses\n"
            "psychic power to incinerate its foes."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Possumthree,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Possumthree,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Possumthree,
        .shinyPalette = gMonShinyPalette_Possumthree,
        .iconSprite = gMonIcon_Possumthree,
        .iconPalIndex = 0,
        SHADOW(7, 14, SHADOW_SIZE_M)
        FOOTPRINT(Possumthree)
        OVERWORLD(
            sPicTable_Possumthree,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Possumthree,
            gShinyOverworldPalette_Possumthree,
        )
        .levelUpLearnset = sPossumthreeLevelUpLearnset,
        .teachableLearnset = sPossumthreeTeachableLearnset,
    },
#endif //P_FAMILY_POSSUMONE

#if P_FAMILY_SNAKEONE
    [SPECIES_SNAKEONE] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 62,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 61,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("SNAKEONE"),
        .cryId = CRY_FENNEKIN,
        .natDexNum = NATIONAL_DEX_SNAKEONE,
        .categoryName = _("SnakeONE"),
        .height = 4,
        .weight = 94,
        .description = COMPOUND_STRING(
            "it baby. that all there is to it. \n"
            "it baby"),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Snakeone,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Snakeone,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Snakeone,
        .shinyPalette = gMonShinyPalette_Snakeone,
        .iconSprite = gMonIcon_Snakeone,
        .iconPalIndex = 0,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Snakeone)
        OVERWORLD(
            sPicTable_Snakeone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Snakeone,
            gShinyOverworldPalette_Snakeone
        )
        .levelUpLearnset = sSnakeoneLevelUpLearnset,
        .teachableLearnset = sSnakeoneTeachableLearnset,
        .eggMoveLearnset = sSnakeoneEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_SNAKETWO}),
    },

    [SPECIES_SNAKETWO] =
    {
        .baseHP        = 59,
        .baseAttack    = 59,
        .baseDefense   = 58,
        .baseSpeed     = 73,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 143,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("snaketwo"),
        .cryId = CRY_FENNEKIN,
        .natDexNum = NATIONAL_DEX_SNAKETWO,
        .categoryName = _("Fox"),
        .height = 10,
        .weight = 145,
        .description = COMPOUND_STRING(
            "snaketwo has a twig stuck in its tail.\n"
            "When the twig is plucked from its tail,\n"
            "friction sets the twig alight. The flame\n"
            "is used to send signals to its allies."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Snaketwo,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Snaketwo,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Snaketwo,
        .shinyPalette = gMonShinyPalette_Snaketwo,
        .iconSprite = gMonIcon_Snaketwo,
        .iconPalIndex = 0,
        SHADOW(-2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Snaketwo)
        OVERWORLD(
            sPicTable_Snaketwo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Snaketwo,
            gShinyOverworldPalette_Snaketwo
        )
        .levelUpLearnset = sSnaketwoLevelUpLearnset,
        .teachableLearnset = sSnaketwoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SNAKETHREE}),
    },

    [SPECIES_SNAKETHREE] =
    {
        .baseHP        = 75,
        .baseAttack    = 69,
        .baseDefense   = 72,
        .baseSpeed     = 104,
        .baseSpAttack  = 114,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_FIRE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 267 : 240,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("snakethree"),
        .cryId = CRY_FENNEKIN,
        .natDexNum = NATIONAL_DEX_SNAKETHREE,
        .categoryName = _("Fox"),
        .height = 15,
        .weight = 390,
        .description = COMPOUND_STRING(
            "It gazes into the flame at the tip of its\n"
            "branch to achieve a focused state, which\n"
            "allows it to see into the future. It uses\n"
            "psychic power to incinerate its foes."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Snakethree,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Snakethree,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Snakethree,
        .shinyPalette = gMonShinyPalette_Snakethree,
        .iconSprite = gMonIcon_Snakethree,
        .iconPalIndex = 0,
        SHADOW(7, 14, SHADOW_SIZE_M)
        FOOTPRINT(Snakethree)
        OVERWORLD(
            sPicTable_Snakethree,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Snakethree,
            gShinyOverworldPalette_Snakethree,
        )
        .levelUpLearnset = sSnakethreeLevelUpLearnset,
        .teachableLearnset = sSnakethreeTeachableLearnset,
    },
#endif //P_FAMILY_SNAKEONE

#if P_FAMILY_RACCOONONE
    [SPECIES_RACCOONONE] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 62,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 61,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("RACCOONONE"),
        .cryId = CRY_FENNEKIN,
        .natDexNum = NATIONAL_DEX_RACCOONONE,
        .categoryName = _("RACCOONONE"),
        .height = 4,
        .weight = 94,
        .description = COMPOUND_STRING(
            "it baby. that all there is to it. \n"
            "it baby"),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Raccoonone,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Raccoonone,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Raccoonone,
        .shinyPalette = gMonShinyPalette_Raccoonone,
        .iconSprite = gMonIcon_Raccoonone,
        .iconPalIndex = 0,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Raccoonone)
        OVERWORLD(
            sPicTable_Raccoonone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Raccoonone,
            gShinyOverworldPalette_Raccoonone
        )
        .levelUpLearnset = sRaccoononeLevelUpLearnset,
        .teachableLearnset = sRaccoononeTeachableLearnset,
        .eggMoveLearnset = sRaccoononeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_RACCOONTWO}),
    },

    [SPECIES_RACCOONTWO] =
    {
        .baseHP        = 59,
        .baseAttack    = 59,
        .baseDefense   = 58,
        .baseSpeed     = 73,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 143,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("raccoontwo"),
        .cryId = CRY_FENNEKIN,
        .natDexNum = NATIONAL_DEX_RACCOONTWO,
        .categoryName = _("Fox"),
        .height = 10,
        .weight = 145,
        .description = COMPOUND_STRING(
            "raccoontwo has a twig stuck in its tail.\n"
            "When the twig is plucked from its tail,\n"
            "friction sets the twig alight. The flame\n"
            "is used to send signals to its allies."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Raccoontwo,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Raccoontwo,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Raccoontwo,
        .shinyPalette = gMonShinyPalette_Raccoontwo,
        .iconSprite = gMonIcon_Raccoontwo,
        .iconPalIndex = 0,
        SHADOW(-2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Raccoontwo)
        OVERWORLD(
            sPicTable_Raccoontwo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Raccoontwo,
            gShinyOverworldPalette_Raccoontwo
        )
        .levelUpLearnset = sRaccoontwoLevelUpLearnset,
        .teachableLearnset = sRaccoontwoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_RACCOONTHREE}),
    },

    [SPECIES_RACCOONTHREE] =
    {
        .baseHP        = 75,
        .baseAttack    = 69,
        .baseDefense   = 72,
        .baseSpeed     = 104,
        .baseSpAttack  = 114,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_FIRE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 267 : 240,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("raccoonthree"),
        .cryId = CRY_FENNEKIN,
        .natDexNum = NATIONAL_DEX_RACCOONTHREE,
        .categoryName = _("Fox"),
        .height = 15,
        .weight = 390,
        .description = COMPOUND_STRING(
            "It gazes into the flame at the tip of its\n"
            "branch to achieve a focused state, which\n"
            "allows it to see into the future. It uses\n"
            "psychic power to incinerate its foes."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Raccoonthree,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Raccoonthree,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Raccoonthree,
        .shinyPalette = gMonShinyPalette_Raccoonthree,
        .iconSprite = gMonIcon_Raccoonthree,
        .iconPalIndex = 0,
        SHADOW(7, 14, SHADOW_SIZE_M)
        FOOTPRINT(Raccoonthree)
        OVERWORLD(
            sPicTable_Raccoonthree,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Raccoonthree,
            gShinyOverworldPalette_Raccoonthree,
        )
        .levelUpLearnset = sRaccoonthreeLevelUpLearnset,
        .teachableLearnset = sRaccoonthreeTeachableLearnset,
    },
#endif //P_FAMILY_RACCOONONE

#if P_FAMILY_SALYNX
    [SPECIES_SALYNX] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 62,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 45,
        .expYield = 61,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("SALYNX"),
        .cryId = CRY_FENNEKIN,
        .natDexNum = NATIONAL_DEX_SALYNX,
        .categoryName = _("Salynx"),
        .height = 4,
        .weight = 94,
        .description = COMPOUND_STRING(
            "it baby. that all there is to it. \n"
            "it baby"),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Salynx,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Salynx,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Salynx,
        .shinyPalette = gMonShinyPalette_Salynx,
        .iconSprite = gMonIcon_Salynx,
        .iconPalIndex = 0,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Salynx)
        OVERWORLD(
            sPicTable_Salynx,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Salynx,
            gShinyOverworldPalette_Salynx,
        )
        .levelUpLearnset = sSalynxLevelUpLearnset,
        .teachableLearnset = sSalynxTeachableLearnset,
        .eggMoveLearnset = sSalynxEggMoveLearnset,
    },
#endif //P_FAMILY_SALYNX

#ifdef __INTELLISENSE__
};
#endif
