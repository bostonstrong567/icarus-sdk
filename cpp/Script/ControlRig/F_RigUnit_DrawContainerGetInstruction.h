// /Script/ControlRig.RigUnit_DrawContainerGetInstruction
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Drawing/RigUnit_DrawContainer.h

USTRUCT()
struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
{
    UPROPERTY() FName InstructionName;  // 0x0008, size 0x8
    UPROPERTY() FLinearColor Color;  // 0x0010, size 0x10
    UPROPERTY() FTransform Transform;  // 0x0020, size 0x30
};
