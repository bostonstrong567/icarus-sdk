// /Game/UI/HUD/UMG_ExperienceTracker.UMG_ExperienceTracker_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2EF, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ExperienceTracker_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FlashExpBar;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeOutEXPBar;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeInEXPBar;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AttributePoints;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BlueprintPoints;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ExpBar;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* ExpBarAndText;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ExpText;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_1;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LevelText;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LevelText_1;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SoloPoints;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CachedLevel;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EXPVisible;  // 0x02D4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PreviousEXP;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Time;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetEXP;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetDebtEXP;  // 0x02E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PreviousDebtEXP;  // 0x02E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BlueprintText;  // 0x02EC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TalentsInitialized;  // 0x02ED, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ExperienceInitialised;  // 0x02EE, size 0x1

    UFUNCTION(BlueprintCallable) void BlueprintModelViewChanged(UTalentControllerComponent* Controller);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_UMG_ExperienceTracker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_0AE4788F4A5B07730F9D15A0EA2C6E85();
    UFUNCTION(BlueprintCallable) void Finished_8874A4634270ECC8886C5F9F22417BDF();
    UFUNCTION(BlueprintCallable) void GARBAGE(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBlueprintModelChanged(UTalentModelInterface_Const* Model);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnExperienceUpdated();
    UFUNCTION(BlueprintCallable) void OnPlayerModelChanged(UTalentModelInterface_Const* Model);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnSoloModelChanged(UTalentModelInterface_Const* Model);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayerModelViewChanged(UTalentControllerComponent* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SoloModelViewCHanged(UTalentControllerComponent* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update_Experience_Bar_Visibility();  // named "Update Experience Bar Visibility"
    UFUNCTION(BlueprintCallable) void Update_Experience_and_Level_Text();  // named "Update Experience and Level Text"
    UFUNCTION(BlueprintCallable) void Update_Level_Up_Glow();  // named "Update Level Up Glow"
    UFUNCTION(BlueprintCallable) void Update_Point_Text(UTalentModelInterface_Const* Model, UTextBlock* Text_Widget);  // parameters 0x10, named "Update Point Text"
};
