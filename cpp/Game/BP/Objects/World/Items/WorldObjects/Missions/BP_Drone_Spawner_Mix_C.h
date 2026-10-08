// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Drone_Spawner_Mix.BP_Drone_Spawner_Mix_C
// Derives from: ABP_Drone_Spawner_C > ABP_Faction_Mission_Spawner_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x508, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Drone_Spawner_Mix_C : public ABP_Drone_Spawner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0500, size 0x8

    UFUNCTION(BlueprintCallable) void AttemptSpawn();
    UFUNCTION() void ExecuteUbergraph_BP_Drone_Spawner_Mix(int32 EntryPoint);  // parameters 0x4
};
