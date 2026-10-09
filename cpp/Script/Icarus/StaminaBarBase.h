// /Script/Icarus.StaminaBarBase
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, declared in Icarus/Source/Icarus/UI/Elements/StaminaBarBase.h

UCLASS(EditInlineNew)
class UStaminaBarBase : public UUserWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    float LastStamina;  // 0x0260, not reflected
    float LastMaxStamina;  // 0x0264, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LowStaminaPct;  // 0x0268, size 0x4
    UPROPERTY() TWeakObjectPtr<APawn> LastPlayerPawn;  // 0x026C, size 0x8
public:
    UFUNCTION(BlueprintImplementableEvent) void ResetStaminaUI(float CurrentStamina, float MaxStamina, float StaminaPct, EStaminaBracket CurrentBracket);  // parameters 0xD
    UFUNCTION(BlueprintImplementableEvent) void UpdateStaminaUI(float CurrentStamina, float MaxStamina, float StaminaPct, EStaminaBracket CurrentBracket, EStaminaBracket LastBracket);  // parameters 0xE
};
