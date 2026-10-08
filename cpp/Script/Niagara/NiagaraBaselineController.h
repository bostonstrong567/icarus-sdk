// /Script/Niagara.NiagaraBaselineController
// Derives from: UObject
// size 0x68, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraPerfBaseline.h

UCLASS(Abstract, EditInlineNew)
class UNiagaraBaselineController : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TestDuration;  // 0x0028, size 0x4
    UPROPERTY(BlueprintReadOnly) UNiagaraEffectType* EffectType;  // 0x0030, size 0x8
    UPROPERTY(BlueprintReadOnly) ANiagaraPerfBaselineActor* Owner;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) TSoftObjectPtr<UNiagaraSystem> System;  // 0x0040, size 0x28

    UFUNCTION(BlueprintCallable) UNiagaraSystem* GetSystem();  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnBeginTest();
    UFUNCTION(BlueprintNativeEvent) void OnEndTest(FNiagaraPerfBaselineStats Stats);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnOwnerTick(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintNativeEvent) bool OnTickTest();  // parameters 0x1

    // Virtual functions that start here:
    //   OnBeginTest_Implementation, OnEndTest_Implementation, OnOwnerTick_Implementation
    //   OnTickTest_Implementation
};
