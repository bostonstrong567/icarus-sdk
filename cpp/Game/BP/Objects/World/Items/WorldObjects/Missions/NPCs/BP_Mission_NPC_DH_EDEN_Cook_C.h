// /Game/BP/Objects/World/Items/WorldObjects/Missions/NPCs/BP_Mission_NPC_DH_EDEN_Cook.BP_Mission_NPC_DH_EDEN_Cook_C
// Derives from: ABP_Mission_NPC_Reward_C > ABP_Mission_NPC_Base_C > AIcarusNPCMissionCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x870, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mission_NPC_DH_EDEN_Cook_C : public ABP_Mission_NPC_Reward_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0840, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh2;  // 0x0848, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0850, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0858, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle Timer;  // 0x0860, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_NPC_Chef_C* Shop;  // 0x0868, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_NPC_DH_EDEN_Cook(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindShop();
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
};
