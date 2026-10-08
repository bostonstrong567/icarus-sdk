// /Game/UI/Windows/UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C
// Derives from: UUMG_NotificationPopup_C > UUserWidget > UWidget > UVisual > UObject
// size 0x4D0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_NotificationPopup_ReturnedItems_C : public UUMG_NotificationPopup_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0408, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Fade_In;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ClaimButton;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* CloseButton;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* DeleteButton;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* DeleteSizeBox;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_2;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_3;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_119;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* Mask;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NotificationDescription;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NotificationName;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* PlayerList;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* RightSideOverlay;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Trim2;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_1;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_2;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_3;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_4;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_5;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_6;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_NotificationAttachmentsReturnedItems_C* UMG_NotificationAttachmentsReturnedItems;  // 0x04C8, size 0x8

    UFUNCTION() void BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_UMG_NotificationPopup_ReturnedItems(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayShowEffects();
    UFUNCTION(BlueprintCallable) void Update();
    UFUNCTION(BlueprintCallable) void UpdateAttachments();
};
