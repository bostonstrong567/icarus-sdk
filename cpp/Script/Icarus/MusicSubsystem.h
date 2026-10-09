// /Script/Icarus.MusicSubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0xF0, declared in Icarus/Source/Icarus/Audio/Music/MusicSubsystem.h

UCLASS()
class UMusicSubsystem : public UGameInstanceSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    FMusicSubsystemConfig CurrentConfig;  // 0x0030, not reflected
    UPROPERTY() TArray<UMusicPlayer*> MusicPlayers;  // 0x0038, size 0x10
    bool bMusicCanPlay;  // 0x0048, not reflected
    bool bAutoTrackChangeEnabled;  // 0x0049, not reflected
    FTimerHandle WaitTimerHandle;  // 0x0050, not reflected
    TArray<FMusicTrack const *,TSizedDefaultAllocator<32> > TrackHistory;  // 0x0058, not reflected
    uint8 PlayerStateCondition;  // 0x0068, not reflected
    uint8 CombatCondition;  // 0x0069, not reflected
    uint8 TimeOfDayCondition;  // 0x006A, not reflected
    uint8 WeatherCondition;  // 0x006B, not reflected
    uint8 DropTimeCondition;  // 0x006C, not reflected
    uint8 DropStateCondition;  // 0x006D, not reflected
    uint8 GameplayEventCondition;  // 0x006E, not reflected
    uint8 DisasterCondition;  // 0x006F, not reflected
    FMusicLocationConditionsRowHandle LocationCondition;  // 0x0070, not reflected
    FMusicQuestConditionsRowHandle QuestCondition;  // 0x0088, not reflected
    UPROPERTY() TMap<FMusicTrackStateGroupsRowHandle, int32> TrackStates;  // 0x00A0, size 0x50
public:
    UFUNCTION(BlueprintCallable) void SetAutoTrackChangeEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetConditionCombatState(EMusicConditionCombatState NewCombatState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetConditionDisaster(EMusicConditionDisaster NewDisaster);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetConditionDropState(EMusicConditionDropState NewDropState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetConditionDropTime(EMusicConditionDropTime NewDropTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetConditionGameplayEvent(EMusicConditionGameplayEvent GameplayEvent);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetConditionLocation(FMusicLocationConditionsRowHandle NewLocation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetConditionPlayerState(EMusicConditionPlayerState NewPlayerState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetConditionQuest(FMusicQuestConditionsRowHandle NewQuest);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetConditionTimeOfDay(EMusicConditionTimeOfDay NewTimeOfDay);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetConditionWeather(EMusicConditionWeather NewWeather);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetConfig(const FMusicSubsystemConfig& Config);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetTrackState(FMusicTrackStateGroupsRowHandle StateGroup, int32 StateIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void StartMusic();
    UFUNCTION(BlueprintCallable) void StopMusic();
};
