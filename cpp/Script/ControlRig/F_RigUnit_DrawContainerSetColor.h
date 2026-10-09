// /Script/ControlRig.RigUnit_DrawContainerSetColor
// size 0x80, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Drawing/RigUnit_DrawContainer.h

USTRUCT()
struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{
public:
    UPROPERTY() FName InstructionName;  // 0x0068, size 0x8
    UPROPERTY() FLinearColor Color;  // 0x0070, size 0x10
};
