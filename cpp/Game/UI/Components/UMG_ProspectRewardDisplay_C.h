// /Game/UI/Components/UMG_ProspectRewardDisplay.UMG_ProspectRewardDisplay_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x350, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectRewardDisplay_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* MetaPlaceholder;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ResourceDisplay;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText RewardName;  // 0x02B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush RewardIcon;  // 0x02C8, size 0x88

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ProspectRewardDisplay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMissionReward(FFactionMissionsRowHandle Mission);  // parameters 0x18
};
