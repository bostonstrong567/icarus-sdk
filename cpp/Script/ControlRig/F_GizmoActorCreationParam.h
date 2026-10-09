// /Script/ControlRig.GizmoActorCreationParam
// size 0x120, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRigGizmoActor.h

USTRUCT()
struct FGizmoActorCreationParam
{
public:
    UObject * ManipObj;  // 0x0000, not reflected
    int32 ControlRigIndex;  // 0x0008, not reflected
    FName ControlName;  // 0x000C, not reflected
    FTransform SpawnTransform;  // 0x0020, not reflected
    FTransform GizmoTransform;  // 0x0050, not reflected
    FTransform MeshTransform;  // 0x0080, not reflected
    TSoftObjectPtr<UStaticMesh> StaticMesh;  // 0x00B0, not reflected
    TSoftObjectPtr<UMaterial> Material;  // 0x00D8, not reflected
    FName ColorParameterName;  // 0x0100, not reflected
    FLinearColor Color;  // 0x0108, not reflected
    bool bSelectable;  // 0x0118, not reflected
};
