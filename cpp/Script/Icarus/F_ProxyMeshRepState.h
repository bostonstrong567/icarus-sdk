// /Script/Icarus.ProxyMeshRepState
// size 0x10, declared in Icarus/Source/Icarus/Objects/ProxyMeshComponent.h

USTRUCT()
struct FProxyMeshRepState
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USceneComponent* Component;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bVisible : 1;  // 0x0008, mask 0x01
};
