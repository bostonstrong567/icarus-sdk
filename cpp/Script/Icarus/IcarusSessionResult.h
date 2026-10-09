// /Script/Icarus.IcarusSessionResult
// Derives from: UObject
// size 0x200, declared in Icarus/Source/Icarus/Session/SessionTypes.h

UCLASS()
class UIcarusSessionResult : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusSession SessionInfo;  // 0x0028, size 0x1C0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FriendCount;  // 0x01E8, size 0x4
    bool bDuplicate;  // 0x01EC, not reflected
    FString UniqueID;  // 0x01F0, not reflected

    UFUNCTION(BlueprintCallable, BlueprintPure) EMissionDifficulty GetDifficulty();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) int64 GetDuration();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FFactionMissionsRowHandle GetFactionMissionRow();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetIsHardcore();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaxPlayerCount();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPing();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPlayerCount();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetProspectID();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FProspectInfo GetProspectInfo();  // parameters 0xA0
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetProspectName();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FProspectListRowHandle GetProspectRow();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetSessionName();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetSessionVersion();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsInLobby();  // parameters 0x1
};
