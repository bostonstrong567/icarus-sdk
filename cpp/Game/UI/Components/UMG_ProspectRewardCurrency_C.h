// /Game/UI/Components/UMG_ProspectRewardCurrency.UMG_ProspectRewardCurrency_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2D4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectRewardCurrency_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* IconSizeBox;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ResourceCount;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ResourceIcon;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWorkshopCost Reward;  // 0x02B8, size 0x1C

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ProspectRewardCurrency(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Set_Reward(FWorkshopCost Reward);  // parameters 0x1C, named "Set Reward"
};
