// /Game/UI/Windows/BioLab/UMG_BioLab_PurchaseItemDetails.UMG_BioLab_PurchaseItemDetails_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_PurchaseItemDetails_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* CostHBox;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemIcon;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemNameText;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ItemName;  // 0x0280, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0298, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWorkshopCost> Cost;  // 0x02C0, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_PurchaseItemDetails(int32 EntryPoint);  // parameters 0x4
};
