// /Script/Icarus.MineableResource
// Derives from: AIcarusActor > AActor > UObject
// size 0x2F8, declared in Icarus/Source/Icarus/Objects/MineableResource.h

UCLASS(Config=Engine)
class AMineableResource : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UDestructibleComponent*> DestructibleComponents;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle DestructionItemDropType;  // 0x02D0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* DestructionItemMesh;  // 0x02E8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    int32 NextComponent;  // 0x02F0, protected

    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void OnClient_DestructibleComponentDestroyed(int32 ComponentIndex);  // parameters 0x4

    // Virtual functions that start here:
    //   OnClient_DestructibleComponentDestroyed_Implementation
};
