// /Script/Icarus.ItemableData
// size 0xF8, declared in Icarus/Source/Icarus/Traits/Behaviours/ItemableData.h

USTRUCT()
struct FItemableData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UItemableComponent> Behaviour;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0058, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Override_Glow_Icon;  // 0x0080, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x00A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText FlavorText;  // 0x00C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> FieldGuideKeywords;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Weight;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAllowZeroWeight;  // 0x00EC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxStack;  // 0x00F0, size 0x4
};
