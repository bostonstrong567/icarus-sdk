// /Script/ControlRig.RigUnit_SetControlVisibility
// size 0xA0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetControlVisibility.h

USTRUCT()
struct FRigUnit_SetControlVisibility : public FRigUnitMutable
{
public:
    UPROPERTY() FRigElementKey Item;  // 0x0068, size 0xC
    UPROPERTY() FString Pattern;  // 0x0078, size 0x10
    UPROPERTY() bool bVisible;  // 0x0088, size 0x1
    UPROPERTY() TArray<FCachedRigElement> CachedControlIndices;  // 0x0090, size 0x10
};
