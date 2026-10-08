// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Dressing_MoHelmet.BP_Dressing_MoHelmet_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x359, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Dressing_MoHelmet_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DroneFlare1;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_R;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0340, size 0x8
    UPROPERTY() float Timeline_0_Alpha1_81AA86D5464123220FC513B307C7ED03;  // 0x0348, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_81AA86D5464123220FC513B307C7ED03;  // 0x034C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bInteracted;  // 0x0358, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Dressing_MoHelmet(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_bInteracted();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
