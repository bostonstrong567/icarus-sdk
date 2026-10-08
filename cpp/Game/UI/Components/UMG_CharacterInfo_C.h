// /Game/UI/Components/UMG_CharacterInfo.UMG_CharacterInfo_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CharacterInfo_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_Name;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CharacterName;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ExpAmountText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ExperienceBar;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LevelText_3;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_0;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NewVar_0;  // 0x0298, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_SettingTooltipText_C* CustomTooltipWidget;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideName;  // 0x02A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CharacterOverride;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterGrowthRowHandle GrowthHandle;  // 0x02B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDisplayedOnTooltip;  // 0x02D0, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_CharacterInfo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetActorState(UCharacterState*& CharacterState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetExpAmount();
    UFUNCTION(BlueprintCallable) void Initialise(AActor* CharacterOverride, FCharacterGrowthRowHandle GrowthHandle);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnExperienceUpdated();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
