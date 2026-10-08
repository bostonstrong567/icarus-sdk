// /Game/BP/Objects/World/Items/Deployables/Doors/BP_Door_Curtain_SilkWeave.BP_Door_Curtain_SilkWeave_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x740, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Door_Curtain_SilkWeave_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* InteractionCollision;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* BlockingCapsule;  // 0x0738, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Door_Curtain_SilkWeave(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
