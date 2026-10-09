// /Script/Icarus.IcarusRocketSpawnBase
// Derives from: AIcarusActor > AActor > UObject
// size 0x300, declared in Icarus/Source/Icarus/Objects/RocketSpawn.h

UCLASS(Config=Engine)
class AIcarusRocketSpawnBase : public AIcarusActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftClassPtr<AIcarusRocket> SpawnDropshipClass;  // 0x02C0, size 0x28
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FPlayerCharacterID AssignedPlayerID;  // 0x02E8, size 0x18
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetGroupIndex() const;  // parameters 0x4
};
