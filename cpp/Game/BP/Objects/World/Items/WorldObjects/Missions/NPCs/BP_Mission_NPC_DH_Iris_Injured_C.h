// /Game/BP/Objects/World/Items/WorldObjects/Missions/NPCs/BP_Mission_NPC_DH_Iris_Injured.BP_Mission_NPC_DH_Iris_Injured_C
// Derives from: ABP_Mission_NPC_C > ABP_Mission_NPC_Base_C > AIcarusNPCMissionCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x8B0, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mission_NPC_DH_Iris_Injured_C : public ABP_Mission_NPC_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* HurtLoopAudio;  // 0x0890, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0898, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal_Blood1;  // 0x08A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal_Blood;  // 0x08A8, size 0x8

    UFUNCTION(BlueprintCallable) void StabilityUpdated();
};
