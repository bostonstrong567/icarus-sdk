// /Script/ControlRig.ControlRigComponentMappedComponent
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRigComponent.h

USTRUCT()
struct FControlRigComponentMappedComponent
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* Component;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ElementName;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERigElementType ElementType;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EControlRigComponentMapDirection Direction;  // 0x0011, size 0x1
};
