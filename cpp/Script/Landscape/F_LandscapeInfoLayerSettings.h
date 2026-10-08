// /Script/Landscape.LandscapeInfoLayerSettings
// size 0x10, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeInfo.h

USTRUCT()
struct FLandscapeInfoLayerSettings
{
    UPROPERTY() ULandscapeLayerInfoObject* LayerInfoObj;  // 0x0000, size 0x8
    UPROPERTY() FName LayerName;  // 0x0008, size 0x8
};
