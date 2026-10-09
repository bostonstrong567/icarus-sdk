// /Script/Engine.ScalarParameterAtlasInstanceData
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialInstance.h

USTRUCT()
struct FScalarParameterAtlasInstanceData
{
public:
    UPROPERTY() bool bIsUsedAsAtlasPosition;  // 0x0000, size 0x1
    UPROPERTY() TSoftObjectPtr<UCurveLinearColor> Curve;  // 0x0008, size 0x28
    UPROPERTY() TSoftObjectPtr<UCurveLinearColorAtlas> Atlas;  // 0x0030, size 0x28
};
