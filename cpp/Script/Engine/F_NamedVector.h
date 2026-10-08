// /Script/Engine.NamedVector
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationTypes.h

USTRUCT()
struct FNamedVector
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Value;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Name;  // 0x000C, size 0x8
};
