// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_Mission_Spawner_Alpha.BP_Faction_Mission_Spawner_Alpha_C
// Derives from: ABP_Faction_Mission_Spawner_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_Spawner_Alpha_C : public ABP_Faction_Mission_Spawner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ObjectMesh1;  // 0x0490, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Faction_Mission_Spawner_Alpha(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
