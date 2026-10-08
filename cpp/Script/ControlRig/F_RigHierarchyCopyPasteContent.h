// /Script/ControlRig.RigHierarchyCopyPasteContent
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigHierarchyContainer.h

USTRUCT()
struct FRigHierarchyCopyPasteContent
{
    UPROPERTY() TArray<ERigElementType> Types;  // 0x0000, size 0x10
    UPROPERTY() TArray<FString> Contents;  // 0x0010, size 0x10
    UPROPERTY() TArray<FTransform> LocalTransforms;  // 0x0020, size 0x10
    UPROPERTY() TArray<FTransform> GlobalTransforms;  // 0x0030, size 0x10
};
