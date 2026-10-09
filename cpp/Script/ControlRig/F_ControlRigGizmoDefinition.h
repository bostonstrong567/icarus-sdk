// /Script/ControlRig.ControlRigGizmoDefinition
// size 0x60, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRigGizmoLibrary.h

USTRUCT()
struct FControlRigGizmoDefinition
{
public:
    UPROPERTY(EditAnywhere) FName GizmoName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TSoftObjectPtr<UStaticMesh> StaticMesh;  // 0x0008, size 0x28
    UPROPERTY(EditAnywhere) FTransform Transform;  // 0x0030, size 0x30
};
