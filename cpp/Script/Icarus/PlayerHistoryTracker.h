// /Script/Icarus.PlayerHistoryTracker
// Derives from: AIcarusActor > AActor > UObject
// size 0x2D0, declared in Icarus/Source/Icarus/Systems/PlayerTracker/PlayerHistoryTracker.h

UCLASS(Config=Engine)
class APlayerHistoryTracker : public AIcarusActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Replicated) TArray<FPlayerHistoryEntry> History;  // 0x02C0, size 0x10
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPlayerIndex(AIcarusPlayerState* Player) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FPlayerHistoryEntry GetPlayerInfo(int32 Index) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetPlayerInfoFromID(FString PlayerID, FPlayerHistoryEntry& OutData) const;  // parameters 0x39
};
