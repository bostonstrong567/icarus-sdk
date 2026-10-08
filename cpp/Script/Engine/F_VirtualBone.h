// /Script/Engine.VirtualBone
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Animation/Skeleton.h

USTRUCT()
struct FVirtualBone
{
    UPROPERTY() FName SourceBoneName;  // 0x0000, size 0x8
    UPROPERTY() FName TargetBoneName;  // 0x0008, size 0x8
    UPROPERTY() FName VirtualBoneName;  // 0x0010, size 0x8
};
