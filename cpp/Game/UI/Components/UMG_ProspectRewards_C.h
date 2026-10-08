// /Game/UI/Components/UMG_ProspectRewards.UMG_ProspectRewards_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectRewards_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Access;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NoRewards;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* RewardsHBox;  // 0x0280, size 0x8
    UPROPERTY(Instanced) UTextBlock* RewardType;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAttachment Reward;  // 0x0290, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText RewardName;  // 0x02B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Mission;  // 0x02D0, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ProspectRewards(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMission(FFactionMissionsRowHandle Mission);  // parameters 0x18
};
