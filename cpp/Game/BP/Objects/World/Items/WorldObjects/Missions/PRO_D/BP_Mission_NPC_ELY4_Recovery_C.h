// /Game/BP/Objects/World/Items/WorldObjects/Missions/PRO_D/BP_Mission_NPC_ELY4_Recovery.BP_Mission_NPC_ELY4_Recovery_C
// Derives from: ABP_Mission_NPC_C > ABP_Mission_NPC_Base_C > AIcarusNPCMissionCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x898, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mission_NPC_ELY4_Recovery_C : public ABP_Mission_NPC_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0890, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_NPC_ELY4_Recovery(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
