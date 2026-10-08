// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Interactable_Den.BP_Mission_Interactable_Den_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x368, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Interactable_Den_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_SandMould;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Extermination_SandwormClue_3;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flies2;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flies;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flies1;  // 0x0360, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_Interactable_Den(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
