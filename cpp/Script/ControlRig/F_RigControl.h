// /Script/ControlRig.RigControl
// size 0x2F0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigControlHierarchy.h

USTRUCT()
struct FRigControl : public FRigElement
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERigControlType ControlType;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DisplayName;  // 0x001C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ParentName;  // 0x0024, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) int32 ParentIndex;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName SpaceName;  // 0x0030, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) int32 SpaceIndex;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform OffsetTransform;  // 0x0040, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FRigControlValue InitialValue;  // 0x0070, size 0x80
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) FRigControlValue Value;  // 0x00F0, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERigControlAxis PrimaryAxis;  // 0x0170, size 0x1
    UPROPERTY(Transient) bool bIsCurve;  // 0x0171, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAnimatable;  // 0x0172, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLimitTranslation;  // 0x0173, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLimitRotation;  // 0x0174, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLimitScale;  // 0x0175, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDrawLimits;  // 0x0176, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRigControlValue MinimumValue;  // 0x0180, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRigControlValue MaximumValue;  // 0x0200, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bGizmoEnabled;  // 0x0280, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bGizmoVisible;  // 0x0281, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName GizmoName;  // 0x0284, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform GizmoTransform;  // 0x0290, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor GizmoColor;  // 0x02C0, size 0x10
    UPROPERTY(Transient) TArray<int32> Dependents;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsTransientControl;  // 0x02E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UEnum* ControlEnum;  // 0x02E8, size 0x8
};
