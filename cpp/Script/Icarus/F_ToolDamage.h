// /Script/Icarus.ToolDamage
// size 0x40, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FToolDamage : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Melee_Damage;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DamageVariationPercentage;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Felling_Damage;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Felling_Efficiency;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Mining_Radius;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Mining_Efficiency;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Skinning_Efficiency;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Reaping_Efficiency;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Shattering_Damage;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Shattering_Efficiency;  // 0x003C, size 0x4
};
