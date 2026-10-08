// /Script/Icarus.ConfirmationPopupBase
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, declared in Icarus/Source/Icarus/UI/ConfirmationPopupBase.h

UCLASS(EditInlineNew)
class UConfirmationPopupBase : public UUserWidget
{
public:
    UPROPERTY(EditAnywhere) FConfirmationDelegate OnOptionAClicked;  // 0x0260, size 0x10
    UPROPERTY(EditAnywhere) FConfirmationDelegate OnOptionBClicked;  // 0x0270, size 0x10

    UFUNCTION(BlueprintCallable) void HideConfirmationPopup();
    UFUNCTION(BlueprintCallable) void OptionAClicked();
    UFUNCTION(BlueprintCallable) void OptionBClicked();
    UFUNCTION(BlueprintImplementableEvent) void SetPromptDetails(const FConfirmationPopupDetails& ConfirmationPopupDetails);  // parameters 0x98
    UFUNCTION(BlueprintCallable) void ShowConfirmationPopup(const FConfirmationPopupDetails& ConfirmationPopupDetails, FConfirmationDelegate OnOptionA, FConfirmationDelegate OnOptionB);  // parameters 0xB8
};
