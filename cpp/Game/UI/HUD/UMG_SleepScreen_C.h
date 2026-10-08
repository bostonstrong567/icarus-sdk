// /Game/UI/HUD/UMG_SleepScreen.UMG_SleepScreen_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x384, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SleepScreen_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Fade;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SleepChecks_C* CampfireCheck;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_2;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_3;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_4;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_5;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_6;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_7;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CurrentTimeText;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ExitText;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* FadeBorder;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_70;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ModifierWarningText;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_SleepScreen;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SleepChecks_C* PlayersSleepingCheck;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keybind_C* PressFKeybind;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SleepText;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SleepChecks_C* TimeCheck;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TimeIcon;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Party_C* UMG_Party;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Value;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<ASeatBase> BedSeatClass;  // 0x0340, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FadeAlpha;  // 0x0368, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FadeSpeed;  // 0x036C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Sleeping;  // 0x0370, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* BedActor;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TempComfort;  // 0x0380, size 0x4

    UFUNCTION(BlueprintCallable) void AttachedSeatChanged();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SleepScreen(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) int32 GetSleepingPlayerCount();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAudioSleepParameter(float FadeValue);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateComfortLevel();
    UFUNCTION(BlueprintCallable) void UpdateSleepModifiers();
    UFUNCTION(BlueprintCallable) void UpdateSleepingState(bool Sleeping);  // parameters 0x1
};
