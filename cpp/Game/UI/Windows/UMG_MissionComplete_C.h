// /Game/UI/Windows/UMG_MissionComplete.UMG_MissionComplete_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x521, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionComplete_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeIn;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ClaimButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* CloseButton;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* CurrencyList;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DaysText;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* DeleteButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_2;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_3;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FlavourText;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HoursText;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_119;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ItemList;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LoadingScreen;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* Mask;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MinutesText;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* PlayerList;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectDescription;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ProspectImage;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ProspectRewards;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RetainerBox_0;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Trim2;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingIcon_C* UMG_LoadingIcon;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MetaResourceDisplay_C* UMG_MetaResourceDisplay;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompleteFaction_C* UMG_MissionCompleteFaction;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_1;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_2;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_3;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_4;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_5;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_6;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectRewards_C* UMG_ProspectRewards;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectRewards_C* UMG_ProspectRewards_129;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FNotification Notification;  // 0x0388, size 0x78
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClose Close;  // 0x0400, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectCompleteInformation Prospect_Information;  // 0x0410, size 0x110, named "Prospect Information"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowCloseButton;  // 0x0520, size 0x1

    UFUNCTION() void BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Close__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MissionComplete(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnFail_2A402FA646AFD380299643AB192EE0B1(const FResGetProspectSummary& Response);  // parameters 0x118
    UFUNCTION(BlueprintCallable) void OnSuccess_2A402FA646AFD380299643AB192EE0B1(const FResGetProspectSummary& Response);  // parameters 0x118
    UFUNCTION(BlueprintCallable) void PlayFadeIn();
    UFUNCTION(BlueprintCallable) void ShowForProspect(FNotification Notification);  // parameters 0x78
    UFUNCTION(BlueprintCallable) void Update();
};
