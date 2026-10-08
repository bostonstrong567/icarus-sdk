// /Game/UI/Components/UMG_PartyMember.UMG_PartyMember_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PartyMember_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CharacterName;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ColourBorder;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HealthBar;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* HostIcon;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HostText;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_222;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* KickButton;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LevelText;  // 0x02A0, size 0x8
    UPROPERTY(Instanced) UTextBlock* Ping;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PingText;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* PlayerHealth;  // 0x02B8, size 0x8
    UPROPERTY(Instanced) UBorder* PlayerIcon;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PlayerName;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_29;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SleepingIcon;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APlayerState* PlayerState;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InSleepScreen;  // 0x02E8, size 0x1

    UFUNCTION() void BndEvt__UMG_PartyMember_KickButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DoNothing();
    UFUNCTION() void ExecuteUbergraph_UMG_PartyMember(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FSlateBrush GetBackground_0();  // parameters 0x88
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetCharacterName();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FSlateColor GetColorAndOpacity();  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetHost();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetLevelText();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetPing();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPlayerHealth();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetPlayerName();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) ESlateVisibility Get_KickButton_Visibility();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void KickPlayer();
    UFUNCTION(BlueprintCallable) void StatsUpdated();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateSleepParty();
};
