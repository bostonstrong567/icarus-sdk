// /Game/BP/Objects/World/Items/WorldObjects/Missions/NPCs/BP_Mission_NPC_RG_Miner4.BP_Mission_NPC_RG_Miner4_C
// Derives from: ABP_Mission_NPC_C > ABP_Mission_NPC_Base_C > AIcarusNPCMissionCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x898, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mission_NPC_RG_Miner4_C : public ABP_Mission_NPC_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal_Blood;  // 0x0890, size 0x8

    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
