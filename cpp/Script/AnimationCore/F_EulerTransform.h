// /Script/AnimationCore.EulerTransform
// size 0x24, declared in Engine/Source/Runtime/AnimationCore/Public/EulerTransform.h

USTRUCT()
struct FEulerTransform
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Rotation;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Scale;  // 0x0018, size 0xC
};
