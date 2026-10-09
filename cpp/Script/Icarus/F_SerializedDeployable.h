// /Script/Icarus.SerializedDeployable
// size 0x220, declared in Icarus/Source/Icarus/Objects/Deployable.h

USTRUCT()
struct FSerializedDeployable
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Deployable;  // 0x0000, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform DeployableTransform;  // 0x01F0, size 0x30
};
