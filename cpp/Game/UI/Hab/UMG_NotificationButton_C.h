// /Game/UI/Hab/UMG_NotificationButton.UMG_NotificationButton_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x308, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_NotificationButton_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* MainButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MessageTitle;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FNotification Notification;  // 0x0278, size 0x78
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FShowMail ShowMail;  // 0x02F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<E_MailState> MailState;  // 0x0300, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Index;  // 0x0304, size 0x4

    UFUNCTION() void BndEvt__Button_29_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_NotificationButton(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetStyle(TEnumAsByte<E_MailState> State);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Setup();
    UFUNCTION(BlueprintCallable) void ShowMail__DelegateSignature(FNotification Notification, int32 Index);  // parameters 0x7C
};
