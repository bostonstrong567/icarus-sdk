// /Script/Icarus.TameInteractableComponent
// Derives from: UActorComponent > UObject
// size 0x128, declared in Icarus/Source/Icarus/AI/TameInteractableComponent.h

UCLASS(Config=Engine)
class UTameInteractableComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxConcurrentInteractions;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bOnlyAllowWhitelistedActors;  // 0x00B4, size 0x1
protected:
    UPROPERTY() TMap<AActor*, float> InteractingActors;  // 0x00B8, size 0x50
    UPROPERTY(Replicated) TArray<int32> WhitelistedActors;  // 0x0108, size 0x10
    UPROPERTY() float ForceEndInteractionDelay;  // 0x0118, size 0x4
private:
    FTimerHandle CleanupTimerHandle;  // 0x0120, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool BeginInteraction(AActor* InstigatingActor);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool CanBeInteractedWith(AActor* InstigatingActor) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool EndInteraction(AActor* InstigatingActor);  // parameters 0x9
    UFUNCTION() void ForceCleanupOldInteractors();
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<AActor*> GetInteractingActors() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<int32> GetWhitelistedActors() const;  // parameters 0x10
    UFUNCTION() void OnInteractingActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetWhitelistedActors(TArray<int32> NewWhitelistedActors);  // parameters 0x10

    // Virtual functions that start here:
    //   BeginInteraction_Implementation, CanBeInteractedWith_Implementation, EndInteraction_Implementation
};
