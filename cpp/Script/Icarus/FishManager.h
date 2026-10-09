// /Script/Icarus.FishManager
// Derives from: UActorComponent > UObject
// size 0xE0, declared in Icarus/Source/Icarus/AI/Fish/FishManager.h

UCLASS(Config=Game)
class UFishManager : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    int32 MaxFishToSpawn;  // 0x00B0, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bFishEnabled;  // 0x00B4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<AFishActor*> TotalFish;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float WaterZHeight;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) int32 MaxFishToSpawnPerFrame;  // 0x00CC, size 0x4
private:
    UPROPERTY() ALake* OwningLake;  // 0x00D0, size 0x8
    int32 PendingFishToSpawn;  // 0x00D8, not reflected
public:
    UFUNCTION(BlueprintCallable) void FishRemoved();
    UFUNCTION(BlueprintCallable) FVector_NetQuantize GetNextPoint();  // parameters 0xC
};
