// /Game/UI/Hab/UMG_ProspectComplete_Notification.UMG_ProspectComplete_Notification_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectComplete_Notification_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* GlowPulse;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ButtonImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* GlowBorder;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* MainButton;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PromptBorder;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PromptText;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectCompleteText;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Orange;  // 0x02A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor White;  // 0x02C8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Black;  // 0x02F0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Found;  // 0x0318, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FNotification Notification;  // 0x0320, size 0x78
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Hovered;  // 0x0398, size 0x8

    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ProspectComplete_Notification(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetHoverStateVisuals(bool Hovered);  // parameters 0x1
};
