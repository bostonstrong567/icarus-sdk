// /Script/Engine.StaticParameterSet
// size 0x40, declared in Engine/Source/Runtime/Engine/Public/StaticParameterSet.h

USTRUCT()
struct FStaticParameterSet
{
    UPROPERTY() TArray<FStaticSwitchParameter> StaticSwitchParameters;  // 0x0000, size 0x10
    UPROPERTY() TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters;  // 0x0010, size 0x10
    UPROPERTY() TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters;  // 0x0020, size 0x10
    UPROPERTY() TArray<FStaticMaterialLayersParameter> MaterialLayersParameters;  // 0x0030, size 0x10
};
