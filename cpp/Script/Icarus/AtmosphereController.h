// /Script/Icarus.AtmosphereController
// Derives from: AIcarusActor > AActor > UObject
// size 0x3C0, declared in Icarus/Source/Icarus/Systems/Weather/AtmosphereController.h

UCLASS(Config=Engine)
class AAtmosphereController : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FAtmospheresEnum, FIcarusAtmosphere> AtmosphereData;  // 0x02C0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FAtmospheresEnum, float> AtmosphereInfluence;  // 0x0310, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FAtmospheresEnum, UPostProcessComponent*> PostProcessing;  // 0x0360, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialParameterCollection* TransitionMPC;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RealTimeThisFrame;  // 0x03B8, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetBloomSettingsPerBiome() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMoonBrightnessPerBiome() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetOvercastScattering() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetRayleightScatteringPerBiome() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSkylightIntensity() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSunBrightnessPerBiome() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetSunColorPerBiome() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void UpdateBiomeMPCs();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void UpdatePostProcessing();

    // Virtual functions that start here:
    //   UpdateBiomeMPCs_Implementation, UpdatePostProcessing_Implementation
};
