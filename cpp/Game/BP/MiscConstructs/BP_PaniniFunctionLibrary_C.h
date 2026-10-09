// /Game/BP/MiscConstructs/BP_PaniniFunctionLibrary.BP_PaniniFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PaniniFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void SetPaniniEnabledForPrimitive(UPrimitiveComponent* Primitive, bool Enabled, UObject* __WorldContext);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void UpdateActorPanini(AActor* Target, bool Enabled, UObject* __WorldContext);  // parameters 0x18
};
