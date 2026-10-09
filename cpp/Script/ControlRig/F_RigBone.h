// /Script/ControlRig.RigBone
// size 0xE0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigBoneHierarchy.h

USTRUCT()
struct FRigBone : public FRigElement
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ParentName;  // 0x0018, size 0x8
    UPROPERTY(Transient) int32 ParentIndex;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FTransform InitialTransform;  // 0x0030, size 0x30
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) FTransform GlobalTransform;  // 0x0060, size 0x30
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) FTransform LocalTransform;  // 0x0090, size 0x30
    UPROPERTY(Transient) TArray<int32> Dependents;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERigBoneType Type;  // 0x00D0, size 0x1
};
