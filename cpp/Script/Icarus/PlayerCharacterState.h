// /Script/Icarus.PlayerCharacterState
// Derives from: USurvivalCharacterState > UCharacterState > UActorState > UActorComponent > UObject
// size 0x4A0, declared in Icarus/Source/Icarus/Characters/PlayerCharacterState.h

UCLASS(Config=Engine)
class UPlayerCharacterState : public USurvivalCharacterState
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FProspectLocationChanged OnProspectLocationChanged;  // 0x03A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EProspectLocation CurrentProspectLocation;  // 0x03A1, size 0x1
    FVector StatisticsPreviousPosition;  // 0x0458, not reflected
    EProspectLocation StatisticsPreviousLocation;  // 0x0464, not reflected
    UPROPERTY(BlueprintAssignable) FLocalWeatherEventUpdatedSignature LocalWeatherEventUpdated;  // 0x0480, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 AIDetectionPercentage;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bWasDeadOnReload;  // 0x0494, size 0x1
protected:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FWeatherEventsRowHandle LocalWeatherEvent;  // 0x0468, size 0x18
private:
    float ProspectLocationUpdateDelayTimer;  // 0x03A4, not reflected
    const float StatisticsUpdatedToTrackerFrequency;  // 0x03A8, not reflected
    const float StatisticsPollFrequency;  // 0x03AC, not reflected
    float StatisticsUpdatedTimer;  // 0x03B0, not reflected
    float StatisticsPollTimer;  // 0x03B4, not reflected
    TMap<enum EProspectLocation,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EProspectLocation,int,0> > AccumulatedMovementInCMPerBiome;  // 0x03B8, not reflected
    TMap<enum EProspectLocation,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EProspectLocation,int,0> > AccumulatedTimeInSecondsPerBiome;  // 0x0408, not reflected
    FTimerHandle AIDetectionUpdateTimer;  // 0x0498, not reflected
public:
    UFUNCTION() void CheckForNewWeatherEvent();
    UFUNCTION(BlueprintNativeEvent) void OnLocalWeatherEventUpdated();
    UFUNCTION() void OnRep_LocalWeatherEvent();
    UFUNCTION(BlueprintCallable) void UpdateAIDetection();

    // Virtual functions that start here:
    //   OnLocalWeatherEventUpdated_Implementation
};
