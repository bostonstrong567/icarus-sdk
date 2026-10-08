// /Script/Engine.WeightedBlendable
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/Scene.h

USTRUCT()
struct FWeightedBlendable
{
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Weight;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* Object;  // 0x0008, size 0x8
};
