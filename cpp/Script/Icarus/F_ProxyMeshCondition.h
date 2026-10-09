// /Script/Icarus.ProxyMeshCondition
// size 0x14, declared in Icarus/Source/Icarus/Objects/ProxyMeshComponent.h

USTRUCT()
struct FProxyMeshCondition
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FComponentPicker Component;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MinQuantity;  // 0x0010, size 0x4
};
