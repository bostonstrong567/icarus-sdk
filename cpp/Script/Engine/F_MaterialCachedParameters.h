// /Script/Engine.MaterialCachedParameters
// size 0x150, declared in Engine/Source/Runtime/Engine/Public/MaterialCachedData.h

USTRUCT()
struct FMaterialCachedParameters
{
    UPROPERTY() FMaterialCachedParameterEntry RuntimeEntries;  // 0x0000, size 0x30
    UPROPERTY() TArray<float> ScalarValues;  // 0x00F0, size 0x10
    UPROPERTY() TArray<FLinearColor> VectorValues;  // 0x0100, size 0x10
    UPROPERTY() TArray<UTexture*> TextureValues;  // 0x0110, size 0x10
    UPROPERTY() TArray<UFont*> FontValues;  // 0x0120, size 0x10
    UPROPERTY() TArray<int32> FontPageValues;  // 0x0130, size 0x10
    UPROPERTY() TArray<URuntimeVirtualTexture*> RuntimeVirtualTextureValues;  // 0x0140, size 0x10
};
