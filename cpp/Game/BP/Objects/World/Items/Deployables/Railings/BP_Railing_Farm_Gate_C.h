// /Game/BP/Objects/World/Items/Deployables/Railings/BP_Railing_Farm_Gate.BP_Railing_Farm_Gate_C
// Derives from: ABP_Door_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x780, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Railing_Farm_Gate_C : public ABP_Door_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_BLD_Farm_Gate_Wood_Post;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_BLD_Farm_Gate_Wood_Door;  // 0x0778, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Railing_Farm_Gate(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
