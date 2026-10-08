// /Game/UI/Windows/BioLab/UMG_LivingItemSlotUnlockedPopup.UMG_LivingItemSlotUnlockedPopup_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_LivingItemSlotUnlockedPopup_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* UnlockAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemIcon;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemName;  // 0x0278, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_LivingItemSlotUnlockedPopup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayUnlock(FItemData Item);  // parameters 0x1F0
};
