// /Game/UI/Components/UMG_PartyMemberSpace.UMG_PartyMemberSpace_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x478, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PartyMemberSpace_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_88;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ColourBorder;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* KickButton;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PlayerBorder;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PlayerIcon;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PlayerIndex;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PlayerLevel;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PlayerNameText;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ReadyBox;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ShareBorder;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SharesSlider;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SharesText;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APlayerState* PlayerState;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor EmptyPlayerColour;  // 0x02D0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor ValidPlayerColour;  // 0x02F8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSharesSliderChanged SharesSliderChanged;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush NotReady;  // 0x0330, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush Ready;  // 0x03B8, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ValidBorderColour;  // 0x0440, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor InvalidBorderColour;  // 0x0450, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText PlayerName;  // 0x0460, size 0x18

    UFUNCTION() void BndEvt__KickButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PartyMemberSpace(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetColorAndOpacity();
    UFUNCTION(BlueprintCallable) void SetPlayerState(APlayerState* PlayerState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SharesSliderChanged__DelegateSignature(UUMG_PartyMemberSpace_C* PartyMember, float SliderValueChange);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SliderValueChange(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateKickButton();
    UFUNCTION(BlueprintCallable) void UpdateMemberColour();
    UFUNCTION(BlueprintCallable) void UpdatePlayerIcon();
    UFUNCTION(BlueprintCallable) void UpdatePlayerLevel();
    UFUNCTION(BlueprintCallable) void UpdatePlayerName();
    UFUNCTION(BlueprintCallable) void UpdateReadyState(bool Ready);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateSharesValue();
};
