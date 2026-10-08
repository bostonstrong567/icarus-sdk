// /Script/SubstanceCore.EDefaultSubstanceTextureSize
UENUM()
enum class EDefaultSubstanceTextureSize : int32
{
    SIZE_0 = 0,
    SIZE_16 = 4,
    SIZE_32 = 5,
    SIZE_64 = 6,
    SIZE_128 = 7,
    SIZE_256 = 8,
    SIZE_512 = 9,
    SIZE_1024 = 10,
    SIZE_2048 = 11,
    SIZE_4096 = 12,
};

// /Script/SubstanceCore.ESubstanceEngineType
UENUM()
enum class ESubstanceEngineType : int32
{
    SET_CPU = 0,
    SET_GPU = 1,
};

// /Script/SubstanceCore.ESubstanceGenerationMode
UENUM()
enum class ESubstanceGenerationMode : int32
{
    SGM_PlatformDefault = 0,
    SGM_Baked = 1,
    SGM_OnLoadSync = 2,
    SGM_OnLoadSyncAndCache = 3,
    SGM_OnLoadAsync = 4,
    SGM_OnLoadAsyncAndCache = 5,
    SGM_MAX = 6,
};

// /Script/SubstanceCore.ESubstanceInputType
UENUM()
enum class ESubstanceInputType : int32
{
    SIT_Float = 0,
    SIT_Float2 = 1,
    SIT_Float3 = 2,
    SIT_Float4 = 3,
    SIT_Integer = 4,
    SIT_Image = 5,
    SIT_Unused_6 = 6,
    SIT_Unused_7 = 7,
    SIT_Integer2 = 8,
    SIT_Integer3 = 9,
    SIT_Integer4 = 10,
    SIT_MAX = 11,
};

// /Script/SubstanceCore.ESubstanceTextureSize
UENUM()
enum class ESubstanceTextureSize : int32
{
    ERL_16 = 0,
    ERL_32 = 1,
    ERL_64 = 2,
    ERL_128 = 3,
    ERL_256 = 4,
    ERL_512 = 5,
    ERL_1024 = 6,
    ERL_2048 = 7,
    ERL_4096 = 8,
    ERL_8192 = 9,
};
