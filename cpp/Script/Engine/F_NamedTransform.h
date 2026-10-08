// /Script/Engine.NamedTransform
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationTypes.h

USTRUCT()
struct FNamedTransform
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Value;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Name;  // 0x0030, size 0x8
};
