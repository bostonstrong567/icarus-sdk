// /Script/IcarusGenerated.ResDeleteDropship
// size 0x20, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemIcarus/DeleteDropshipCallbackProxyGen.generated.h

USTRUCT()
struct FResDeleteDropship
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DropshipRemovedID;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryDelta InventoryDelta;  // 0x0008, size 0x18
};
