// /Game/UI/Windows/BioLab/UMG_BioLab_Upgrade_Tooltip.UMG_BioLab_Upgrade_Tooltip_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_Upgrade_Tooltip_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* CostBox;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DescriptionText;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_AlterationDescription_C* UMG_AlterationDescription;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* UpgradeName;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemUpgradesRowHandle Upgrade;  // 0x0288, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowCost;  // 0x02A0, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_Upgrade_Tooltip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
