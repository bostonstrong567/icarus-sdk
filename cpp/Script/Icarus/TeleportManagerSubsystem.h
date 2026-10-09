// /Script/Icarus.TeleportManagerSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x198, declared in Icarus/Source/Icarus/World/InstancedLevels/TeleportManagerSubSystem.h

UCLASS()
class UTeleportManagerSubsystem : public UWorldSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TMap<FString, FLoadedLevelInfo> LoadedLevelInfo;  // 0x0030, size 0x50
    UPROPERTY() TWeakObjectPtr<AIcarusPlayerCharacter> WaitingCharacter;  // 0x0080, size 0x8
    UPROPERTY() ULevelStreamingDynamic* WaitingLevel;  // 0x0088, size 0x8
    UPROPERTY(Instanced) UTeleportComponent* WaitingRequestor;  // 0x0090, size 0x8
    UPROPERTY() TMap<int32, FRegisteredTeleporters> RegisteredBaseTeleports;  // 0x0098, size 0x50
    UPROPERTY() TMap<int32, FRegisteredTeleporters> RegisteredInstancedTeleports;  // 0x00E8, size 0x50
    UPROPERTY() TMap<int32, ABaseLevelCaveRecorderActor*> RegisteredRecorders;  // 0x0138, size 0x50
    FString LastLoadLevelUniqueLevelName;  // 0x0188, not reflected
public:
    UFUNCTION() void ClientLevelLoadHasCompleted();
    UFUNCTION() void Client_LoadLevel(const FTeleportInfo& TeleportInfo, const FVector& LocationToLoadLevel);  // parameters 0xCC
    UFUNCTION() void Client_UnloadLevel(FString UniqueLevelName);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) ABaseLevelTeleport* GetPeerForTeleport(ABaseLevelTeleport* InTeleport) const;  // parameters 0x10
    UFUNCTION() void LevelLoadHasCompleted();
    UFUNCTION() void LevelWasAlreadyLoaded();
    UFUNCTION() void LevelWasUnloaded();
    UFUNCTION(BlueprintCallable) void NotifyPlayerLeft(AIcarusPlayerCharacter* Character, FString UniqueLevelName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void NotifyPlayerLeftDeep(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION() void PlayerDisconnected(AIcarusPlayerController* PlayerController, AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x10
    UFUNCTION() void Server_LoadLevel();
    UFUNCTION() void Server_UnloadLevel(FString UniqueLevelName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool TeleportPlayer_Transform(AIcarusPlayerCharacter* Character, const FTransform& Transform);  // parameters 0x41
};
