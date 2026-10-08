// /Game/UI/Windows/UMG_NotificationPopup.UMG_NotificationPopup_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x401, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_NotificationPopup_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FNotification Notification;  // 0x0268, size 0x78
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClose Close;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectCompleteInformation Prospect_Information;  // 0x02F0, size 0x110, named "Prospect Information"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowCloseButton;  // 0x0400, size 0x1

    UFUNCTION(BlueprintCallable) void Claim_Mail_Items();  // named "Claim Mail Items"
    UFUNCTION(BlueprintCallable) void Close__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Delete_Mail();  // named "Delete Mail"
    UFUNCTION() void ExecuteUbergraph_UMG_NotificationPopup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLoadingWidget(UWidget*& Loading);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnFail_5E3F90A94463A9573E2CEFBB8066B33B(const FResGetProspectSummary& Response);  // parameters 0x118
    UFUNCTION(BlueprintCallable) void OnSuccess_5E3F90A94463A9573E2CEFBB8066B33B(const FResGetProspectSummary& Response);  // parameters 0x118
    UFUNCTION(BlueprintCallable) void PlayShowEffects();
    UFUNCTION(BlueprintCallable) void Show(FNotification Notification);  // parameters 0x78
    UFUNCTION(BlueprintCallable) void Update();
    UFUNCTION(BlueprintCallable) void UpdateAttachments();
    UFUNCTION(BlueprintCallable) void UpdateProspect();
};
