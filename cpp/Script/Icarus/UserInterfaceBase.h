// /Script/Icarus.UserInterfaceBase
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x260, declared in Icarus/Source/Icarus/UI/UserInterfaceBase.h

UCLASS(EditInlineNew)
class UUserInterfaceBase : public UUserWidget
{
public:
    UFUNCTION(BlueprintImplementableEvent) void DisplayIcarusError(FErrorCodesEnum OutgoingError, FString ErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusDynamicWidget(UUserWidget* DynamicWidget);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) UConfirmationPopupBase* GetConfirmationPopup();  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void WidgetFocusGained(UIcarusWidget* Widget);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void WidgetFocusLost(UIcarusWidget* Widget);  // parameters 0x8
};
