// /Script/HairStrandsCore.GroomCacheInfo
// size 0x28, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomCacheData.h

USTRUCT()
struct FGroomCacheInfo
{
    UPROPERTY() int32 Version;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) EGroomCacheType Type;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere) FGroomAnimationInfo AnimationInfo;  // 0x0008, size 0x20
};
