// /Game/UI/Components/UMG_ProspectRewardDisplayVertical.UMG_ProspectRewardDisplayVertical_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x398, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectRewardDisplayVertical_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* BlueprintReward;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* CurrencyReward;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* LegendaryReward;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* TalentReward;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* WorkshopReward;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText RewardName;  // 0x02C8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush RewardIcon;  // 0x02E0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle CachedMission;  // 0x0368, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Temp;  // 0x0380, size 0x18

    UFUNCTION(BlueprintCallable) void AccountFlagsUpdated(AIcarusPlayerState* PlayerState);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ProspectRewardDisplayVertical(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasFlag(const FAccountFlagsRowHandle& AccountFlag);  // parameters 0x19
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Retrigger();
    UFUNCTION(BlueprintCallable) void SetMissionReward(FFactionMissionsRowHandle Mission);  // parameters 0x18
};
