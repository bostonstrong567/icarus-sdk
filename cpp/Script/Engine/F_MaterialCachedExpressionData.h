// /Script/Engine.MaterialCachedExpressionData
// size 0x1D8, declared in Engine/Source/Runtime/Engine/Public/MaterialCachedData.h

USTRUCT()
struct FMaterialCachedExpressionData
{
    UPROPERTY() FMaterialCachedParameters Parameters;  // 0x0000, size 0x150
    UPROPERTY() TArray<UObject*> ReferencedTextures;  // 0x0150, size 0x10
    UPROPERTY() TArray<FMaterialFunctionInfo> FunctionInfos;  // 0x0160, size 0x10
    UPROPERTY() TArray<FMaterialParameterCollectionInfo> ParameterCollectionInfos;  // 0x0170, size 0x10
    UPROPERTY() TArray<UMaterialFunctionInterface*> DefaultLayers;  // 0x0180, size 0x10
    UPROPERTY() TArray<UMaterialFunctionInterface*> DefaultLayerBlends;  // 0x0190, size 0x10
    UPROPERTY() TArray<ULandscapeGrassType*> GrassTypes;  // 0x01A0, size 0x10
    UPROPERTY() TArray<FName> DynamicParameterNames;  // 0x01B0, size 0x10
    UPROPERTY() TArray<bool> QualityLevelsUsed;  // 0x01C0, size 0x10
    UPROPERTY() uint8 bHasRuntimeVirtualTextureOutput : 1;  // 0x01D0, mask 0x01
    UPROPERTY() uint8 bHasSceneColor : 1;  // 0x01D0, mask 0x02
};
