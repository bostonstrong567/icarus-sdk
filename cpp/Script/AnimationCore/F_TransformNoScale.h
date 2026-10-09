// /Script/AnimationCore.TransformNoScale
// size 0x20, declared in Engine/Source/Runtime/AnimationCore/Public/TransformNoScale.h

USTRUCT()
struct FTransformNoScale
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQuat Rotation;  // 0x0010, size 0x10
};
