// /Game/UI/Components/UMG_ModifierPopup.UMG_ModifierPopup_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x504, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ModifierPopup_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AuraRangeText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ModifierBackground;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ModifierDescription;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ModifierName;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* StatsList;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TitleBorder;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStateData Modifier_Row;  // 0x0298, size 0x268, named "Modifier Row"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CachedEffectiveness;  // 0x0500, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ModifierPopup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void ScaleStat(FStatsEnum StatEnum, int32 StatValue, int32& ScaledStat);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateAura(bool IsAura, int32 AuraRange);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateEffectiveness(int32 Effectiveness);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateStats();
};
