// /Script/Icarus.PlayerCharacterState
// Derives from: USurvivalCharacterState > UCharacterState > UActorState > UActorComponent > UObject
// size 0x4A0, declared in Icarus/Source/Icarus/Characters/PlayerCharacterState.h

UCLASS(Config=Engine)
class UPlayerCharacterState : public USurvivalCharacterState
{
public:
    UPROPERTY(BlueprintAssignable) FProspectLocationChanged OnProspectLocationChanged;  // 0x03A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EProspectLocation CurrentProspectLocation;  // 0x03A1, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FWeatherEventsRowHandle LocalWeatherEvent;  // 0x0468, size 0x18
    UPROPERTY(BlueprintAssignable) FLocalWeatherEventUpdatedSignature LocalWeatherEventUpdated;  // 0x0480, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 AIDetectionPercentage;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bWasDeadOnReload;  // 0x0494, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    float ProspectLocationUpdateDelayTimer;  // 0x03A4, private
    const float StatisticsUpdatedToTrackerFrequency;  // 0x03A8, private
    const float StatisticsPollFrequency;  // 0x03AC, private
    float StatisticsUpdatedTimer;  // 0x03B0, private
    float StatisticsPollTimer;  // 0x03B4, private
    TMap<enum EProspectLocation,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EProspectLocation,int,0> > AccumulatedMovementInCMPerBiome;  // 0x03B8, private
    TMap<enum EProspectLocation,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EProspectLocation,int,0> > AccumulatedTimeInSecondsPerBiome;  // 0x0408, private
    FVector StatisticsPreviousPosition;  // 0x0458
    EProspectLocation StatisticsPreviousLocation;  // 0x0464
    FTimerHandle AIDetectionUpdateTimer;  // 0x0498, private

    UFUNCTION() void CheckForNewWeatherEvent();
    UFUNCTION(BlueprintNativeEvent) void OnLocalWeatherEventUpdated();
    UFUNCTION() void OnRep_LocalWeatherEvent();
    UFUNCTION(BlueprintCallable) void UpdateAIDetection();

    // Virtual functions that start here:
    //   OnLocalWeatherEventUpdated_Implementation
};
