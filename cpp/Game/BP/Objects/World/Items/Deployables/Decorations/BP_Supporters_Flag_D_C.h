// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_Supporters_Flag_D.BP_Supporters_Flag_D_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x740, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Supporters_Flag_D_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DCO_Flag_RocketWerkz;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* InteractionCollision;  // 0x0738, size 0x8

    UFUNCTION(BlueprintCallable) void Event_Actor_Broken();  // named "Event Actor Broken"
    UFUNCTION() void ExecuteUbergraph_BP_Supporters_Flag_D(int32 EntryPoint);  // parameters 0x4
};
