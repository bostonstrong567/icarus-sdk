// /Game/UI/Components/UMG_RewardDisplay.UMG_RewardDisplay_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x370, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RewardDisplay_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* IconSizeBox;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* MetaPlaceholder;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Resources;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RewardAmountText;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RewardNameText;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText RewardName;  // 0x02D0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush RewardIcon;  // 0x02E8, size 0x88

    UFUNCTION() void ExecuteUbergraph_UMG_RewardDisplay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void SetCoinReward(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetExoticReward(FMetaResource Exotic);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetItemReward(FMetaItem MetaItem);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void SetRewardColor(FLinearColor Color);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetRewardIcon(TSoftObjectPtr<UTexture2D> Icon);  // parameters 0x28
};
