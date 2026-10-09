// /Script/ControlRig.ControlRigDrawContainer
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Drawing/ControlRigDrawContainer.h

USTRUCT()
struct FControlRigDrawContainer
{
public:
    UPROPERTY(EditAnywhere) TArray<FControlRigDrawInstruction> Instructions;  // 0x0008, size 0x10
};
