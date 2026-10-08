// /Script/Engine.ComponentSpacePose
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationTypes.h

USTRUCT()
struct FComponentSpacePose
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> Transforms;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> Names;  // 0x0010, size 0x10
};
