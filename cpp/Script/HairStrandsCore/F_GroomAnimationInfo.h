// /Script/HairStrandsCore.GroomAnimationInfo
// size 0x20, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomCacheData.h

USTRUCT()
struct FGroomAnimationInfo
{
public:
    UPROPERTY(EditAnywhere) uint32 NumFrames;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float SecondsPerFrame;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float Duration;  // 0x0008, size 0x4
    UPROPERTY() float StartTime;  // 0x000C, size 0x4
    UPROPERTY() float EndTime;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) int32 StartFrame;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) int32 EndFrame;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) EGroomCacheAttributes Attributes;  // 0x001C, size 0x1
};
