// /Script/ControlRig.GizmoActorCreationParam
// size 0x120, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRigGizmoActor.h

USTRUCT()
struct FGizmoActorCreationParam
{

    // Not reflected:
    UObject * ManipObj;  // 0x0000
    int32 ControlRigIndex;  // 0x0008
    FName ControlName;  // 0x000C
    FTransform SpawnTransform;  // 0x0020
    FTransform GizmoTransform;  // 0x0050
    FTransform MeshTransform;  // 0x0080
    TSoftObjectPtr<UStaticMesh> StaticMesh;  // 0x00B0
    TSoftObjectPtr<UMaterial> Material;  // 0x00D8
    FName ColorParameterName;  // 0x0100
    FLinearColor Color;  // 0x0108
    bool bSelectable;  // 0x0118
};
