// /Game/UI/Hab/UMG_NotificationContent.UMG_NotificationContent_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x340, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_NotificationContent_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CollectButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* DeleteButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* OpenMail;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ProspectInformation;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ShowProspectInfoButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Title;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_NotificationAttachments_C* UMG_NotificationAttachments;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Index;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FNotification Notification;  // 0x02A8, size 0x78
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDeleteMailEvent DeleteMailEvent;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCollectRewardsEvent CollectRewardsEvent;  // 0x0330, size 0x10

    UFUNCTION() void BndEvt__CollectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__ShowProspectInfoButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CollectRewardsEvent__DelegateSignature(FString ID);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void DeleteMailEvent__DelegateSignature(FString ID);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_UMG_NotificationContent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Update(FNotification Notification, int32 Index);  // parameters 0x7C
};
