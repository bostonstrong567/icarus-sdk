// /Script/ControlRig.ControlRigGizmoLibrary
// Derives from: UObject
// size 0xE0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRigGizmoLibrary.h

UCLASS()
class UControlRigGizmoLibrary : public UObject
{
public:
    UPROPERTY(EditAnywhere) FControlRigGizmoDefinition DefaultGizmo;  // 0x0030, size 0x60
    UPROPERTY(EditAnywhere) TSoftObjectPtr<UMaterial> DefaultMaterial;  // 0x0090, size 0x28
    UPROPERTY(EditAnywhere) FName MaterialColorParameter;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere) TArray<FControlRigGizmoDefinition> Gizmos;  // 0x00C0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TArray<FName,TSizedDefaultAllocator<32> > NameList;  // 0x00D0, private
};
