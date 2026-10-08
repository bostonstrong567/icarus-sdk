// /Script/Icarus.FlammableTargetFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Disaster/FlammableTargetFunctionLibrary.h

UCLASS()
class UFlammableTargetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static bool CanIgniteFlammableTarget(UObject* WorldContextObject, const FFlammableTargetIgnite& Target);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FlammableTargetFlammableTarget(const FFlammableTarget& A, const FFlammableTarget& B);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFlammableTarget FlammableTargetExtinguishToFlammableTarget(const FFlammableTargetExtinguish& Target);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFlammableTarget FlammableTargetIgniteToFlammableTarget(const FFlammableTargetIgnite& Target);  // parameters 0x58
    UFUNCTION(BlueprintCallable, BlueprintPure) static UFlammableComponent* GetFlammableComponentFromTarget(const FFlammableTarget& Target);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static UFlammableInstance* GetFlammableInstanceFromTarget(const FFlammableTarget& Target);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBoxSphereBounds GetFlammableWorldBoundsFromTarget(const FFlammableTarget& Target);  // parameters 0x44
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFlammableTargetExtinguish MakeFlammableTargetExtinguishFromActor(AActor* Causer, AActor* Actor, float ExtinguishRampTime, float ExtinguishTime, bool bStopCombustionImmediately);  // parameters 0x58
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFlammableTargetExtinguish MakeFlammableTargetExtinguishFromHitResult(AActor* Causer, FHitResult HitResult, float ExtinguishRampTime, float ExtinguishTime, bool bStopCombustionImmediately);  // parameters 0xD8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFlammableTargetExtinguish MakeFlammableTargetExtinguishFromInstance(AActor* Causer, UFlammableInstance* Instance, float ExtinguishRampTime, float ExtinguishTime, bool bStopCombustionImmediately);  // parameters 0x58
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFlammableTargetIgnite MakeFlammableTargetIgniteFromActor(AActor* Causer, AActor* Actor, float DesiredTemperatureValue, bool bFromPropagation);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFlammableTargetIgnite MakeFlammableTargetIgniteFromHitResult(AActor* Causer, FHitResult HitResult, float DesiredTemperatureValue, bool bFromPropagation);  // parameters 0xC8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFlammableTargetIgnite MakeFlammableTargetIgniteFromInstance(AActor* Causer, UFlammableInstance* Instance, float DesiredTemperatureValue, bool bFromPropagation);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_FlammableTargetFlammableTarget(const FFlammableTarget& A, const FFlammableTarget& B);  // parameters 0x51
    UFUNCTION(BlueprintCallable) static EFireExtinguishResult TryExtinguishFlammableTarget(UObject* WorldContextObject, const FFlammableTargetExtinguish& Target, UFlammableInstance*& OutFlammableInstance);  // parameters 0x49
    UFUNCTION(BlueprintCallable) static bool TryIgniteFlammableTarget(UObject* WorldContextObject, const FFlammableTargetIgnite& Target, UFlammableInstance*& OutInstance);  // parameters 0x41
};
