// /Script/Engine.SingleAnimationPlayData
// size 0x18, declared in Engine/Source/Runtime/Engine/Public/SingleAnimationPlayData.h

USTRUCT()
struct FSingleAnimationPlayData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimationAsset* AnimToPlay;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSavedLooping : 1;  // 0x0008, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSavedPlaying : 1;  // 0x0008, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SavedPosition;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SavedPlayRate;  // 0x0010, size 0x4
};
