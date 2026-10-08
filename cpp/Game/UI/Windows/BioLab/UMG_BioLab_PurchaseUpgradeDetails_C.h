// /Game/UI/Windows/BioLab/UMG_BioLab_PurchaseUpgradeDetails.UMG_BioLab_PurchaseUpgradeDetails_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_PurchaseUpgradeDetails_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_AlterationDescription_C* AlterationDetails;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* CostHBox;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NameText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UpgradeIcon;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemUpgradesRowHandle UpgradeToShow;  // 0x0288, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_PurchaseUpgradeDetails(int32 EntryPoint);  // parameters 0x4
};
