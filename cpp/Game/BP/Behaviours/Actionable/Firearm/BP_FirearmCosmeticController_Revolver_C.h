// /Game/BP/Behaviours/Actionable/Firearm/BP_FirearmCosmeticController_Revolver.BP_FirearmCosmeticController_Revolver_C
// Derives from: UBP_FirearmCosmeticController_C > UActorComponent > UObject
// size 0x811, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_FirearmCosmeticController_Revolver_C : public UBP_FirearmCosmeticController_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMontageSection(UAnimMontage* InMontage, FName& Section) const;  // parameters 0x10
};
