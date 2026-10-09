// /Script/ControlRig.RigInfluenceEntryModifier
// size 0x10, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigInfluenceMap.h

USTRUCT()
struct FRigInfluenceEntryModifier
{
public:
    UPROPERTY(EditAnywhere) TArray<FRigElementKey> AffectedList;  // 0x0000, size 0x10
};
