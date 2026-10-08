// /Script/Engine.BlendParameter
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Animation/BlendSpaceBase.h

USTRUCT()
struct FBlendParameter
{
    UPROPERTY(EditAnywhere) FString DisplayName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) float Min;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float Max;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) int32 GridNum;  // 0x0018, size 0x4
};
