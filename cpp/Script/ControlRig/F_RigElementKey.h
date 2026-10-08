// /Script/ControlRig.RigElementKey
// size 0xC, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigHierarchyDefines.h

USTRUCT()
struct FRigElementKey
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERigElementType Type;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Name;  // 0x0004, size 0x8
};
