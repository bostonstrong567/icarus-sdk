// /Script/Engine.NamedCurveValue
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Animation/CurveSourceInterface.h

USTRUCT()
struct FNamedCurveValue
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Value;  // 0x0008, size 0x4
};
