// /Script/ControlRig.RigUnit_DrawContainerSetTransform
// size 0xA0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Drawing/RigUnit_DrawContainer.h

USTRUCT()
struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{
public:
    UPROPERTY() FName InstructionName;  // 0x0068, size 0x8
    UPROPERTY() FTransform Transform;  // 0x0070, size 0x30
};
