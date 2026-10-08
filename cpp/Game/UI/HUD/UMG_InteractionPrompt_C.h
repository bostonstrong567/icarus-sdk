// /Game/UI/HUD/UMG_InteractionPrompt.UMG_InteractionPrompt_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InteractionPrompt_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* AltHoldContainer;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AltHoldText;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AltHoldText_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AltHoldText_2;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AltInteractText;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* AltPressContainer;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* FeedMount;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FeedMountText;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* FertalizeCrop;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* HoldContainer;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HoldText;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_1;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_2;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_3;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_4;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InteractContainer;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* InteractText;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainFrame;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RetainerBox_0;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keybind_C* UMG_Keybind;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keybind_C* UMG_Keybind_1;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keybind_C* UMG_Keybind_2;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keybind_C* UMG_Keybind_3;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keybind_C* UMG_Keybind_65;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keybind_C* UMG_Keybind_152;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* WaterCrop;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LastObject;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult HitObject;  // 0x0340, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AlwaysVisible;  // 0x03C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsHeld;  // 0x03C9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsHeld_Alt;  // 0x03CA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* FocusedActor;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldShowKeybindList;  // 0x03D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* PlayerRef;  // 0x03E0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInteractableComponent* CurrentInteractable;  // 0x03E8, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_InteractionPrompt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Set_Held(bool Held, UImage* Image, float Alpha, UWidgetAnimation* Animation, bool& Cache);  // parameters 0x21, named "Set Held"
    UFUNCTION(BlueprintCallable) void SetState(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
