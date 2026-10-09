// /Script/Icarus.ThermalComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xE8, declared in Icarus/Source/Icarus/Traits/ThermalComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UThermalComponent : public UTraitComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) AIcarusGameStateSurvival* GameState;  // 0x00D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) USphereComponent* NavigationModifier;  // 0x00D8, size 0x8
    float ThermalStrengthMulti;  // 0x00E0, not reflected
public:
    UFUNCTION(BlueprintCallable) void DestroyThermalComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTemperatureEffectAtLocation(FVector InLocation, bool& bIsAffecting, AActor* QueryActor, bool bDrawDebug, float DebugDrawDuration, int32 DebugDrawTextOffset) const;  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetThermalData(FThermalData& OutData) const;  // parameters 0x61
    UFUNCTION(BlueprintCallable) void ScaleThermalComponentStrength(float NewThermalStrengthMulti);  // parameters 0x4
};
