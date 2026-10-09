// /Script/Icarus.SlotWrapper
// size 0xE0, declared in Icarus/Source/Icarus/Traits/Behaviours/SlotableData.h

USTRUCT()
struct FSlotWrapper
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SocketWorldLocation;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator SocketRotation;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SocketScale;  // 0x0018, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SocketName;  // 0x0024, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* HeldItem;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SlotableInventoryLocation;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* SocketVisualizer;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStaticMesh> SlotVisualizerMesh;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AmountOfPhysicsTime;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSocketStringIDQuery Query;  // 0x0078, size 0x68
};
