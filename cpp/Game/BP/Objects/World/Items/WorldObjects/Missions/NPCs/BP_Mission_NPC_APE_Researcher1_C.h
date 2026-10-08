// /Game/BP/Objects/World/Items/WorldObjects/Missions/NPCs/BP_Mission_NPC_APE_Researcher1.BP_Mission_NPC_APE_Researcher1_C
// Derives from: ABP_Mission_NPC_C > ABP_Mission_NPC_Base_C > AIcarusNPCMissionCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x8A0, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mission_NPC_APE_Researcher1_C : public ABP_Mission_NPC_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal_Blood;  // 0x0890, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_RecoveryBeacon_C* BPC_RecoveryBeacon;  // 0x0898, size 0x8
};
