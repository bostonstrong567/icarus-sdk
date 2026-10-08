// /Script/Engine.TransformBase
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Animation/Rig.h

USTRUCT()
struct FTransformBase
{
    UPROPERTY(EditAnywhere) FName Node;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FTransformBaseConstraint Constraints;  // 0x0008, size 0x10
};
