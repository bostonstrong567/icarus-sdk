// /Script/Engine.MaterialTextureInfo
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialInterface.h

USTRUCT()
struct FMaterialTextureInfo
{
public:
    UPROPERTY() float SamplingScale;  // 0x0000, size 0x4
    UPROPERTY() int32 UVChannelIndex;  // 0x0004, size 0x4
    UPROPERTY() FName TextureName;  // 0x0008, size 0x8
};
