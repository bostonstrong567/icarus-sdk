// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_NPC_Norex.BP_NPC_Norex_C
// Derives from: ABP_NPC_Trader_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xA10, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_NPC_Norex_C : public ABP_NPC_Trader_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Chest;  // 0x09E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Feet;  // 0x09F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Legs;  // 0x09F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Arms;  // 0x0A00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Head;  // 0x0A08, size 0x8

    UFUNCTION(BlueprintCallable) void Cleanup();
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Norex(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Invite();
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnProcessingCompleted(FProcessingItem Item);  // parameters 0x24
};
