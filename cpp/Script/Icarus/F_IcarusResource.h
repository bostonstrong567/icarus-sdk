// /Script/Icarus.IcarusResource
// size 0xD0, declared in Icarus/Source/Icarus/Systems/Resources/IcarusResource.h

USTRUCT()
struct FIcarusResource : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Units;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Color;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Resource_Icon;  // 0x0050, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Recipe_Icon;  // 0x0078, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UMaterialInstance> Container_Icon;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CraftingExperience;  // 0x00C8, size 0x4
};
