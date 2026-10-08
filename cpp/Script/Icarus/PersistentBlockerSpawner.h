// /Script/Icarus.PersistentBlockerSpawner
// Derives from: AIcarusActor > AActor > UObject
// size 0x308, declared in Icarus/Source/Icarus/Systems/Blockers/PersistentBlockerSpawner.h

UCLASS(Config=Engine)
class APersistentBlockerSpawner : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<APersistentBlocker> BlockerClass;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentsRowHandle UnlockTalent;  // 0x02C8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle LinkedFactionMission;  // 0x02E0, size 0x18
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) bool bHasSpawned;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) APersistentBlocker* SpawnedBlocker;  // 0x0300, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasSpawned();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetBlocker(APersistentBlocker* Blocker);  // parameters 0x8
};
