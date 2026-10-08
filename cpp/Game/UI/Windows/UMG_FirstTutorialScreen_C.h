// /Game/UI/Windows/UMG_FirstTutorialScreen.UMG_FirstTutorialScreen_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FirstTutorialScreen_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BackgroundImage;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* DismissButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider2;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider3;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider3_1;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* FriendProspects;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_91;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_222;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_417;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemIcon;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* JoinableProspects_1;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LoadingProspectText;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* PlayButton;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusSession ClaimableTutorialSession;  // 0x02F0, size 0x1C0

    UFUNCTION() void BndEvt__DismissButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__PlayButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FirstTutorialScreen(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FriendProspectSelected(FProspectServerInfo Prospect, bool Active);  // parameters 0x1B1
    UFUNCTION(BlueprintCallable) void MatchmakingAvailableSessionsUpdated();
    UFUNCTION(BlueprintCallable) void ShowJoiningGameUI(bool Visible, FText Text);  // parameters 0x20
};
