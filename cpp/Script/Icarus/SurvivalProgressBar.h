// /Script/Icarus.SurvivalProgressBar
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, declared in Icarus/Source/Icarus/UI/Elements/SurvivalProgressBar.h

UCLASS(EditInlineNew)
class USurvivalProgressBar : public UUserWidget
{
public:
    UPROPERTY(BlueprintReadOnly) float CurrentPct;  // 0x0260, size 0x4
    UPROPERTY(BlueprintReadOnly) ESurvivalStatType StatType;  // 0x0264, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle RetryBindTimer;  // 0x0268, private

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentPct() const;  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void InitStatIcon();
    UFUNCTION() void OnStatUpdated(int32 NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Setup(ESurvivalStatType NewStatType);  // parameters 0x1
    UFUNCTION() void TryBindEvents();
    UFUNCTION(BlueprintImplementableEvent) void UpdateDisplay();
};
