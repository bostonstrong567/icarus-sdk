// /Script/ControlRig.ControlRigComponentMappedElement
// size 0xA0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRigComponent.h

USTRUCT()
struct FControlRigComponentMappedElement
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FComponentReference ComponentReference;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TransformIndex;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TransformName;  // 0x002C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERigElementType ElementType;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ElementName;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EControlRigComponentMapDirection Direction;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Offset;  // 0x0050, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Weight;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EControlRigComponentSpace Space;  // 0x0084, size 0x1
    UPROPERTY(Transient, Instanced) USceneComponent* SceneComponent;  // 0x0088, size 0x8
    UPROPERTY(Transient) int32 ElementIndex;  // 0x0090, size 0x4
    UPROPERTY(Transient) int32 SubIndex;  // 0x0094, size 0x4
};
