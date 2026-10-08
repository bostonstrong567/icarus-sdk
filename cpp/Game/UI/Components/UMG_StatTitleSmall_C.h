// /Game/UI/Components/UMG_StatTitleSmall.UMG_StatTitleSmall_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x28C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_StatTitleSmall_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StatValue;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TitleIcon;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum Stat;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentValue;  // 0x0288, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_StatTitleSmall(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_46C6B22141961101A41777A9059B59B1(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StatValueOverride(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateStatValue();
};
