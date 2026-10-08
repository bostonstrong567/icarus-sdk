// /Script/Engine.NamedColor
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationTypes.h

USTRUCT()
struct FNamedColor
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Value;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Name;  // 0x0004, size 0x8
};
