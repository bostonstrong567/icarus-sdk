// /Script/Icarus.NetworkingStatus
// size 0x60, declared in Icarus/Source/Icarus/Systems/NetworkingStatus.h

USTRUCT()
struct FNetworkingStatus
{
    UPROPERTY(BlueprintReadOnly) FString CurrentHostPlayerName;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadOnly) FString BackupHostPlayerName;  // 0x0010, size 0x10
    UPROPERTY(BlueprintReadOnly) TArray<FString> PlayerNames;  // 0x0020, size 0x10
    UPROPERTY(BlueprintReadOnly) TArray<int32> PlayerPing;  // 0x0030, size 0x10
    UPROPERTY(BlueprintReadOnly) bool bSavedLocally;  // 0x0040, size 0x1
    UPROPERTY(BlueprintReadOnly) float TimeBetweenStateSaves;  // 0x0044, size 0x4
    UPROPERTY(BlueprintReadOnly) float TimeSinceDatabaseSave;  // 0x0048, size 0x4
    UPROPERTY(BlueprintReadOnly) float TimeBetweenHeartbeats;  // 0x004C, size 0x4
    UPROPERTY(BlueprintReadOnly) float TimeSinceHeartbeat;  // 0x0050, size 0x4
    UPROPERTY(BlueprintReadOnly) float EndProspectUpdateTimeout;  // 0x0054, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 UpdateProspectStateFailedCounter;  // 0x0058, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 UpdateUnrealSessionFailedCounter;  // 0x005C, size 0x4
};
