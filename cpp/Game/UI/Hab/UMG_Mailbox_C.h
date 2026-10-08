// /Game/UI/Hab/UMG_Mailbox.UMG_Mailbox_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Mailbox_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Angle;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MailContainer;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* MailIcon;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MailItems;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* MainContentBox;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* OpenMail;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_NotificationContent_C* UMG_NotificationContent;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCloseWindowEvent CloseWindowEvent;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Update;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Visible;  // 0x02C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StoredMail;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxMail;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDeleteMailEvent DeleteMailEvent;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBackendProxyComponent* P;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Event;  // 0x02E8, size 0x8

    UFUNCTION(BlueprintCallable) void CloseWindowEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Closed();
    UFUNCTION(BlueprintCallable) void CollectRewards(FString ID);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DeleteMailEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void DeleteNotification(FString ID);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_UMG_Mailbox(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HideMail();
    UFUNCTION(BlueprintCallable) void OnNotificationsUpdated();
    UFUNCTION(BlueprintCallable) void Opened();
    UFUNCTION(BlueprintCallable) void ReadMail(FString ID);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Refresh();
    UFUNCTION(BlueprintCallable) void ShowNotification(FNotification Notification, int32 Index);  // parameters 0x7C
};
