// /Script/ControlRig.RigUnit_DrawContainerSetThickness
// size 0x78, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Drawing/RigUnit_DrawContainer.h

USTRUCT()
struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{
    UPROPERTY() FName InstructionName;  // 0x0068, size 0x8
    UPROPERTY() float Thickness;  // 0x0070, size 0x4
};
