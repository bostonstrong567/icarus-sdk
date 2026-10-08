// /Script/ControlRig.RigMirrorSettings
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigHierarchyContainer.h

USTRUCT()
struct FRigMirrorSettings
{
    UPROPERTY(EditAnywhere) TEnumAsByte<EAxis> MirrorAxis;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EAxis> AxisToFlip;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) FString OldName;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) FString NewName;  // 0x0018, size 0x10
};
