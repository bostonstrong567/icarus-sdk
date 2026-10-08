// /Script/Icarus.StaminaBarBase
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, declared in Icarus/Source/Icarus/UI/Elements/StaminaBarBase.h

UCLASS(EditInlineNew)
class UStaminaBarBase : public UUserWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LowStaminaPct;  // 0x0268, size 0x4
    UPROPERTY() TWeakObjectPtr<APawn> LastPlayerPawn;  // 0x026C, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    float LastStamina;  // 0x0260, protected
    float LastMaxStamina;  // 0x0264, protected

    UFUNCTION(BlueprintImplementableEvent) void ResetStaminaUI(float CurrentStamina, float MaxStamina, float StaminaPct, EStaminaBracket CurrentBracket);  // parameters 0xD
    UFUNCTION(BlueprintImplementableEvent) void UpdateStaminaUI(float CurrentStamina, float MaxStamina, float StaminaPct, EStaminaBracket CurrentBracket, EStaminaBracket LastBracket);  // parameters 0xE
};
