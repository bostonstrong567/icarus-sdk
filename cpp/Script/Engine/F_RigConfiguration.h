// /Script/Engine.RigConfiguration
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Animation/Skeleton.h

USTRUCT()
struct FRigConfiguration
{
    UPROPERTY() URig* Rig;  // 0x0000, size 0x8
    UPROPERTY() TArray<FNameMapping> BoneMappingTable;  // 0x0008, size 0x10
};
