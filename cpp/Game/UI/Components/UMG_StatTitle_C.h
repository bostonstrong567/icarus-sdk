// /Game/UI/Components/UMG_StatTitle.UMG_StatTitle_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_StatTitle_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StatValue;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TitleIcon;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum Stat;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldShowIcon;  // 0x0290, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StatValueRaw;  // 0x0294, size 0x4

    UFUNCTION(BlueprintCallable) void ChangeTextColor();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_StatTitle(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FailedToRetrieveStatTitle();
    UFUNCTION(BlueprintCallable) void OnLoaded_912710A14DB31FBA83B4ABB47E06B80D(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StatValueOverride(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateStatValue(AActor* TargetOverride);  // parameters 0x8
};
