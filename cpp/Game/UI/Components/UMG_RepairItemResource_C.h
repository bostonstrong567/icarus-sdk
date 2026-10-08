// /Game/UI/Components/UMG_RepairItemResource.UMG_RepairItemResource_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A6, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RepairItemResource_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_Numbers;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Percent;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Selectable;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Item;  // 0x0288, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsMissing;  // 0x02A4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsPower;  // 0x02A5, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RepairItemResource(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
