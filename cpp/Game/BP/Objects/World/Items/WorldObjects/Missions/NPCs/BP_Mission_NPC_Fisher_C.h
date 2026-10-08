// /Game/BP/Objects/World/Items/WorldObjects/Missions/NPCs/BP_Mission_NPC_Fisher.BP_Mission_NPC_Fisher_C
// Derives from: ABP_Mission_NPC_Reward_C > ABP_Mission_NPC_Base_C > AIcarusNPCMissionCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x861, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mission_NPC_Fisher_C : public ABP_Mission_NPC_Reward_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0840, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* FishMesh;  // 0x0848, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Helmet;  // 0x0850, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* FishingRod;  // 0x0858, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<ENPCFishing> FishingState;  // 0x0860, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Mission_NPC_Fisher(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void OnNPCDataUpdated();
    UFUNCTION(BlueprintCallable) void OnRep_FishingState();
    UFUNCTION(BlueprintCallable) void RegisterDialogueSpeaker();
    UFUNCTION(BlueprintCallable) void UpdateState();
};
