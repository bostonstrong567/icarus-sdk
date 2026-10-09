// /Script/Engine.ReferencePose
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Animation/Skeleton.h

USTRUCT()
struct FReferencePose
{
public:
    UPROPERTY() FName PoseName;  // 0x0000, size 0x8
    UPROPERTY() TArray<FTransform> ReferencePose;  // 0x0008, size 0x10
};
