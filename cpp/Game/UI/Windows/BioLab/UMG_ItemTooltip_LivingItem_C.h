// /Game/UI/Windows/BioLab/UMG_ItemTooltip_LivingItem.UMG_ItemTooltip_LivingItem_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ItemTooltip_LivingItem_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ChallengeDescription;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ChallengeDetailsVBox;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ChallengeProgress;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ChallengeProgressBar;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ChallengeTitle;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotMain_C* Slot1;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotMain_C* Slot2;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotMain_C* Slot3;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotMain_C* Slot4;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotMain_C* Slot5;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemData;  // 0x02B8, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_BioLab_UpgradeSlotMain_C*> Slots;  // 0x04A8, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ItemTooltip_LivingItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TrySetupChallengeInfo(const FLivingItemSlotState& LivingItemSlotState);  // parameters 0x78
};
