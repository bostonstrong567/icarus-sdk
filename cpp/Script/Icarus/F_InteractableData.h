// /Script/Icarus.InteractableData
// size 0x68, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FInteractableData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FInteractionHandleWithRequiredTag> WorldPressInteracts;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FInteractionHandleWithRequiredTag> WorldHoldInteracts;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FInteractionHandleWithRequiredTag> WorldAltPressInteracts;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FInteractionHandleWithRequiredTag> WorldAltHoldInteracts;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRowHandle> GenericData;  // 0x0058, size 0x10
};
