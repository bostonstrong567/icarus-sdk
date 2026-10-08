// /Game/BP/Objects/World/Items/WorldObjects/Missions/NPCs/BP_Mission_NPC_Colonist_B_Injured.BP_Mission_NPC_Colonist_B_Injured_C
// Derives from: ABP_Mission_NPC_C > ABP_Mission_NPC_Base_C > AIcarusNPCMissionCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x8A0, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mission_NPC_Colonist_B_Injured_C : public ABP_Mission_NPC_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0890, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Head;  // 0x0898, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_NPC_Colonist_B_Injured(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
