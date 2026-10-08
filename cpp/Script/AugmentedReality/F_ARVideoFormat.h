// /Script/AugmentedReality.ARVideoFormat
// size 0xC, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTypes.h

USTRUCT()
struct FARVideoFormat
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 FPS;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Width;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Height;  // 0x0008, size 0x4
};
