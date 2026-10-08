// /Game/UI/Hab/DropTerminal/UMG_PlayerListEntry.UMG_PlayerListEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0xCB0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PlayerListEntry_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* CharacterEntry;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CharacterLevelText;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CharacterName;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CharacterStatus;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_95;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* RatingButtons;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SettledState;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ThumbsDown;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ThumbsUp;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* UnSettledState;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle Button_Up_Default;  // 0x02B8, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle Button_Up_Selected;  // 0x0530, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle Button_Down_Default;  // 0x07A8, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle Button_Down_Selected;  // 0x0A20, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanRate;  // 0x0C98, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PendingLoadPlayerId;  // 0x0CA0, size 0x10

    UFUNCTION() void BndEvt__ThumbsDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_PlayerListEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void IsSettled(bool Settled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnFailure_F261DD19407D95F6521E3A9C07B7A8CF(FGetIcarusPlayerPersonaResult Result);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OnSuccess_F261DD19407D95F6521E3A9C07B7A8CF(FGetIcarusPlayerPersonaResult Result);  // parameters 0x38
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Set_Rating_Button_Style(bool Liked);  // parameters 0x1, named "Set Rating Button Style"
    UFUNCTION(BlueprintCallable) void ShowPlayerDetails(FAssociatedMemberInfo MemberInfo);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void ShowRatings();
};
