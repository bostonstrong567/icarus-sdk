// /Script/ControlRig.RigSpace
// size 0x90, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigSpaceHierarchy.h

USTRUCT()
struct FRigSpace : public FRigElement
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERigSpaceType SpaceType;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ParentName;  // 0x001C, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) int32 ParentIndex;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FTransform InitialTransform;  // 0x0030, size 0x30
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) FTransform LocalTransform;  // 0x0060, size 0x30
};
