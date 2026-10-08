// /Script/AIModule.PawnSensingComponent
// Derives from: UActorComponent > UObject
// size 0xF8, declared in Engine/Source/Runtime/AIModule/Classes/Perception/PawnSensingComponent.h

UCLASS(Config=Engine)
class UPawnSensingComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HearingThreshold;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LOSHearingThreshold;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SightRadius;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SensingInterval;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HearingMaxSoundAge;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bEnableSensingUpdates : 1;  // 0x00C4, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOnlySensePlayers : 1;  // 0x00C4, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSeePawns : 1;  // 0x00C4, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bHearNoises : 1;  // 0x00C4, mask 0x08
    UPROPERTY(BlueprintAssignable) FSeePawnDelegate OnSeePawn;  // 0x00D0, size 0x10
    UPROPERTY(BlueprintAssignable) FHearNoiseDelegate OnHearNoise;  // 0x00E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float PeripheralVisionAngle;  // 0x00F0, size 0x4
    UPROPERTY() float PeripheralVisionCosine;  // 0x00F4, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle TimerHandle_OnTimer;  // 0x00C8, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPeripheralVisionAngle() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPeripheralVisionCosine() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetSensingInterval(float NewSensingInterval);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetSensingUpdatesEnabled(bool bEnabled);  // parameters 0x1

    // Virtual functions that start here:
    //   BroadcastOnHearLocalNoise, BroadcastOnHearRemoteNoise, BroadcastOnSeePawn, CanHear
    //   CanSenseAnything, CouldSeePawn, GetSensorLocation, GetSensorRotation, HasLineOfSightTo
    //   IsSensorActor, OnTimer, SensePawn, SetPeripheralVisionAngle, SetSensingInterval
    //   SetSensingUpdatesEnabled, SetTimer, ShouldCheckAudibilityOf, ShouldCheckVisibilityOf
    //   UpdateAISensing
};
