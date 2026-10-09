// /Game/ASS/ENV/ATM/BP_AtmosphereFunctionLibrary.BP_AtmosphereFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AtmosphereFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static ABP_AtmosphereController_C* GetAtmosphereController(UObject* __WorldContext);  // parameters 0x10
};
